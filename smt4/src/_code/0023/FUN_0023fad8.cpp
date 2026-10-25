#include "common.h"
#include "util/FUN_0023fad8.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_0023fad8_hook(void *object, int value);

void FUN_0023fad8(void *object)
{
    FUN_0023fad8_hook(object, 3);
}

}
