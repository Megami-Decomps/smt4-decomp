#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Sets the log's current value. */
void pairLogSetValue(u16 value)
{
    g_screenStateWork->resultDevil = value;
}
}
