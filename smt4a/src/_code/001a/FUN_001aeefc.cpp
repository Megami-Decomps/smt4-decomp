/* NON_MATCHING: name-parse layout now matches retail; the 64-bit pack loop register allocation (retail shifts the high word first and saves r7) and the registry stores still differ. */
#include "sys/MountRegistry.h"
#include "sys/MountNameKey.h"

extern "C" {
extern MountRegistryEntry DAT_0062d410[32];
}

extern "C" {
// Register an up-to-seven-character mount prefix, rejecting duplicate names or a full table.
u32 FUN_001aeefc(const s8 *name, void *device, u8 flags, u8 mode)
{
    u64 key = mountKeyFromName(name);
    if (!key)
        return 0xE0E046BC;
    for (s32 index = 0; index < 32; ++index) {
        MountRegistryEntry *entry = &DAT_0062d410[index];
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
