#include "common.h"

extern "C" {

void FUN_0018b4ec(u32 a, u32 b, u32 c, u32 d);
u32 FUN_001a2a5c(void);

/* Calls FUN_0018b4ec with the result of FUN_001a2a5c followed by its own three arguments. */
void FUN_0017015c(u32 a, u32 b, u32 c)
{
    FUN_0018b4ec(FUN_001a2a5c(), a, b, c);
}

} /* extern "C" */
