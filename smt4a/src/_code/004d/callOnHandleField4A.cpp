#include "shard/Shard004D.h"

extern "C" {

typedef struct HandleRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
} HandleRef;

extern void FUN_004ff98c(u32 value);

void callOnHandleField4A(HandleRef **ref)
{
    if (*ref != NULL) {
        FUN_004ff98c((*ref)->value);
    }
}

} /* extern "C" */
