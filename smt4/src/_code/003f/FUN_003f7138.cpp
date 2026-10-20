#include "common.h"

extern "C" {

typedef struct Value {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[0xB];
    /* 0x10 */ u32 payload;
} Value;

void FUN_003f7138(Value *value, Value *source, u32 payload)
{
    value->kind = 3;
    value->payload = payload;
    value->id = source->id;
}

} /* extern "C" */
