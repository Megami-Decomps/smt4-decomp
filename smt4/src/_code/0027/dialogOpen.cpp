/* Starts the countdown (30 frames) with the given mode byte: marks the object active and resets its timer. */
#include "common.h"
#include "util/DialogOpen.h"

extern "C" {

typedef struct Countdown {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 active;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u32 frames;
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ u8 started;
    /* 0x21 */ u8 unk21[2];
    /* 0x23 */ u8 mode;
    /* 0x24 */ u8 unk24[0x20];
    /* 0x44 */ u8 timer[1];
} Countdown;

extern Countdown *g_infoWin;

extern void timerStart(void *timer, s32 a, s32 b);

void dialogOpen(u8 mode)
{
    Countdown *countdown = g_infoWin;

    countdown->active = 1;
    timerStart(countdown->timer, 0, 0);
    countdown->mode = mode;
    countdown->started = 1;
    countdown->frames = 30;
}

}
