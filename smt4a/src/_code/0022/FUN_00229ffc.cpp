/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *FUN_00203a5c(void *obj);
void FUN_0022a00c(void *obj);

void FUN_00229ffc(void *obj)
{
    FUN_0022a00c(FUN_00203a5c(obj));
}

}
