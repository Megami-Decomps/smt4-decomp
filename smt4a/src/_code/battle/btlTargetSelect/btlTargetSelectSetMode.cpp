#include "common.h"

/* The target cursor's animation state. */
struct TargetSelectCursor {
    /* 0x00 */ u8 unk00[0xa5];
    /* 0xA5 */ u8 visible;
    /* 0xA6 */ u8 unkA6[2];
    /* 0xA8 */ f32 unkA8;
    /* 0xAC */ f32 speed;
    /* 0xB0 */ f32 unkB0;
    /* 0xB4 */ u8 unkB4[4];
    /* 0xB8 */ f32 unkB8;
    /* 0xBC */ s32 frame;
    /* 0xC0 */ f32 offsets[8];
    /* 0xE0 */ u8 unkE0[4];
    /* 0xE4 */ f32 scrollX;
    /* 0xE8 */ f32 scrollY;
};

/* One line of the target panel. */
struct TargetSelectLine {
    /* 0x0 */ u8 unk0[3];
    /* 0x3 */ u8 highlighted;
    /* 0x4 */ u8 unk4[4];
    /* 0x8 */ f32 scrollX;
    /* 0xC */ f32 scrollY;
};

struct TargetSelectPanel {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ TargetSelectLine lines[5];
};

struct TargetSelectWork {
    /* 0x00 */ TargetSelectCursor *cursor;
    /* 0x04 */ TargetSelectPanel *panel;
    /* 0x08 */ u8 mode;
};

extern "C" {
extern TargetSelectWork *g_btlTargetSelect;

/* Switches the target selection mode: entering mode 1 resets the cursor, leaving mode 2 resets the
 * panel. */
void btlTargetSelectSetMode(u32 mode)
{
    TargetSelectWork *work = g_btlTargetSelect;

    if (work->mode != mode) {
        if (mode == 1) {
            TargetSelectCursor *cursor = work->cursor;
            s32 i;

            cursor->unkB0 = 0.0f;
            cursor->unkA8 = 0.0f;
            cursor->scrollX = 0.0f;
            cursor->scrollY = 40.0f;
            for (i = 0; i < 8; i++) {
                cursor->offsets[i] = 0.0f;
            }
            cursor->unkB8 = 0.0f;
            cursor->speed = 4.0f;
            cursor->frame = 0;
            cursor->visible = 0;
        }
        if (work->mode == 2) {
            TargetSelectPanel *panel = work->panel;

            panel->lines[0].highlighted = 0;
            panel->lines[1].highlighted = 0;
            panel->lines[2].highlighted = 0;
            panel->lines[3].highlighted = 0;
            panel->lines[4].highlighted = 0;
            panel->lines[4].scrollX = 0.0f;
            panel->lines[4].scrollY = 40.0f;
        }
    }
    work->mode = mode;
}

} /* extern "C" */
