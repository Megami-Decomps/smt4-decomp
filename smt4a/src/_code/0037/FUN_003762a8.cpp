#include "common.h"

extern "C" {

typedef struct NamedObject {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ char name[1];
} NamedObject;

extern s32 libc_sprintf(char *buffer, const char *format, ...);

/* Writes the object's name into `buffer`. */
s32 FUN_003762a8(NamedObject *object, char *buffer)
{
    return libc_sprintf(buffer, "%s", object->name);
}

} /* extern "C" */
