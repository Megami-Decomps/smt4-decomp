/* NON_MATCHING: token kind is rematerialized after decoding and error/success epilogues are separate. */
#include "sys/VariantToken.h"

namespace {
struct VariantTextParser {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ const u16 *text;
    /* 0x10 */ s32 position;
    /* 0x14 */ s32 end;
};
}

extern "C" {
s32 FUN_0043872c(const u16 *text, s32 length, s32 *consumed);

u32 FUN_004344b0(VariantTextParser *parser, VariantToken **token)
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
    s32 type = FUN_0043872c(parser->text + parser->position,
                           parser->end - parser->position, &consumed);
    if (type == 0x85) {
        return 9;
    }
    (*token)->kind = 7;
    (*token)->type = (u8)type;
    parser->position += consumed;
    return 0;
}
}
