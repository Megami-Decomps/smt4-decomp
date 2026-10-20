#include "shard/Shard003D.h"

extern "C" {

typedef struct Words5 {
    /* 0x00 */ u32 w[5];
} Words5;

/* Clears the five words of the record. */
void words5Clear(Words5 *rec)
{
    if (rec != NULL) {
        rec->w[0] = 0;
        rec->w[1] = 0;
        rec->w[2] = 0;
        rec->w[3] = 0;
        rec->w[4] = 0;
    }
}

} /* extern "C" */
