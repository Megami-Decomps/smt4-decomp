#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits the letter (A..^) after the escape as a control value, or fails with 8. */
s32 FUN_00434394(TokenParser *parser, ParsedToken **out)
{
    parser->position++;
    if (parser->position != parser->length && (u32)(parser->text[parser->position] - 65) <= 30) {
        (*out)->type = 0;
        (*out)->value = parser->text[parser->position] - 64;
        parser->position++;
        return 0;
    }
    return 8;
}

} /* extern "C" */
