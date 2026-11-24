#ifndef CAMP_CAMP_TALK_WORK_H
#define CAMP_CAMP_TALK_WORK_H
#include "common.h"
#include <stddef.h>

struct ScriptProcess;

struct CampTalkWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 workflowState;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 step;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ void *resultScript;
    /* 0x14 */ ScriptProcess *scriptProcess;
    /* 0x18 */ void *resultMessages;
    /* 0x1C */ void *levelUpScript;
    /* 0x20 */ ScriptProcess *levelUpProcess;
    /* 0x24 */ void *portraitFile;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ s32 firstSelection;
    /* 0x30 */ s32 selectedSlot;  /* saved party slot matching the first selection */
};
typedef char CampTalkWorkOffsets[
    offsetof(CampTalkWork, workflowState) == 4 && offsetof(CampTalkWork, step) == 8 &&
    offsetof(CampTalkWork, resultScript) == 0x10 &&
    offsetof(CampTalkWork, resultMessages) == 0x18 &&
    offsetof(CampTalkWork, levelUpScript) == 0x1C &&
    offsetof(CampTalkWork, portraitFile) == 0x24 &&
    offsetof(CampTalkWork, firstSelection) == 0x2C &&
    offsetof(CampTalkWork, selectedSlot) == 0x30 &&
    sizeof(CampTalkWork) == 0x34 ? 1 : -1];
#endif
