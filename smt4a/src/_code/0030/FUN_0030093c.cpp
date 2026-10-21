/* NON_MATCHING: retail emits 'push {r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct String { u32 reserved; const char *text; };
void _ZN9Obj55aff4C1Ev(String *string);
s32 FUN_002fbc1a(u32 value, String *output);
void onlineUrlSetText(void *url, const char *text);
void onlineStringDestroy(String *string);
s32 FUN_0030093c(u32 value, void *url) {
    String text;
    _ZN9Obj55aff4C1Ev(&text);
    s32 result = FUN_002fbc1a(value, &text);
    if (result) onlineUrlSetText(url, text.text);
    onlineStringDestroy(&text);
    return result != 0;
}
}
