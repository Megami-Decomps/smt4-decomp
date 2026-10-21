#include "shard/Shard0031.h"

extern "C" {
extern PairLog *g_screenStateWork;

/* Appends a pair of values to the log. */
void pairLogAppend(u16 first, u16 second)
{
    PairLog *log = g_screenStateWork;
    log->first[log->count] = first;
    log->second[log->count] = second;
    log->count++;
}
}
