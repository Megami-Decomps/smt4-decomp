#ifndef GFX_ROUTEDCONNECTOR_H
#define GFX_ROUTEDCONNECTOR_H
#include "common.h"
#include <stddef.h>

struct RoutedConnectorState {
    /* 0x00 */ u8 unk00[0xE4];
    /* 0xE4 */ u8 reverse;
};
typedef char RoutedConnectorStateOffsetCheck[offsetof(RoutedConnectorState, reverse) == 0xE4 ? 1 : -1];
#endif
