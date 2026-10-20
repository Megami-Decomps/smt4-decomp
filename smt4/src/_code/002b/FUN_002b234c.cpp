/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *FUN_00253d24(void *obj);
void *FUN_00253ce4(void *obj);
void FUN_002b2368(void *obj);

void FUN_002b234c(void *obj)
{
    FUN_00253d24(obj);
    FUN_002b2368(FUN_00253ce4(obj));
}

}
