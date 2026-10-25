/* NON_MATCHING: retail conditionally executes the kind 1/2 arm (cmp, cmpne, moveq/strdeq) and falls through into the other arm; the build uses branches */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

typedef struct ScenePart00469e1c {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ u32 state;
    /* 0x008 */ u32 unk008;
    /* 0x00c */ u8 unk00c[0xe];
    /* 0x01a */ u8 kind;
    /* 0x01b */ u8 unk01b[0x299];
    /* 0x2b4 */ u32 *handle;
} ScenePart00469e1c;

s32 scrRunOpcodesStub(u32 handle);
void FUN_003d54f8(s32 index, s32 value);
void messageSetMode(s32 value);
void FUN_003c1060(void);

/* Once the handle reports 2, picks the next state (0x10 for kinds 1 and 2, else 3 and resets finished slots), then refreshes. */
void scenePartAdvanceState(ScenePart00469e1c *part)
{
    if (scrRunOpcodesStub(*part->handle) != 2) {
        return;
    }
    if (part->kind == 1 || part->kind == 2) {
        part->state = 0x10;
        part->unk008 = 0;
    } else {
        part->state = 3;
        part->unk008 = 0;
        if (FUN_0013def0(0) == 3) {
            FUN_003d54f8(0, 10);
        }
        if (FUN_0013def0(1) == 3) {
            FUN_003d54f8(1, 10);
        }
    }
    messageSetMode(0);
    FUN_003c1060();
}

} /* extern "C" */
