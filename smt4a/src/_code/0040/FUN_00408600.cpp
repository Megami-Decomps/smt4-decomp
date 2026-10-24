#include "common.h"

struct Object00408600 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flag;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 value;
};

extern "C" {

/* Clears the flag at 4 and the word at 8. */
void FUN_00408600(Object00408600 *object)
{
    object->flag = 0;
    object->value = 0;
}

} /* extern "C" */
