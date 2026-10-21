/* NON_MATCHING: compiler folds the text-address move and emits a tail branch instead of the retail linker NOP. */
#include "common.h"
extern "C" {
struct ShopResult { u8 unk00[0x170]; char text[1]; };
ShopResult *shopGetResult(void);
u32 scrGetCommandFrame(void);
void FUN_00259258(void);
u32 FUN_003a1460(const ShopResult *result);
u32 FUN_0025921c(const char *text,u32 value);
/* Initialize the first command frame and format the shop result text. */
u32 shopFormatCommandResult(void) { char *text=shopGetResult()->text; if (scrGetCommandFrame()==0) FUN_00259258(); return FUN_0025921c(text,FUN_003a1460(shopGetResult())); }
}
