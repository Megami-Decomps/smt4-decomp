/* Tail call into the function that follows. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

void asdLoadFileAsyncWrap(void *a, u8 *b, u32 c, u32 d);

void FUN_001cd3ec(u8 *a, void *b)
{
    asdLoadFileAsyncWrap(b, a + 16, 1, 128);
}

}
