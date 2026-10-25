#include "common.h"
extern "C" {
struct ShopResult { u8 unk00[0x170]; char text[1]; };
ShopResult *shopGetResult(void);
char *shopResultGetText(ShopResult *result);
u32 scrGetCommandFrame(void);
void messageMainRequestBanner(void);
u32 FUN_003a1460(const ShopResult *result);
void FUN_0025921c(u32 text, u32 value);
/* Initialize the first command frame and format the shop result text. */
void shopFormatCommandResult(void)
{
    char *text = shopResultGetText(shopGetResult());
    if (scrGetCommandFrame() == 0)
        messageMainRequestBanner();
    FUN_0025921c(reinterpret_cast<u32>(text), FUN_003a1460(shopGetResult()));
}
}
