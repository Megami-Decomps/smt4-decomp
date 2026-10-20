#include "common.h"

extern "C" {

int FUN_003da5e8(u32 a);
int FUN_003dab2c(void);
int FUN_003db7dc(u32 a);
int FUN_003dc68c(u32 a);

u32 FUN_003db378(u32 a)
{
    FUN_003dab2c();
    FUN_003da5e8(a);
    FUN_003db7dc(a);
    FUN_003dc68c(a);
    return 1;
}

} /* extern "C" */
