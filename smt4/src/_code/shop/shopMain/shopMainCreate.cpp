/* NON_MATCHING: readable rebuild matches retail row for row (91/91); only the temporary for the loaded creation arguments (retail r1, built r0) and the stack-argument scratch registers differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "code/Code002c_Smt4.h"
#include "shop/shopMain.h"

extern "C" {

extern ShopCreateWork *g_shop;
extern const char DAT_0040765c[]; /* the source path */
extern const char DAT_0040768c[]; /* "ShopMainDrawDown" */
extern const char DAT_004076a0[]; /* "ShopMainDrawUp" */
extern const char DAT_004076b0[]; /* "ShopMainProc" */

u32 jyoucyuGetTableEntry(s32 index);
s32 FUN_001d9634(u32 job);
void shopMainOnEnd(u32 job);
s32 shopMainUpdateChild(u32 job);
s32 shopMainDrawDown(u32 job);

/* Creates the shop: allocates and clears its work area, takes the optional creation arguments (a
 * variant and a mode, or a mode alone) and starts its update process and the three draw tasks. */
void shopMainCreate(const u32 *arguments, s32 argumentSize)
{
    jyoucyuGetTableEntry(0);
    asdDebugTrace(DAT_0040765c, 167);
    ShopCreateWork *shop = g_shop = (ShopCreateWork *)asdMemAlloc(0x100, 0x100, 0, sizeof(ShopCreateWork), 1);
    shop->unk05 = 0;
    shop->done = 0;
    shop->variant = 0;
    shop->result = 0;
    shop->unk14 = 0;
    shop->unk0c = 0;
    if (arguments != NULL && argumentSize == 8) {
        shop->variant = arguments[0];
        shop->mode = arguments[1];
    } else if (arguments != NULL && argumentSize == 4) {
        shop->mode = arguments[0];
    } else {
        shop->mode = 1;
    }
    shop->task = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_004076b0), 2, 0, 0, FUN_001d9634,
                                        shopMainOnEnd, reinterpret_cast<u32>(shop));
    taskCreateDraw(reinterpret_cast<const s8 *>(DAT_004076a0), 0x65, 1, 0, shopMainUpdateChild, NULL,
                   reinterpret_cast<u32>(g_shop), reinterpret_cast<void *>(shop->task));
    taskCreateDraw(reinterpret_cast<const s8 *>(DAT_004076a0), 0xCC, 1, 0, shopMainUpdateChild, NULL,
                   reinterpret_cast<u32>(g_shop), reinterpret_cast<void *>(shop->task));
    taskCreateDraw(reinterpret_cast<const s8 *>(DAT_0040768c), 0xE7, 1, 0, shopMainDrawDown, NULL,
                   reinterpret_cast<u32>(g_shop), reinterpret_cast<void *>(shop->task));
}

} /* extern "C" */
