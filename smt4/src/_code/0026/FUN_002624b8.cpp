/* Tail call into the function that follows. */
#include "common.h"
#include "code/Code0026_Smt4.h"

extern "C" {

struct Obj002624b8 {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 unk46;
};

void FUN_002624c4(void *a, u32 b, u32 c);

void FUN_002624b8(void *a, Obj002624b8 *b, Obj002624b8 *c)
{
    FUN_002624c4(a, b->unk46, c->unk46);
}

}
