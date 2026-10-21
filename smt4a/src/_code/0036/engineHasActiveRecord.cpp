#include "common.h"

extern "C" {

struct RecordState {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 kind;
};
struct Record {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ RecordState state;
};
struct RecordList {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ Record records[32];
};
extern RecordList *g_engineRecordList;

s32 engineHasActiveRecord(void)
{
    s32 found = 0;
    for (s32 i = 0; i < 32; i++) {
        RecordState *state = &g_engineRecordList->records[i].state;
        if (state->active != 0 && (state->kind == 2 || state->kind == 3)) {
            found = 1;
            break;
        }
    }
    return found;
}

} /* extern "C" */
