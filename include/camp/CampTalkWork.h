#ifndef CAMP_CAMP_TALK_WORK_H
#define CAMP_CAMP_TALK_WORK_H
#include "common.h"
#include <stddef.h>

struct CampTalkWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ void *resultScript;
    /* 0x14 */ u32 scriptProcess;
    /* 0x18 */ void *resultMessages;
    /* 0x1C */ void *levelUpScript;
    /* 0x20 */ u32 levelUpProcess;
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ s32 firstSelection;
    /* 0x30 */ s32 secondSelection;
};
typedef char CampTalkWorkOffsets[
    offsetof(CampTalkWork, enabled) == 4 &&
    offsetof(CampTalkWork, resultScript) == 0x10 &&
    offsetof(CampTalkWork, resultMessages) == 0x18 &&
    offsetof(CampTalkWork, levelUpScript) == 0x1C &&
    offsetof(CampTalkWork, firstSelection) == 0x2C &&
    sizeof(CampTalkWork) == 0x34 ? 1 : -1];
#endif
