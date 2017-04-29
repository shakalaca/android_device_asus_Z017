/*
   Copyright (c) 2014, The Linux Foundation. All rights reserved.
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.
   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

void vendor_load_properties()
{
    std::string project = property_get("ro.boot.id.prj");
    if (project == "6") {
        property_set("ro.build.product", "ZE520KL");
        property_set("ro.product.device", "ASUS_Z017D");
        property_set("ro.product.model", "lineage_Z017");
        property_set("ro.product.name", "Lineage_Z017");
        property_set("ro.build.description", "Lineage_Z017-user 7.1.2 N2G47E 9487 release-keys");
        property_set("ro.build.fingerprint", "Asus/Lineage_Z017/ASUS_Z017D_1:7.1.2/N2G47E/9487:user/release-keys");
    } else if (project == "7") {
        property_set("ro.build.product", "ZE552KL");
        property_set("ro.product.device", "ASUS_Z012D");
        property_set("ro.product.model", "lineage_Z012");
        property_set("ro.product.name", "Lineage_Z012");
        property_set("ro.build.description", "Lineage_Z012-user 7.1.2 N2G47E 9487 release-keys");
        property_set("ro.build.fingerprint", "Asus/Lineage_Z012/ASUS_Z012D:7.1.2/N2G47E/9487:user/release-keys");
    }
}
