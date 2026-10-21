#include "common.h"

extern "C" {

typedef struct StringRef {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ char *data;
    /* 0x10 */ s32 length;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 offset;  /* start of the text inside `data` */
} StringRef;

s32 rt_memcmp(const char *a, const char *b, s32 length);

static char *stringText(StringRef *s)
{
    return s->data + s->offset;
}

/* Returns 1 when both strings have the same length and bytes. */
u32 stringRefEqual(StringRef *a, StringRef *b)
{
    if (a->length == b->length && rt_memcmp(stringText(b), stringText(a), a->length) == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
