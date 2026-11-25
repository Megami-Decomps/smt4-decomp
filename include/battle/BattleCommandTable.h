#ifndef BATTLE_BATTLECOMMANDTABLE_H
#define BATTLE_BATTLECOMMANDTABLE_H

#include "common.h"
#include <stddef.h>

/* One row of IV's battle command table (table 22, either party or party-member commands). */
struct ContextCommandDefinition {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ char hintText[0x58];
    /* 0x5B */ u8 blockedInBattleMode;     /* hidden while the battle has flag 0x40000 */
    /* 0x5C */ u16 requiredGameFlag;
    /* 0x5E */ u16 requiredStatusFlag;
};

typedef char ContextCommandDefinitionLayout[
    sizeof(ContextCommandDefinition) == 0x60 && offsetof(ContextCommandDefinition, hintText) == 3 &&
    offsetof(ContextCommandDefinition, blockedInBattleMode) == 0x5B &&
    offsetof(ContextCommandDefinition, requiredStatusFlag) == 0x5E ? 1 : -1];

#endif
