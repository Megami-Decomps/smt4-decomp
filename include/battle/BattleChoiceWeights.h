#ifndef BATTLE_BATTLECHOICEWEIGHTS_H
#define BATTLE_BATTLECHOICEWEIGHTS_H
#include "common.h"

// Battle tables 6 and 7 contain four candidate identifiers and four corresponding weights.
struct BattleChoiceRow { u16 values[4]; };
typedef char BattleChoiceRowSizeCheck[sizeof(BattleChoiceRow) == 8 ? 1 : -1];
#endif
