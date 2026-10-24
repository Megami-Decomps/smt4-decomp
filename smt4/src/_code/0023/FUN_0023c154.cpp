/* NON_MATCHING: retail materialises the byte offsets 4/8/12 in registers and reloads the list pointer and count for every word; armcc keeps the record address in registers */
/* Appends a four-word command record to the owner's command list. */
#include "common.h"

extern "C" {
struct CommandRecord {
    /* 0x0 */ u32 word0;
    /* 0x4 */ u32 word1;
    /* 0x8 */ u32 word2;
    /* 0xC */ u32 word3;
};

struct CommandOwner {
    /* 0x0000 */ u8 unk0000[0x2310];
    /* 0x2310 */ CommandRecord *commands;
    /* 0x2314 */ s32 commandCount;
};

void FUN_0023c154(CommandOwner *owner, u32 word0, u32 word1, u32 word2, u32 word3)
{
    owner->commands[owner->commandCount].word0 = word0;
    owner->commands[owner->commandCount].word1 = word1;
    owner->commands[owner->commandCount].word2 = word2;
    owner->commands[owner->commandCount].word3 = word3;
    owner->commandCount++;
}
}
