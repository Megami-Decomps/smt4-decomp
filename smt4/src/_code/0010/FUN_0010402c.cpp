/* NON_MATCHING: instruction selection/order differs: retail ldr r1, [r1, #4]; compiler ldr r2, [r1, #4]. */
#include "common.h"

struct CurrencyData {
    /* 0x00000 */ u8 unk00000[0x1F4E0];
    /* 0x1F4E0 */ u32 currency;
};
struct CurrencyGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ CurrencyData *data;
};

extern "C" {

extern CurrencyGlobals g_gameDataBlocks;

/* Adds to the game currency and caps it at the configured maximum. */
void FUN_0010402c(u32 amount)
{
    u32 total = g_gameDataBlocks.data->currency + amount;
    g_gameDataBlocks.data->currency = total > 0x22550FF ? 0x22550FF : total;
}

} /* extern "C" */
