#ifndef SYS_MOUNTREGISTRY_H
#define SYS_MOUNTREGISTRY_H
#include "common.h"
#include <stddef.h>

struct MountRegistryEntry {
    /* 0x00 */ u64 name;
    /* 0x08 */ void *device;
    /* 0x0C */ u8 flags;
    /* 0x0D */ u8 mode;
    /* 0x0E */ u8 unk0E[2];
};
typedef char MountRegistryEntryLayoutCheck[
    offsetof(MountRegistryEntry, device) == 8 &&
    offsetof(MountRegistryEntry, flags) == 0xC && sizeof(MountRegistryEntry) == 0x10 ? 1 : -1];
#endif
