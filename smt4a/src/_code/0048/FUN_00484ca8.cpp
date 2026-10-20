/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_00484cb0(void *a, u32 b);

void FUN_00484ca8(void *a)
{
    FUN_00484cb0(a, 0);
}

}
