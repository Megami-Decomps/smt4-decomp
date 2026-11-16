#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002bef68_hook(u32 v);

void asdGxBindCmdlistAt(u32 *table, u32 index)
{
    FUN_002bef68_hook(table[index]);
}

} /* extern "C" */
