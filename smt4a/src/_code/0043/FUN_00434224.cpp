/* NON_MATCHING: The token-kind constant is rematerialized after decoding and the two return paths have separate epilogues. */
#include "sys/VariantToken.h"

namespace {
struct VariantTextParser {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ const u16 *text;
    /* 0x10 */ s32 position;
    /* 0x14 */ s32 end;
};
}
extern "C" {
s32 FUN_0043872c(const u16 *text, s32 length, s32 *consumed);

/* Parses a braced type code into the current variant token and advances the text cursor. */
u32 FUN_00434224(VariantTextParser *parser, VariantToken **token)
{
    ++parser->position;
    if (parser->position == parser->end || parser->text[parser->position] != '{') {
        return 9;
    }
    ++parser->position;
    if (parser->position == parser->end) {
        return 9;
    }
    s32 consumed;
    s32 type = FUN_0043872c(parser->text + parser->position, parser->end - parser->position, &consumed);
    if (type == 0x85) {
        return 9;
    }
    (*token)->kind = 8;
    (*token)->type = type;
    parser->position += consumed;
    return 0;
}
}
