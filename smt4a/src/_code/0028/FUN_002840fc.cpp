#include "common.h"

extern "C" {

struct CallbackOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *object;
};
extern CallbackOwner g_callbackController;
void FUN_0049f084(void *object, void *argument);
s32 FUN_002840fc(void *argument)
{
    if (g_callbackController.object != NULL) {
        FUN_0049f084(g_callbackController.object, argument);
    }
    return 0;
}

} /* extern "C" */
