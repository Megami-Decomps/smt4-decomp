/* Returns 1 if the global object exists and its state (+0x400) is 20. */
#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

s32 FUN_00223c78(void)
{
    StatusDownState *obj = g_statusDown;
    s32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->state == 20) {
        result = 1;
    }
    return result;
}

}
