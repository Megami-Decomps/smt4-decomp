/* NON_MATCHING: Common selector tail target FUN_0038892c is now resolved; subobject address uses ADD r4 rather than retail ADD r0 then MOV r4, shifting the final linker-NOP position. */
#include "common.h"

struct ShopSelectionResult {
    /* 0x000 */ u8 unk000[0x194];
    /* 0x194 */ u8 selection[1];
};
extern "C" {
ShopSelectionResult *shopGetResult();
s32 scrGetCommandFrame();
void FUN_003c1060();
s32 selector16038Pick(ShopSelectionResult *shop);
void FUN_0038892c(void *selection, s32 result);
}

/* Pick the shop result and forward it to the common script-selection handler. */
extern "C" void FUN_003888f8()
{
    void *selection = shopGetResult()->selection;
    if (scrGetCommandFrame() == 0) {
        FUN_003c1060();
    }
    FUN_0038892c(selection, selector16038Pick(shopGetResult()));
}
