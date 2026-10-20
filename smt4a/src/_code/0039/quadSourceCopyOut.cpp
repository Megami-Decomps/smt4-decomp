#include "shard/Shard0039.h"

extern "C" {

typedef struct Quad {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} Quad;

typedef struct QuadRec {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Quad quad;
} QuadRec;

typedef struct QuadSource {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ QuadRec *rec;
} QuadSource;

/* Copies the four words at +0x10 of the holder's record into `out`. */
void quadSourceCopyOut(QuadSource *holder, Quad *out)
{
    *out = holder->rec->quad;
}

} /* extern "C" */
