/* NON_MATCHING: register allocation only in the second 8-byte copy: retail uses r3/r0 again, built reuses r2 */
/* Copy-constructs a Foo from `src` into `dest` (if non-NULL); the vtable is set to the base class first, then to the final class. */
#include "common.h"

extern "C" {

typedef struct Pair {
    u32 first;
    u32 second;
} Pair;

typedef struct Foo {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Pair a;
    /* 0x10 */ Pair b;
} Foo;

extern u8 DAT_0055a7e8;
extern u8 DAT_00559bb8;

void FUN_0030d27c(u32 unused, Foo *dest, const Foo *src)
{
    if (dest != NULL) {
        dest->vtbl = &DAT_0055a7e8;
        dest->flag = src->flag;
        dest->a = src->a;
        dest->b = src->b;
        dest->vtbl = &DAT_00559bb8;
    }
}

}
