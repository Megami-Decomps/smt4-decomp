#include "shard/Shard003B.h"

extern "C" {

typedef struct QuadHolder {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Quad *rec;
} QuadHolder;

/* Copies the four words of the record at +0x20 into `out`. */
void quadHolderCopyOut(QuadHolder *holder, Quad *out)
{
    *out = *holder->rec;
}

} /* extern "C" */
