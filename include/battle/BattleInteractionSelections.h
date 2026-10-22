#ifndef BATTLE_BATTLEINTERACTIONSELECTIONS_H
#define BATTLE_BATTLEINTERACTIONSELECTIONS_H
#include "common.h"
#include <stddef.h>

struct BattleInteractionSelection {
    /* 0x00 */ u16 reserved;
    /* 0x02 */ u16 value;
    /* 0x04 */ u8 padding04[0xC];
};
struct BattleInteractionSelections {
    u8 prefix[0x9E0];
    BattleInteractionSelection entries[1];
};
typedef char BattleInteractionSelectionLayoutCheck[
    offsetof(BattleInteractionSelection, value) == 2 &&
    sizeof(BattleInteractionSelection) == 0x10 &&
    offsetof(BattleInteractionSelections, entries) == 0x9E0 ? 1 : -1];
#endif
