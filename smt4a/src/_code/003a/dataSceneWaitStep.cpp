#include "shard/Shard003A.h"

extern "C" {

typedef struct DataScene {
    /* 0x000 */ u8 unk000[0x3B0];
    /* 0x3B0 */ u32 unk3B0;
    /* 0x3B4 */ u8 unk3B4[8];
    /* 0x3BC */ u32 unk3BC;
    /* 0x3C0 */ u8 unk3C0[0x1C];
    /* 0x3DC */ u32 flags;
    /* 0x3E0 */ u8 unk3E0[0x3F5];
    /* 0x7D5 */ u8 unk7D5;
} DataScene;

extern u32 maskToCode(void);
extern s32 dataStoreIsFinished(void);
extern void dataStoreShutdown(void);

/* Waits for the data store to finish; then updates the scene flags and moves to state 3. */
u32 dataSceneWaitStep(DataScene *scene)
{
    u32 next = 0;

    if (scene->unk7D5 != 1) {
        scene->flags &= ~0x20;
        scene->unk3B0 = maskToCode();
        return 3;
    }
    if (dataStoreIsFinished() != 0) {
        dataStoreShutdown();
        scene->flags &= ~0x20;
        scene->unk3BC = 0;
        scene->unk3B0 = maskToCode();
        next = 3;
    }
    return next;
}

} /* extern "C" */
