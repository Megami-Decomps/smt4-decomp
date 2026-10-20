#include "common.h"

extern "C" {

void FUN_0010e720(u32 value);

typedef struct ValueHolder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 value;
} ValueHolder;

/* Passes the value at 0x3C to FUN_0010e720. */
void FUN_0010e2e8(ValueHolder *object)
{
    FUN_0010e720(object->value);
}

} /* extern "C" */
