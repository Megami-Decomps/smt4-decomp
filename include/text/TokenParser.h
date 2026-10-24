/* A text tokenizer: a cursor over 16-bit characters that hands each handler a token to fill in. */
#ifndef TEXT_TOKENPARSER_H
#define TEXT_TOKENPARSER_H

#include "common.h"
#include <stddef.h>

/* The token a handler writes: a type and a 16-bit value (also read as a byte). */
struct ParsedToken {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 type;
    /* 0x09 */ u8 unk09;
    union {
        /* 0x0A */ u16 value;
        /* 0x0A */ u8 small;
    };
};

struct TokenParser {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 position;
    /* 0x14 */ s32 length;
    /* 0x18 */ s32 count;
};

typedef char TokenParserLayout[
    offsetof(TokenParser, text) == 0xc && offsetof(TokenParser, count) == 0x18 &&
    offsetof(ParsedToken, type) == 8 && offsetof(ParsedToken, value) == 0xa ? 1 : -1];

#endif
