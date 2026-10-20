#include "common.h"

extern "C" {

typedef struct Value {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 payload;
} Value;

void FUN_003f7120(Value *value, Value *source, u8 payload)
{
    value->kind = 4;
    value->payload = payload;
    value->id = source->id;
}

} /* extern "C" */
