#include "text/TokenParser.h"

extern "C" {

/* Token handler: emits a break (type 11) when nothing is counted, otherwise type 0 with value 63. */
s32 FUN_004346dc(TokenParser *parser, ParsedToken **out)
{
    if (parser->count <= 0) {
        (*out)->type = 11;
    } else {
        (*out)->type = 0;
        (*out)->value = 63;
    }
    parser->position++;
    return 0;
}

} /* extern "C" */
