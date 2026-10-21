#ifndef SHARD_W6_W6MATCH7_QUESTINTERACTION_H
#define SHARD_W6_W6MATCH7_QUESTINTERACTION_H

#include "common.h"

/* Field prefix only; the selection object also contains script jobs and callback tables. */
struct QuestInteraction {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 counter;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ s8 kind;
    /* 0x11 */ u8 unk11[7];
    /* 0x18 */ u8 interactive;
    /* 0x19 */ u8 entryToken;
    /* 0x1a */ u8 unk1a;
    /* 0x1b */ u8 scriptActive;
};

extern "C" {
void questInteractionChooseEntry(QuestInteraction *object);
void questCenterBeginConversation(QuestInteraction *object);
}

#endif
