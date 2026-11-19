#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Appends a pair of values to the log. */
void pairLogAppend(u16 first, u16 second)
{
    UniteEffectWork *work = g_screenStateWork;
    work->materialDevils[work->materialCount] = first;
    work->materialFlags[work->materialCount] = second;
    work->materialCount++;
}
}
