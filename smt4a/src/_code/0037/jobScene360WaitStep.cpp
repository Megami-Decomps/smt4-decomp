#include "shard/Shard0037.h"

extern "C" {

typedef struct JobScene360 {
    /* 0x000 */ u8 unk000[0x360];
    /* 0x360 */ u32 job;
    /* 0x364 */ u8 unk364[0x4C];
    /* 0x3B0 */ u32 unk3B0;
    /* 0x3B4 */ u8 unk3B4[8];
    /* 0x3BC */ u32 unk3BC;
    /* 0x3C0 */ u8 unk3C0[0x1C];
    /* 0x3DC */ u32 flags;
} JobScene360;

extern s32 scrRunOpcodesStub(u32 job);
extern void gameDataAddCappedPoints(s32 id);
extern void gameFlagSetValue(s32 index, s32 value, s32 flag);
extern u32 maskToCode(void);
extern void eventQueueAddUnique(u32 value);

/* Waits for the job to finish; then updates the scene flags and moves to state 3. */
u32 jobScene360WaitStep(JobScene360 *scene)
{
    u32 next = 0;

    if (scrRunOpcodesStub(scene->job) == 2) {
        scene->unk3BC = 0;
        gameDataAddCappedPoints(0x28);
        gameFlagSetValue(0x551, 1, 1);
        scene->flags &= ~8;
        scene->unk3B0 = maskToCode();
        eventQueueAddUnique(0x100021E);
        next = 3;
    }
    return next;
}

} /* extern "C" */
