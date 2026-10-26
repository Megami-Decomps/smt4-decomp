#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 17 with value 4 and steps past the character. */
s32 FUN_0035b4ec(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 17;
    (*out)->small = 4;
    parser->position++;
    return 0;
}

} /* extern "C" */
