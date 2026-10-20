#include "common.h"

extern "C" {

typedef struct Object003aa068 {
    /* 0x0000 */ u8 unk0000[0x243c];
    /* 0x243c */ u32 value;
} Object003aa068;

/* True when the object exists and its value word is nonzero. */
u32 FUN_003aa068(Object003aa068 *object)
{
    u32 result = object != NULL ? object->value : 0;

    if (result != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
