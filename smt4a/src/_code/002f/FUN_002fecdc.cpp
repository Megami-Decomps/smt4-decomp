/* NON_MATCHING: scheduling only: retail loads string->data (r1) before storing the length argument on the stack. */
#include "common.h"

extern "C" {

typedef struct OnlineString {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 data;
} OnlineString;

extern s32 FUN_002eea7c(OnlineString *string);
extern void _ZN9Obj55aff4C1EPKt(u32 dest, const u16 *text);
extern void _ZN9Obj55aff4C1ERKS_(u32 dest, OnlineString *source);
extern u32 wstrlenU16(const u16 *text);
extern void FUN_0030f234(u32 dest, u32 data, s32 kind, const u16 *text, u32 length);

/* Constructs `dest` from `text` appended to `string`, or a copy of one of them when the other is empty. */
void FUN_002fecdc(u32 dest, OnlineString *string, const u16 *text)
{
    s32 kind = FUN_002eea7c(string);

    if (kind == 0) {
        _ZN9Obj55aff4C1EPKt(dest, text);
        return;
    }
    if (text != NULL && *text != 0) {
        FUN_0030f234(dest, string->data, kind, text, wstrlenU16(text));
        return;
    }
    _ZN9Obj55aff4C1ERKS_(dest, string);
}

} /* extern "C" */
