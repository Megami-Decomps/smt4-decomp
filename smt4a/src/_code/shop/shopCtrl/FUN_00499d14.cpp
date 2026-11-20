#include "common.h"
#include "Model/MoriModelContent.h"

extern "C" {

typedef struct Scene {
    /* 0x00000 */ u8 unk00000[0x14];
    /* 0x00014 */ s32 mode;
    /* 0x00018 */ u8 unk00018[0x15FEC];
    /* 0x16004 */ u32 active;
    /* 0x16008 */ u32 unk16008;
    /* 0x1600C */ u8 unk1600c[0x1C];
    /* 0x16028 */ MoriModelContent *secondList;
} Scene;

s32 statusAcquireSharedResources(void);
s32 gameGlobalsSetSceneState(u32 arg);
s32 statusDownSwitchTab(s32 arg);
u32 gameGetPlayerData(void);
s32 FUN_0033449c(s32 arg);
s32 gameGlobalsQueueValues(u32 data, s32 arg);
s32 FUN_00372100(u32 data, s32 arg);
s32 messageWindowStartTimer(void);
s32 placeWinSetValue(s32 arg);
void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);

/* Resets the scene's player state and creates its second model list on first use. */
void FUN_00499d14(Scene *scene)
{
    u32 value;
    u32 player;
    MoriModelContent *list;

    statusAcquireSharedResources();
    if (scene->mode == 1) {
        value = 3;
    } else {
        value = 8;
    }
    gameGlobalsSetSceneState(value);
    statusDownSwitchTab(0);
    player = gameGetPlayerData();
    FUN_0033449c(1);
    gameGlobalsQueueValues(player, 0);
    FUN_00372100(player, 0);
    scene->active = 1;
    messageWindowStartTimer();
    placeWinSetValue(0);
    if (scene->secondList == NULL) {
        list = static_cast<MoriModelContent *>(asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\shop\\shopCtrl.cpp", 1997));
        if (list != NULL) {
            list = modelListInit(list);
        }
        scene->secondList = list;
        resourceOwnerLoadFileSync(list, "player/pl_dammy.bam");
    }
    scene->unk16008 = 0;
}

} /* extern "C" */
