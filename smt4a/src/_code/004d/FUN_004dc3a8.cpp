#include "common.h"

extern "C" {

typedef struct Entry {
    u8 unk00[0x62];
    u16 id;                        /* 0x62 */
} Entry;

__declspec(noreturn) __weak void FUN_004dc3a8_hook(u32 a, u32 idB, u32 idC);

void FUN_004dc3a8(u32 a, const Entry *b, const Entry *c)
{
    FUN_004dc3a8_hook(a, b->id, c->id);
}

} /* extern "C" */
