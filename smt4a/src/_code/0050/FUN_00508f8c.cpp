#include "common.h"

extern "C" {

/* Object whose word at 8 is a version/limit value. */
typedef struct {
    u8 unk00[8];
    u32 value;          /* 0x08 */
} Versioned;

/* True when the object's value is at most 0x02010000. */
u8 FUN_00508f8c(Versioned **object)
{
    Versioned *versioned = *object;

    return versioned->value <= 0x2010000;
}

} /* extern "C" */
