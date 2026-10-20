/* Starts the countdown (30 frames) with the given mode byte: marks the object active, resets its two timers and clears the done flag. */
#include "common.h"

extern "C" {

typedef struct Countdown {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 active;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 frames;
    /* 0x014 */ u8 unk014[0x0C];
    /* 0x020 */ u32 unk20;
    /* 0x024 */ u8 unk024[0x0C];
    /* 0x030 */ u8 started;
    /* 0x031 */ u8 unk031[2];
    /* 0x033 */ u8 mode;
    /* 0x034 */ u8 unk034[0x20];
    /* 0x054 */ u8 timer[0x2D9];
    /* 0x32D */ u8 done;
} Countdown;

extern Countdown *g_infoWin;

extern void uiSpriteSetKeyframe(void *timer, s32 a, s32 b);
extern void uiSpriteSetImageKeyframe(void *timer, s32 a, s32 b);

void dialogOpen(u8 mode)
{
    Countdown *countdown = g_infoWin;

    countdown->active = 1;
    uiSpriteSetKeyframe(countdown->timer, 0, 0);
    uiSpriteSetImageKeyframe(countdown->timer, 0, 0);
    countdown->mode = mode;
    countdown->started = 1;
    countdown->unk20 = 0;
    countdown->frames = 30;
    countdown->done = 0;
}

}
