#include "shard/Shard003E.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

typedef struct HalfRec {
    /* 0x000 */ u8 unk000[0x1CE];
    /* 0x1CE */ u16 h[4];
} HalfRec;

/* Clears the four halfwords at +0x1CE..+0x1D4 of the record. */
void halfRecClear(u32 unused, HalfRec *rec)
{
    if (rec != NULL) {
        rec->h[0] = 0;
        rec->h[1] = 0;
        rec->h[2] = 0;
        rec->h[3] = 0;
    }
}

} /* extern "C" */
