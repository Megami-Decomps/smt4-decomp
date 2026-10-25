#include "common.h"

extern "C" {

typedef struct PopupCursor {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 confirmed;
} PopupCursor;

typedef struct PopupTask {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ u8 unk00C[0x374];
    /* 0x380 */ u8 panel[0x28];
    /* 0x3A8 */ u8 intro[0x20];
    /* 0x3C8 */ PopupCursor cursor;
    /* 0x453 */ u8 unk453[0x860 - 0x3C8 - 0x8B];
    /* 0x860 */ u32 choice;
} PopupTask;

extern int pointConvertToFloat(void *panel, u32 x, u32 y);
extern int FUN_00233240(void *intro, int arg);
extern int FUN_002b8ee0(PopupCursor *cursor, int arg);
extern int FUN_0029e0f8(void);
extern u32 vec2GetYInt(PopupCursor *cursor);
extern u32 vec2GetXInt(PopupCursor *cursor);
extern s8 uiSpriteGetCompletionState(const PopupCursor *cursor);

/* Per-frame update: step 0 starts the intro, step 1 follows the cursor and, once confirmed, picks the next state from the choice. */
void FUN_003a0b78(PopupTask *task)
{
    PopupCursor *cursor;
    u32 y;
    u32 x;

    if (task->step == 0) {
        FUN_00233240(task->intro, 0);
        task->step = 1;
        return;
    }
    if (task->step == 1) {
        cursor = &task->cursor;
        FUN_002b8ee0(cursor, 0);
        y = vec2GetYInt(cursor);
        x = vec2GetXInt(cursor);
        pointConvertToFloat(task->panel, x, y);
        if (uiSpriteGetCompletionState(cursor) != 0) {
            switch (task->choice) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                if (FUN_0029e0f8() != 0) {
                    task->state = 0xF;
                    task->step = 0;
                    return;
                }
                break;
            case 7:
                task->state = 0xF;
                task->step = 0;
                return;
            case 8:
                task->state = 0x10;
                task->step = 0;
                return;
            }
        }
    }
}

} /* extern "C" */
