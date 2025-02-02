# Copyright (C) 2021, RTE (http://www.rte-france.com)
# SPDX-License-Identifier: Apache-2.0

#
# Configuration used by users.bbclass
#

USERS_LIST ?= "admin"
USERS_LIST[doc] = "List of users to be added"
USERS_LIST_EXPIRED ?= "admin"
USERS_LIST_EXPIRED[doc] = "List of users with expiration password set"
USERS_LIST_SUDOERS ?= "admin"
USERS_LIST_SUDOERS[doc] = "List of users sudoers"
USERS_LIST_REMOVED ?= "mail"
USERS_LIST_REMOVED[doc] = "List of users to remove"
USERS_LIST_LOCKED ?= "daemon sync qemu systemd-bus-proxy systemd-timesync \
    systemd-resolve systemd-network ceph sshd coroqnetd messagebus hacluster nobody"
USERS_LIST_LOCKED[doc] = "List of users to lock"

# Configure users with the ansible key enabled
USERS_SSH_ANSIBLE = "admin root"

# Groups set for users
GROUP_LIST[admin] = "admin"
