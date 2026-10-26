#include "text/TokenParser.h"

extern "C" {

/* Token handler: a doubled '&' becomes type 6, a single one type 0 with value 38. */
s32 FUN_0035ba68(TokenParser *parser, ParsedToken **out)
{
    if (parser->count > 0 && parser->position != parser->length - 1 && parser->text[parser->position + 1] == 38) {
        (*out)->type = 6;
        parser->position += 2;
    } else {
        (*out)->type = 0;
        (*out)->value = 38;
        parser->position++;
    }
    return 0;
}

} /* extern "C" */
