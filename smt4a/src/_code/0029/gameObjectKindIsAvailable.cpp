#include "common.h"

extern "C" {

extern u8 *gameFlagsGetBlock(void);
extern u32 FUN_00324f74(s32 kind);

/* Whether the flag entry `id` (ids 0x2C-0x2F share entry 0x2B; 0x18 never counts) is both set in its table and marked in the flag block. */
u8 gameObjectKindIsAvailable(int id)
{
    struct ObjectKindFlags {
        u8 prefix[0xE48];
        s8 enabled[0x2C];
    };
    const ObjectKindFlags *block = reinterpret_cast<const ObjectKindFlags *>(gameFlagsGetBlock());

    if (id != 0x18) {
        if (id == 0x2C || id == 0x2D || id == 0x2E || id == 0x2F) {
            id = 0x2B;
        }
        u32 lookup = FUN_00324f74(id);
        if (lookup == 1 && block->enabled[id] == 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
