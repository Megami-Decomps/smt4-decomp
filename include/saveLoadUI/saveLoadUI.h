/* saveLoadUI/saveLoadUI.c: the save/load screen's controller. */
#ifndef SAVELOADUI_SAVELOADUI_H
#define SAVELOADUI_SAVELOADUI_H

#include "common.h"

/* IV: the save/load screen's work area. */
typedef struct SaveLoadUIWork {
    /* 0x00 */ u32 task;                   /* the screen's task handle */
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[0x3];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ u8 unk10[0x378];
} SaveLoadUIWork;

#endif
