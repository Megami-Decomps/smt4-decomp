#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    s8 unk01;
} DAT_00465198;

/* Sets the flag byte and returns its previous value. */
int appletSetHomeButtonHeld(s8 value)
{
    int old = DAT_00465198.unk01;

    DAT_00465198.unk01 = value;
    return old;
}

} /* extern "C" */
