#ifndef GAMEDATA_TABLE49TRIGGER_H
#define GAMEDATA_TABLE49TRIGGER_H

#include "common.h"
#include <stddef.h>

struct Table49Trigger {
    /* 0x00 */ s16 groupId;
    /* 0x02 */ s16 entryId; // -1 matches every entry in the group.
    /* 0x04 */ u32 requiredFlag;
    /* 0x08 */ u32 excludedFlag;
    /* 0x0C */ u32 triggeredFlag;
};
typedef char Table49TriggerLayoutCheck[sizeof(Table49Trigger) == 0x10 &&
    offsetof(Table49Trigger, triggeredFlag) == 0xC ? 1 : -1];

#endif
