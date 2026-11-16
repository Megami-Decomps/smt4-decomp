/* Tail call into the function that follows. */
#include "common.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {

void asdModelAdvanceCommandCursor(u32 bytes);

void asdModelAdvanceCommandCursorBetween(u32 a, u32 b)
{
    asdModelAdvanceCommandCursor((b - a) & ~3);
}

}
