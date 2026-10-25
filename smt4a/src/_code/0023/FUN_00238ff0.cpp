/* NON_MATCHING: retail copies position -> previous with ldm/stm (add r2,r4,#16; ldm {r2,ip}) and stores target as one 3-word stm; this build uses ldrd/strd and a separate store. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct IVec2 {
    s32 x;
    s32 y;
} IVec2;

typedef struct IVec3 {
    s32 x;
    s32 y;
    s32 z;
} IVec3;

typedef struct Window {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ IVec2 position;
    /* 0x18 */ u8 unk18[0x58];
    /* 0x70 */ IVec2 previous;
    /* 0x78 */ IVec3 target;
    /* 0x84 */ s32 immediate;
} Window;

extern s32 scrGetArg(s32 index);

/* Script command: gives the job's window a new target position (arguments 1 and 2, offset to its corner); when argument 3 is 0 it moves there at once. Returns 1. */
u32 FUN_00238ff0(void)
{
    Window *window = (Window *)jobGetWork(scrGetArg(0));
    if (window != NULL) {
        s32 x = scrGetArg(1);
        s32 y = scrGetArg(2);
        s32 immediate = scrGetArg(3);

        window->immediate = immediate;
        window->target.x = x - 0x38;
        window->target.y = y - 8;
        window->target.z = 0;
        window->previous.x = window->position.x;
        window->previous.y = window->position.y;
        if (immediate == 0) {
            window->position.x = x - 0x38;
            window->position.y = y - 0x38;
            return 1;
        }
    }
    return 1;
}

} /* extern "C" */
