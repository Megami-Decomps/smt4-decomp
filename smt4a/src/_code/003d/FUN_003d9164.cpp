/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *FUN_00203a5c(void *obj);
void words5Clear(void *obj);

void FUN_003d9164(void *obj)
{
    words5Clear(FUN_00203a5c(obj));
}

}
