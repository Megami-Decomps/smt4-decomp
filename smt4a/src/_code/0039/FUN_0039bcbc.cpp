#include "common.h"

extern "C" {

/* The engine's (removed) debug hook; returns its argument. */
__weak u32 FUN_0039bcbc_hook(u32 v);
u32 clearFlags310To31F(void);
int mapMainIsBusy(u32 map);
int lmapMainIsRunning(void);
u32 sub68OwnerCall4(void);
void FUN_00272f54(u32 v);
void FUN_00338ba4(u32 v);

u32 FUN_0039bcbc(void)
{
    if (mapMainIsBusy(FUN_0039bcbc_hook(clearFlags310To31F()))) {
        FUN_00272f54(FUN_0039bcbc_hook(FUN_0039bcbc_hook(FUN_0039bcbc_hook(sub68OwnerCall4()))));
    } else if (lmapMainIsRunning()) {
        FUN_00338ba4(FUN_0039bcbc_hook(sub68OwnerCall4()));
    }
    return 1;
}

} /* extern "C" */
