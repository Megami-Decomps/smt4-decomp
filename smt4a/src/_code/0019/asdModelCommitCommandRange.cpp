/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void asdModelAdvanceCommandCursor(u32 bytes);

void asdModelCommitCommandRange(u32 a, u32 b)
{
    asdModelAdvanceCommandCursor((b - a) & ~3);
}

}
