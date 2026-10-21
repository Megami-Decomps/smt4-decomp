/* NON_MATCHING: compiler uses different registers for the global work and zero argument. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x28]; u32 selection; u32 progress; u8 unk30[0x38]; u8 widget; } *g_naviMain;
void FUN_0048821c(void *widget, u32 value);
/* Changes navigation selection and resets its progress counter. */
void FUN_00314bf8(u32 value) {
    g_naviMain->selection = value;
    g_naviMain->progress = 0;
    FUN_0048821c(&g_naviMain->widget, value);
}
}
