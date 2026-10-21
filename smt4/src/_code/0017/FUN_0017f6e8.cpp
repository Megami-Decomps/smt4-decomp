/* NON_MATCHING: armcc emits two STRs for the zero pair; retail uses MOV r2,r1 followed by STM. */
#include "common.h"

struct WorkPair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

extern "C" {

/* Clears both words in the work pair. */
void FUN_0017f6e8(WorkPair *work)
{
    WorkPair empty = {0, 0};
    *work = empty;
}

} /* extern "C" */
