/* NON_MATCHING: as its twin smt4a FUN_001aeefc: the name-parse layout matches; the 64-bit pack loop register allocation and the registry stores differ. */
#include "sys/MountRegistry.h"
#include "sys/MountNameKey.h"

extern "C" {
extern MountRegistryEntry DAT_004d43e0[32];
}

extern "C" {
// Register an up-to-seven-character mount prefix, rejecting duplicate names or a full table.
u32 fsMountRegister(const s8 *name, void *device, u8 flags, u8 mode)
{
    u64 key = mountKeyFromName(name);
    if (!key)
        return 0xE0E046BC;
    for (s32 index = 0; index < 32; ++index) {
        MountRegistryEntry *entry = &DAT_004d43e0[index];
        if (!entry->device) {
            entry->name = key;
            entry->device = device;
            entry->flags = flags;
            entry->mode = mode;
            return 0;
        }
        if (entry->name == key)
            return 0xC82044B4;
    }
    return 0xD8604659;
}
}
