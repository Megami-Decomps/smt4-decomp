#include "shard/Shard0031.h"

extern "C" {

extern PairLog *g_uniteEffectWork;

/* Appends a pair of values to the log. */
void pairLogAppend(u16 first, u16 second)
{
    PairLog *log = g_uniteEffectWork;

    log->first[log->count] = first;
    log->second[log->count] = second;
    log->count++;
}

} /* extern "C" */
