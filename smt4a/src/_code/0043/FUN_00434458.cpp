#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 0 with value 12 and steps past the character. */
s32 FUN_00434458(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 0;
    (*out)->value = 12;
    parser->position++;
    return 0;
}

} /* extern "C" */
