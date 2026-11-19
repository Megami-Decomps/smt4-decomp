#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Sets the log's byte flag. */
void pairLogSetFlag(u8 value)
{
    g_screenStateWork->sacrifice = value;
}
}
