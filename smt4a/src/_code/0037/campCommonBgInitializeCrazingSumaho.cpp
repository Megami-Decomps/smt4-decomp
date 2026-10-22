/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void campCommonBgCreateCrazingSumaho(void);

void campCommonBgInitializeCrazingSumaho(void)
{
    campCommonBgCreateCrazingSumaho();
}

}
