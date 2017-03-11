#!/sbin/sh

mount -r -t ext4 /dev/block/bootdevice/by-name/system /system
mount -o rw,remount /factory

grep -v "ro.build.fingerprint" /factory/factory.prop > /factory/f.prop.tmp
grep "ro.build.fingerprint" /system/build.prop >> /factory/f.prop.tmp
mv /factory/f.prop.tmp /factory/factory.prop

mount -o ro,remount /factory
umount /system
