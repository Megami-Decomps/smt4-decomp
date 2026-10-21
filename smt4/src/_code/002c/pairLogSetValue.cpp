#include "shard/Shard0031.h"

extern "C" {
extern PairLog *g_screenStateWork;

/* Sets the log's current value. */
void pairLogSetValue(u16 value)
{
    g_screenStateWork->unk0C = value;
}
}
