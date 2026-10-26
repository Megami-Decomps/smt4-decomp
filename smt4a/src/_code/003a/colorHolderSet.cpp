#include "shard/Shard003A.h"
#include "code/Code003a_Smt4a.h"

extern "C" {

typedef struct ColorHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Rgba color;
} ColorHolder;

void colorHolderSet(ColorHolder *holder, u8 r, u8 g, u8 b, u8 a)
{
    holder->color.r = r;
    holder->color.g = g;
    holder->color.b = b;
    holder->color.a = a;
}

} /* extern "C" */
