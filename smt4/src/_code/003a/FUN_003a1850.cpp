/* NON_MATCHING: same stores, armcc schedules the mov/orr of the flag word differently. */
#include "common.h"

extern "C" {

/* Virtual slot: marks the record (flags, kind, value) active as command kind 19 with no value. */
void FUN_003a1850(u32 *record)
{
    *record++ |= 1;
    record[0] = 19;
    record[1] = 0;
}

} /* extern "C" */
