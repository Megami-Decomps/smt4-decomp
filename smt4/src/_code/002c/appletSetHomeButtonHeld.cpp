#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    s8 unk01;
} g_appletEventState;

/* Sets the flag byte and returns its previous value. */
int appletSetHomeButtonHeld(s8 value)
{
    int old = g_appletEventState.unk01;

    g_appletEventState.unk01 = value;
    return old;
}

} /* extern "C" */
