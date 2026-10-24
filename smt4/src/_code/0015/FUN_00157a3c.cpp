/* NON_MATCHING: retail receives `scale` on the stack (soft-float argument passing), ours in s0. */
#include "common.h"

extern "C" {

typedef struct Playback {
    u8 unk00[0x0c];
    u8 active;          /* 0x0c */
    u8 pending;         /* 0x0d */
    u8 unk0e[0x36];
    u8 startTimer[0xc]; /* 0x44 */
    u8 endTimer[0x14];  /* 0x50 */
    u32 valueA;         /* 0x64 */
    u32 valueB;         /* 0x68 */
    u32 valueC;         /* 0x6c */
    u8 flag;            /* 0x70 */
    u8 unk71[3];
    f32 scale;          /* 0x74 */
} Playback;

extern void *_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
extern void linkListEraseManagerNode(void *manager, void *timer);
extern void *FUN_002a2174(void);
extern void FUN_002a2164(void *manager, void *timer);

/* Restarts the playback: finishes a pending one, stores the new parameters and arms the start timer. */
void FUN_00157a3c(Playback *playback, u32 valueA, u32 valueB, u32 valueC, u8 flag, f32 scale)
{
    if (playback->active && playback->pending) {
        linkListEraseManagerNode(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), playback->endTimer);
        playback->pending = 0;
    }
    playback->valueA = valueA;
    playback->valueB = valueB;
    playback->valueC = valueC;
    playback->flag = flag;
    playback->scale = scale;
    FUN_002a2164(FUN_002a2174(), playback->startTimer);
    playback->active = 1;
}

} /* extern "C" */
