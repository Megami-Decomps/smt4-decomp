/* NON_MATCHING: the two visibility flags are materialized in r0 (movne first) where retail uses r1
 * (moveq first) after reloading the model pointer into r0; the rest matches. */
#include "common.h"

struct TitleLogoModel {
    /* 0x000 */ u8 unk000[0x120];
    /* 0x120 */ s32 visible;
};

struct TitleLogoEffect {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ s32 visible;
    /* 0x58 */ f32 frame;    /* wraps at 30 */
    /* 0x5c */ f32 rotation; /* degrees, wraps at 360 */
};

struct TitleLogoWork {
    /* 0x00 */ TitleLogoModel *model;
    /* 0x04 */ TitleLogoEffect *effect;
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[0x23];
    /* 0x2c */ u8 fade[4];
    /* 0x30 */ s32 fadeState; /* 113: hidden */
};

extern "C" {
TitleLogoWork *jobGetWork(u32 job);
void FUN_002bf818(void *fade);
void FUN_0034266c(TitleLogoModel *model);

/* Job update: steps the fade, shows the logo unless faded out, and animates it by mode. */
s32 FUN_002e0730(u32 job)
{
    TitleLogoWork *work = jobGetWork(job);
    FUN_002bf818(work->fade);
    s32 fadeState = work->fadeState;
    work->model->visible = fadeState != 113;
    work->effect->visible = fadeState != 113;
    switch (work->mode) {
    case 0:
        break;
    case 1:
        FUN_0034266c(work->model);
        break;
    case 2: {
        TitleLogoEffect *effect = work->effect;
        effect->frame += 1.0f;
        if (effect->frame >= 30.0f) {
            effect->frame -= 30.0f;
        }
        effect->rotation += 12.0f;
        if (effect->rotation > 360.0f) {
            effect->rotation -= 360.0f;
        }
        break;
    }
    }
    return 0;
}
}
