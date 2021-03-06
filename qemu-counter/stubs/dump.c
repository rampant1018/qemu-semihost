/*
 * QEMU dump
 *
 * Copyright Fujitsu, Corp. 2011, 2012
 *
 * Authors:
 *     Wen Congyang <wency@cn.fujitsu.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 *
 */

#include "qemu-common.h"
#include "sysemu/dump.h"
#include "qapi/qmp/qerror.h"
#include "qmp-commands.h"

int cpu_get_dump_info(ArchDumpInfo *info)
{
    return -1;
}

ssize_t cpu_get_note_size(int class, int machine, int nr_cpus)
{
    return -1;
}

