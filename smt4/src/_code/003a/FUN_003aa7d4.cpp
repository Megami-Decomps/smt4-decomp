/* NON_MATCHING: register allocation only: retail holds `value` in r4 and the object in r5 (swapped here) */
/* Allocates and constructs the 0xA5BC-byte object with `value` stored in it and its flags set. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x0000 */ const void *vtbl;
    /* 0x0004 */ u8 unk0004[0x58C];
    /* 0x0590 */ u32 unk590;
    /* 0x0594 */ u8 unk594[0x10];
    /* 0x05A4 */ u8 flag5A4;
    /* 0x05A5 */ u8 unk5A5[0xA00F];
    /* 0xA5B4 */ u32 value;
    /* 0xA5B8 */ u8 flagA5B8;
} Object;

extern u8 DAT_00422400;

extern Object *FUN_0022cb58(void *heap);
extern void FUN_003a8cc8(Object *obj);

Object *FUN_003aa7d4(void *heap, u32 value)
{
    Object *obj = FUN_0022cb58(heap);

    obj->vtbl = &DAT_00422400;
    FUN_003a8cc8(obj);
    obj->flag5A4 = 1;
    obj->value = value;
    obj->flagA5B8 = 1;
    obj->unk590 = 0;
    return obj;
}

}
