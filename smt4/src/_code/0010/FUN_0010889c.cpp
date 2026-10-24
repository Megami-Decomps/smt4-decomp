/* NON_MATCHING: VFP register allocation of the easing temporaries, the table-copy (ldm/str pairs vs retail's grouped stm) and the early-return merging differ; the transition logic is the same. */
#include "common.h"

extern "C" {

/* One animated item of the list (0x8C bytes). */
typedef struct TransitionItem {
    /* 0x00 */ u8 unk00[0x85];
    /* 0x85 */ s8 shown;
    /* 0x86 */ u8 unk86[4];
    /* 0x8A */ s8 settled;
    /* 0x8B */ u8 unk8b;
} TransitionItem;

/* The menu transition's work block (only the fields the tick touches). */
typedef struct TransitionWork {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ s8 active;
    /* 0x01D */ u8 unk01d[3];
    /* 0x020 */ s32 frame;
    /* 0x024 */ s8 closing;
    /* 0x025 */ u8 unk025[3];
    /* 0x028 */ f32 widthScale;
    /* 0x02C */ f32 heightScale;
    /* 0x030 */ f32 speed;
    /* 0x034 */ u8 unk034[0x20];
    /* 0x054 */ TransitionItem items[24];
    /* 0xD74 */ u8 frameWidget[0x8C];
    /* 0xE00 */ u8 closeWidget[0x8C];
    /* 0xE8C */ u8 unke8c[0x9C];
    /* 0xF28 */ s8 enabled;
    /* 0xF29 */ u8 unkf29[2];
    /* 0xF2B */ s8 ready;
} TransitionWork;

TransitionWork *jobGetWork(void);
s32 FUN_002bf818(void *widget);
void FUN_002bf810(u32 sound);
void FUN_0011340c(s32 arg);

/* Ticks the menu's open/close transition: eases the two scales, steps the item animations and
 * their widgets, and finishes by notifying the controller. Always returns 0. */
u8 FUN_0010889c(void)
{
    TransitionWork *work = jobGetWork();

    if (work->enabled == 0) {
        return 0;
    }
    if (work->ready == 0) {
        return 0;
    }
    if (work->active == 0) {
        return 0;
    }
    /* The frame at which each item appears or disappears. */
    s8 frames[24] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9};
    if (work->closing != 0) {
        work->frame++;
        if (work->widthScale > 0.25f) {
            work->widthScale -= 0.13f / work->speed;
        }
        work->widthScale = work->widthScale > 0.25f ? work->widthScale : 0.25f;
        if (work->heightScale > 0.25f) {
            work->heightScale -= 0.11f / work->speed;
        }
        work->heightScale = work->heightScale > 0.25f ? work->heightScale : 0.25f;
        for (s32 i = 0; i < 24; i++) {
            if (work->frame >= frames[i]) {
                work->items[i].shown = 0;
            }
        }
        if (work->items[23].shown == 0) {
            FUN_002bf818(work->frameWidget);
        }
    } else {
        if (work->widthScale < 0.38f) {
            work->widthScale += 0.13f / work->speed;
        }
        work->widthScale = work->widthScale > 0.38f ? 0.38f : work->widthScale;
        if (work->heightScale < 0.36f) {
            work->heightScale += 0.11f / work->speed;
        }
        work->heightScale = work->heightScale > 0.36f ? 0.36f : work->heightScale;
        if (FUN_002bf818(work->frameWidget) == 0) {
            FUN_0011340c(1);
            return 0;
        }
        work->frame++;
        if (work->frame == 1) {
            FUN_002bf810(0x100025A);
        }
        for (s32 i = 0; i < 24; i++) {
            if (work->frame >= frames[i]) {
                FUN_002bf818(&work->items[i]);
            }
        }
        if (work->items[23].settled != 0) {
            FUN_002bf818(work->closeWidget);
        }
    }
    FUN_0011340c(1);
    return 0;
}

}
