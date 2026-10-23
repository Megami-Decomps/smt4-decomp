#ifndef GAMEDATA_CONDITIONAL_MESSAGE_RECORD_H
#define GAMEDATA_CONDITIONAL_MESSAGE_RECORD_H
#include "common.h"
#include <stddef.h>

/* Table 0x23/8 messages are selected by two signed keys and optional flag conditions. */
struct ConditionalMessageRecord {
    /* 0x00 */ s8 category;
    /* 0x01 */ s8 kind;
    /* 0x02 */ s16 requiredFlag;
    /* 0x04 */ s16 excludedFlag;
    /* 0x06 */ u8 unk06[0x12];
};
typedef char ConditionalMessageRecordLayout[sizeof(ConditionalMessageRecord) == 0x18 &&
    offsetof(ConditionalMessageRecord, requiredFlag) == 2 &&
    offsetof(ConditionalMessageRecord, excludedFlag) == 4 ? 1 : -1];
#endif
