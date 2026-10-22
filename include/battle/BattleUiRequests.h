#ifndef BATTLE_BATTLE_UI_REQUESTS_H
#define BATTLE_BATTLE_UI_REQUESTS_H
#include "common.h"
#include <stddef.h>

struct BattleUiRequest {
    u8 active;
    u8 unk01[0x17];
};
struct BattleUiRequestBank {
    BattleUiRequest requests[32];
};
struct BattleUiBankStatus {
    u8 unk00[0x94];
    u8 pending;
    u8 unk95[0x1B];
    u8 suppressed;
    u8 unkB1[0x34F];
};
typedef char BattleUiRequestLayoutCheck[sizeof(BattleUiRequest) == 0x18 &&
    sizeof(BattleUiRequestBank) == 0x300 && sizeof(BattleUiBankStatus) == 0x400 &&
    offsetof(BattleUiBankStatus, pending) == 0x94 &&
    offsetof(BattleUiBankStatus, suppressed) == 0xB0 ? 1 : -1];
#endif
