#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 7 with value 3 and steps past the character. */
s32 FUN_004345ec(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 7;
    (*out)->small = 3;
    parser->position++;
    return 0;
}

} /* extern "C" */
