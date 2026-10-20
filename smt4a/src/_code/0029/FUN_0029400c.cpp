/* NON_MATCHING: scheduling only: retail copies the flag block into r1 (mov r1, r0) right after the first compare; the build sinks the copy into the id-normalising path. */
#include "common.h"

extern "C" {

extern u32 gameFlagsGetBlock(void);
extern u64 FUN_00324f74(int id, u32 block);

/* Whether the flag entry `id` (ids 0x2C-0x2F share entry 0x2B; 0x18 never counts) is both set in its table and marked in the flag block. */
u8 FUN_0029400c(int id)
{
    u32 block = gameFlagsGetBlock();
    u64 lookup;

    if (id != 0x18) {
        if (id == 0x2C || id == 0x2D || id == 0x2E || id == 0x2F) {
            id = 0x2B;
        }
        lookup = FUN_00324f74(id, block);
        if ((int)lookup == 1 && *(s8 *)((int)(lookup >> 32) + id + 0xE48) == 1) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
