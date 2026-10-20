#include "common.h"

extern "C" {

typedef struct Candidate {
    /* 0x000 */ u8 unk000[300];
    /* 0x12C */ s16 id;
} Candidate;

Candidate *saveSlotFindSelected(void);

/* Returns 1 when the candidate exists and has id 0xAF. */
u32 FUN_002e5db4(void)
{
    Candidate *candidate;
    u32 result;

    candidate = saveSlotFindSelected();
    if ((candidate == NULL) || (candidate->id != 0xAF)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
