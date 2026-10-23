#ifndef NPC_SHOP_DEVIL_MARKET_H
#define NPC_SHOP_DEVIL_MARKET_H
#include "common.h"
#include <stddef.h>

struct DevilMarketWork {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 started;
    /* 0x0C */ u32 previousState;
    /* 0x10 */ void *messages;
    /* 0x14 */ void *scriptFile;
    /* 0x18 */ void *scriptProcess;
    /* 0x1C */ u8 ownsLoadSlot;
    /* 0x1D */ u8 unk1D[0x7F];
    /* 0x9C */ u32 argument;
    /* 0xA0 */ u8 unkA0[0xC];
};
typedef char DevilMarketWorkLayoutCheck[sizeof(DevilMarketWork) == 0xAC &&
    offsetof(DevilMarketWork, messages) == 0x10 &&
    offsetof(DevilMarketWork, ownsLoadSlot) == 0x1C &&
    offsetof(DevilMarketWork, argument) == 0x9C ? 1 : -1];
#endif
