#include "common.h"

namespace {
struct TextValue {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 length;
    /* 0x14 */ u8 unk14[0xd];
    /* 0x21 */ char text[1];
};
}

extern "C" {
char *libc_strcpy(char *destination, const char *source);
u32 libc_strlen(const char *text);

/* Copies a text value and updates its stored length. */
void effEditorSetTextValue(TextValue *value, const char *text)
{
    libc_strcpy(value->text, text);
    value->length = libc_strlen(text);
}
}
