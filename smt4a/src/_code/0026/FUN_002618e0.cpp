#include "ui/IfTouch.h"
#include "code/Code0026_Smt4a.h"

extern "C" {

/* Returns the low 16 bits of the word at 0x664 of the record at 0x57F248 as a signed value. */
s32 FUN_002618e0(void)
{
    return (s16)g_ifTouch.state->unk664;
}

} /* extern "C" */
