#include "common.h"

extern "C" {

void nn_camera_CTR_detail_ArriveApplication(void);

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0012a7b4_hook(void);

void FUN_0012a7b4(int enabled)
{
    if (enabled) {
        nn_camera_CTR_detail_ArriveApplication();
    } else {
        FUN_0012a7b4_hook();
    }
}

} /* extern "C" */
