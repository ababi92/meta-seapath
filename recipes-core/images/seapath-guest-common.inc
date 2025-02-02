# Copyright (C) 2020, RTE (http://www.rte-france.com)
# SPDX-License-Identifier: Apache-2.0

DESCRIPTION = "A common base for guest image"

require seapath-common.inc

inherit security/qa-guest-images

IMAGE_INSTALL_append = " \
    cukinia-tests-vm \
    pacemaker-remote \
    syslog-ng-client \
"
IMAGE_FSTYPES = "wic.qcow2 wic.vmdk"
WKS_FILE = "mkefidisk-guest.wks.in"

# Remove users that do not exist in
# guest images
USERS_LIST_LOCKED_remove = "qemu ceph"
