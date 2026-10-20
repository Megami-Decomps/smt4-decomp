#include "common.h"

extern "C" {

typedef struct EventTex {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobsA[16];
    /* 0x44 */ s32 countA;
    /* 0x48 */ u8 unk48[4];
    /* 0x4C */ u32 jobsB[16];
} EventTex;

extern EventTex *g_eventTex;

extern s32 jobIsValid(u32 job);
extern s32 jobGetStatus(u32 job);
extern s32 eventTexJobGetId(u32 job);
extern void FUN_001656e0(u32 job, s32 selected);
extern u32 FUN_00169580(u32 job);
extern s32 FUN_00167898(u32 job);
extern void FUN_0016572c(u32 job, s32 selected);
extern u32 FUN_00169590(u32 job);
extern void FUN_00167f24(u32 arg);

/* Selects the event-texture jobs whose id is `id` and deselects the others; 1 if any matched. */
s32 FUN_001527e4(s32 id)
{
    EventTex *eventTex = g_eventTex;
    s32 found;
    s32 i;

    if (eventTex == NULL) {
        return 0;
    }
    found = 0;
    for (i = 0; i < eventTex->countA; i++) {
        if (jobIsValid(eventTex->jobsA[i]) != 0 && jobGetStatus(eventTex->jobsA[i]) != 4) {
            if (eventTexJobGetId(eventTex->jobsA[i]) == id) {
                FUN_001656e0(eventTex->jobsA[i], 1);
                FUN_00167f24(FUN_00169580(eventTex->jobsA[i]) & 0xFF);
                found = 1;
            } else {
                FUN_001656e0(eventTex->jobsA[i], 0);
            }
        }
    }
    for (i = 0; i < 16; i++) {
        if (jobIsValid(eventTex->jobsB[i]) != 0) {
            if (FUN_00167898(eventTex->jobsB[i]) == id) {
                FUN_0016572c(eventTex->jobsB[i], 1);
                FUN_00167f24(FUN_00169590(eventTex->jobsB[i]) & 0xFF);
                found = 1;
            } else {
                FUN_0016572c(eventTex->jobsB[i], 0);
            }
        }
    }
    return found;
}

} /* extern "C" */
