#include "common.h"
extern "C" {
struct ButtonValueWork { u8 unk00[0x55C]; s8 value; };
struct ButtonValueGlobals { u32 unk00; ButtonValueWork *work; };
extern ButtonValueGlobals g_buttonHelp;
/* Read the signed button-help state byte. */
s8 buttonHelpGetSecondaryState(void) { return g_buttonHelp.work->value; }
}
