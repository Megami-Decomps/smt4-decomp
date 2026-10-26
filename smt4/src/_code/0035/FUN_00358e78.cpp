/* Dispatches to the active backend (primary, else secondary); returns 0xE0810BF8 when neither is enabled. */
#include "common.h"

extern "C" {

extern s32 g_nnCecdHandle;
extern s32 DAT_0047384c;

extern u32 FUN_00359134(u32 arg);
extern u32 FUN_003595ac(void);

u32 FUN_00358e78(u32 arg)
{
    if (DAT_0047384c != 0) {
        return FUN_003595ac();
    }
    if (g_nnCecdHandle != 0) {
        return FUN_00359134(arg);
    }
    return 0xE0810BF8;
}

}
