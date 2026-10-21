#ifndef SHARD_W5_W5MATCH5_QUEST_CENTER_H
#define SHARD_W5_W5MATCH5_QUEST_CENTER_H

#include "common.h"

struct QuestEntry;

struct QuestWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ u8 closing;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ QuestEntry *entry;
};

struct QuestCenterState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ QuestWork *work;
};

extern "C" {
extern QuestCenterState g_qcMain;
}

#endif
