#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 0 with the current character and steps past it. */
s32 FUN_00434ab0(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 0;
    (*out)->value = parser->text[parser->position];
    parser->position++;
    return 0;
}

} /* extern "C" */
