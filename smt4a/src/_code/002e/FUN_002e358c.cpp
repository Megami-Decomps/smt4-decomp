/* NON_MATCHING: ARM runtime code built with --cpu=5TE (retail writes movs rd, rm); needs that unit flag before it can match */
#include "common.h"

extern "C" {

typedef struct PrintfState {
    u32 flags;                          /* 0x00 */
    s32 (*putc)(s32 c, void *stream);   /* 0x04 */
    void *stream;                       /* 0x08 */
    u8 unkC[0x18 - 0xc];
    s32 width;                          /* 0x18: padding still owed */
    s32 precision;                      /* 0x1c */
    s32 count;                          /* 0x20: characters written */
    char digits[1];                     /* 0x24: least significant first */
} PrintfState;

void FUN_002e31ea(PrintfState *state);
void FUN_002e3216(PrintfState *state);

/* Writes a formatted integer: padding, the prefix, precision zeros, then the digits most significant first. */
s32 FUN_002e358c(PrintfState *state, s32 numDigits, const char *prefix, s32 prefixLen)
{
    s32 minDigits;
    s32 zeros;
    s32 i;

    if (state->flags & 0x20) {
        minDigits = state->precision;
        state->flags &= ~0x10;
    } else {
        minDigits = 1;
    }
    zeros = numDigits < minDigits ? minDigits - numDigits : 0;
    state->width -= zeros + numDigits + prefixLen;
    if (!(state->flags & 0x10)) {
        FUN_002e31ea(state);
    }
    for (i = 0; i < prefixLen; i++) {
        state->putc(prefix[i], state->stream);
        state->count++;
    }
    if (state->flags & 0x10) {
        FUN_002e31ea(state);
    }
    while (zeros > 0) {
        state->putc('0', state->stream);
        state->count++;
        zeros--;
    }
    while (numDigits > 0) {
        state->putc(state->digits[numDigits - 1], state->stream);
        state->count++;
        numDigits--;
    }
    FUN_002e3216(state);
    return (state->flags & 0x80) ? 2 : 1;
}

} /* extern "C" */
