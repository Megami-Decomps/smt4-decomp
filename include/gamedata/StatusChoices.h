#ifndef GAMEDATA_STATUS_CHOICES_H
#define GAMEDATA_STATUS_CHOICES_H
#include "shard/PadState.h"
#include <stddef.h>
struct StatusChoiceData {
    PadState player; // 0x00
    u16 choices[8]; // 0x78
};
typedef char StatusChoiceOffsetCheck[offsetof(StatusChoiceData, choices) == 0x78 ? 1 : -1];
#endif
