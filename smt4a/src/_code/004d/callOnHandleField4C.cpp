#include "shard/Shard004D.h"

extern "C" {

typedef struct HandleRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
} HandleRef;

extern void FUN_003fdb18(u32 value);

void callOnHandleField4C(HandleRef **ref)
{
    if (*ref != NULL) {
        FUN_003fdb18((*ref)->value);
    }
}

} /* extern "C" */
