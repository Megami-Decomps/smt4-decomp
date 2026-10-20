#include "common.h"

extern "C" {

typedef __packed struct Value {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u16 payload;
} Value;

void FUN_003f7150(Value *value, Value *source, u16 payload)
{
    value->kind = 2;
    value->payload = payload;
    value->id = source->id;
}

} /* extern "C" */
