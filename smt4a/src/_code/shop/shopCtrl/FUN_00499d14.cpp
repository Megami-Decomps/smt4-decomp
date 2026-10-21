#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00000 */ u8 unk00000[0x14];
    /* 0x00014 */ s32 mode;
    /* 0x00018 */ u8 unk00018[0x15FEC];
    /* 0x16004 */ u32 active;
    /* 0x16008 */ u32 unk16008;
    /* 0x1600C */ u8 unk1600c[0x1C];
    /* 0x16028 */ void *secondList;
} Scene;

s32 FUN_002c7e6c(void);
s32 FUN_002c85b0(u32 arg);
s32 FUN_002c7ce8(s32 arg);
u32 gameGetPlayerData(void);
s32 FUN_0033449c(s32 arg);
s32 gameGlobalsQueueValues(u32 data, s32 arg);
s32 FUN_00372100(u32 data, s32 arg);
s32 FUN_00345718(void);
s32 FUN_00284f90(s32 arg);
void *FUN_00178b04(u32 size, const char *file, s32 line);
void *FUN_0040ac08(void *memory);
void FUN_0040aa6c(void *list, const char *name);

/* Resets the scene's player state and creates its second model list on first use. */
void FUN_00499d14(Scene *scene)
{
    u32 value;
    u32 player;
    void *list;

    FUN_002c7e6c();
    if (scene->mode == 1) {
        value = 3;
    } else {
        value = 8;
    }
    FUN_002c85b0(value);
    FUN_002c7ce8(0);
    player = gameGetPlayerData();
    FUN_0033449c(1);
    gameGlobalsQueueValues(player, 0);
    FUN_00372100(player, 0);
    scene->active = 1;
    FUN_00345718();
    FUN_00284f90(0);
    if (scene->secondList == NULL) {
        list = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\shop\\shopCtrl.cpp", 1997);
        if (list != NULL) {
            list = FUN_0040ac08(list);
        }
        scene->secondList = list;
        FUN_0040aa6c(list, "player/pl_dammy.bam");
    }
    scene->unk16008 = 0;
}

} /* extern "C" */
