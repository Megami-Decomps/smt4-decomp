#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00000 */ u8 unk00000[0x10];
    /* 0x00010 */ s32 mode;
    /* 0x00014 */ u8 unk00014[0x15D10];
    /* 0x15D24 */ u32 active;
    /* 0x15D28 */ u32 unk15d28;
    /* 0x15D2C */ u8 unk15d2c[0x1C];
    /* 0x15D48 */ void *secondList;
} Scene;

extern const char DAT_00407648[];  /* "player/pl_dammy.bam" */

s32 FUN_0028c040(void);
s32 gameGlobalsSetSelected(u32 arg);
s32 statusDownSwitchTab(s32 arg);
u32 gameGetPlayerData(void);
s32 FUN_0029c4c8(s32 arg);
s32 FUN_0029a0e8(u32 arg);
s32 FUN_0029a0cc(u32 arg);
s32 messageWindowStartTimer(s32 arg);
s32 FUN_002305e8(s32 arg);
void *asdMdlManagerCreateSecondList(const char *name, u32 arg);

/* Resets the scene's player state and creates its second model list on first use. */
void FUN_00230234(Scene *scene)
{
    u32 value;

    FUN_0028c040();
    if (scene->mode == 1) {
        value = 3;
    } else {
        value = 7;
    }
    gameGlobalsSetSelected(value);
    statusDownSwitchTab(0);
    value = gameGetPlayerData();
    FUN_0029c4c8(1);
    FUN_0029a0e8(value);
    FUN_0029a0cc(value);
    scene->active = 1;
    messageWindowStartTimer(1);
    FUN_002305e8(0);
    if (scene->secondList == NULL) {
        scene->secondList = asdMdlManagerCreateSecondList(DAT_00407648, 7);
    }
    scene->unk15d28 = 0;
}

} /* extern "C" */
