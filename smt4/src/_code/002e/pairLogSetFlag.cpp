#include "shard/Shard0031.h"

extern "C" {
extern PairLog *g_screenStateWork;

/* Sets the log's byte flag. */
void pairLogSetFlag(u8 value)
{
    g_screenStateWork->unk20 = value;
}
}
