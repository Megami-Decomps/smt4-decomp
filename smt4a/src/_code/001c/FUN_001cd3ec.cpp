/* Tail call into the function that follows. */
#include "common.h"
#include "code/Code001c.h"

extern "C" {

void asdLoadFileAsyncWrap(const char *name, u8 *slot, u32 c, u32 d);

void FUN_001cd3ec(void *model, const char *name)
{
    asdLoadFileAsyncWrap(name, static_cast<u8 *>(model) + 16, 1, 128);
}

}
