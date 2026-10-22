#include "common.h"

struct QuestConfirmWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 substate;
    /* 0x0C */ u8 unk0c[4];
    /* 0x10 */ s8 kind;
    /* 0x11 */ u8 unk11[0x0f];
    /* 0x20 */ u8 table[1];
};

extern "C" {
s32 gameFlagIsSet(u32 flag);
void FUN_002355ac(s32 enabled);
void FUN_00259258(void);
void scrScriptProcessStartMappedEntry(QuestConfirmWork* work, const char* name);
void* dataTable28Sub0GetRecord(void* output, s32 kind);
void placeWinStartText(void);

// Configure the quest-confirmation resource and enter state 6.
void questConfirmSetup(QuestConfirmWork* work)
{
    if (gameFlagIsSet(0x24) != 0)
        FUN_002355ac(1);
    FUN_00259258();
    scrScriptProcessStartMappedEntry(work, "qc_confirm");
    dataTable28Sub0GetRecord(work->table, work->kind);
    placeWinStartText();
    work->state = 6;
    work->substate = 0;
}
}
