#include "common.h"

extern "C" {

typedef struct Packed002a6a38 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28 : 5;
    /* 0x28 */ u32 kind : 4;      /* bits 5..8 of the word at 0x28 */
    /* 0x28 */ u32 unk28b : 23;
} Packed002a6a38;

/* True for kinds 1, 3, 5, 6 and 8. */
u32 FUN_002a6a38(Packed002a6a38 *object)
{
    switch (object->kind) {
    case 1:
    case 3:
    case 5:
    case 6:
    case 8:
        return 1;
    case 0:
    case 2:
    case 4:
    case 7:
    default:
        return 0;
    }
}

} /* extern "C" */
