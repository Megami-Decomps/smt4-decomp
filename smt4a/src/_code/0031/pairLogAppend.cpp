#include "shard/Shard0031.h"

extern "C" {

extern PairLog *DAT_0057f2c4;

/* Appends a pair of values to the log. */
void pairLogAppend(u16 first, u16 second)
{
    PairLog *log = DAT_0057f2c4;

    log->first[log->count] = first;
    log->second[log->count] = second;
    log->count++;
}

} /* extern "C" */
