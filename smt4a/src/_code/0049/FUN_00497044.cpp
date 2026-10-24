/* NON_MATCHING: same stores, armcc schedules the flag-word update and the pointer step differently. */
#include "common.h"

extern "C" {

/* Virtual slot: marks the record (flags, kind, value, ?, previous kind) active as command kind 21, remembering the old kind. */
void FUN_00497044(u32 *record)
{
    *record |= 1;
    record[4] = record[1];
    record[1] = 21;
    record[2] = 0;
}

} /* extern "C" */
