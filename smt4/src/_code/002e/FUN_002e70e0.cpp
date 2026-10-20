/* NON_MATCHING: retail's function symbol excludes the string literal armcc emits right after the function; the code itself is identical and fdiff only reports the trailing literal-pool row(s) */
/* Formats the object's two name fields (prefix at +0x1C, name at +0x21) into `dest`. */
#include "common.h"

extern "C" {

typedef struct NamedObject {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ char prefix[5];
    /* 0x21 */ char name[1];
} NamedObject;

extern s32 libc_sprintf(char *dest, const char *format, ...);

void FUN_002e70e0(NamedObject *obj, char *dest)
{
    libc_sprintf(dest, "%s%s", obj->name, obj->prefix);
}

}
