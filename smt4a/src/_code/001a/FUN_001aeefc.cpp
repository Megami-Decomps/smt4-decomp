/* NON_MATCHING: name-pack register assignment, long-name fallback placement, and registry stores differ. */
#include "sys/MountRegistry.h"

extern "C" {
void sysFatalBreak(void);
extern const s8 DAT_00536d10[];
extern MountRegistryEntry DAT_0062d410[32];
}

static inline u64 mountPackName(const s8 *name)
{
    u64 key = 0;
    for (s32 index = 0; index < 8; ++index) {
        s32 character = name[index];
        if (character == ':')
            return key;
        key = (key << 8) | (s64)character;
    }
    return 0;
}

extern "C" {
// Register an up-to-seven-character mount prefix, rejecting duplicate names or a full table.
u32 FUN_001aeefc(const s8 *name, void *device, u8 flags, u8 mode)
{
    s8 prefix[12];
    s32 length = 0;
    for (; length < 8; ++length) {
        s8 character = name[length];
        if (character == 0 || character == ':')
            break;
        prefix[length] = character;
    }
    u64 key;
    if (length == 8) {
        sysFatalBreak();
        key = mountPackName(DAT_00536d10);
    } else {
        prefix[length] = ':';
        key = mountPackName(prefix);
    }
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
