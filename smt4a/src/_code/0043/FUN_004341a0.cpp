#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits type 17 with value 4 and steps past the character. */
s32 FUN_004341a0(TokenParser *parser, ParsedToken **out)
{
    (*out)->type = 17;
    (*out)->small = 4;
    parser->position++;
    return 0;
}

} /* extern "C" */
