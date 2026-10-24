/* NON_MATCHING: same digit scan; retail keeps an explicit 0xFFFF mask (literal-pool register) on each shifted accumulator and loads the text pointer after the end check, this build drops the mask and loads it early. */
#include "common.h"

struct Token {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    union {
        /* 0x0A */ u8 value8;
        /* 0x0A */ u16 value16;
    };
};

struct TokenOut {
    /* 0x00 */ Token *token;
};

struct Parser {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 pos;
    /* 0x14 */ s32 length;
    /* 0x18 */ s32 depth;
};

/* Reads an octal escape (up to three digits, the first at most 3) and stores its value in the token. */
extern "C" s32 FUN_00434070(Parser *parser, TokenOut *out)
{
    u16 value;
    u32 digit;
    u32 next;

    parser->pos++;
    if (parser->pos == parser->length) {
        return 7;
    }
    digit = parser->text[parser->pos] - 48;
    if (digit <= 3) {
        value = digit;
        parser->pos++;
        if (parser->pos != parser->length) {
            next = parser->text[parser->pos] - 48;
            if (next <= 7) {
                value = (value << 3 & 0xFFFF) | next;
                parser->pos++;
                if (parser->pos != parser->length) {
                    next = parser->text[parser->pos] - 48;
                    if (next <= 7) {
                        value = (value << 3 & 0xFFFF) | next;
                        parser->pos++;
                    }
                }
            }
        }
        out->token->kind = 0;
        out->token->value16 = value;
        return 0;
    }
    if (digit - 4 > 3) {
        return 7;
    }
    value = digit;
    parser->pos++;
    if (parser->pos != parser->length) {
        next = parser->text[parser->pos] - 48;
        if (next <= 7) {
            value = (value << 3 & 0xFFFF) | next;
            parser->pos++;
        }
    }
    out->token->kind = 0;
    out->token->value16 = value;
    return 0;
}
