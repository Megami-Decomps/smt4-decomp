#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 17 with value 6 and steps past the character. */
s32 FUN_0035b65c(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 17;
    (*out)->small = 6;
    parser->position++;
    return 0;
}

} /* extern "C" */
