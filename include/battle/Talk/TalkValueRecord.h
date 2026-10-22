#ifndef BATTLE_TALK_TALKVALUERECORD_H
#define BATTLE_TALK_TALKVALUERECORD_H

#include "common.h"

struct TalkValueRecord {
    /* 0x00 */ u16 values[4];
    /* 0x08 */ u16 groups[3][18];
    /* 0x74 */ u8 unk74[8];
};

typedef char TalkValueRecordSizeCheck[sizeof(TalkValueRecord) == 0x7c ? 1 : -1];

#endif
