#include "common.h"

/* The optional callback does not consume the event. */
extern "C" s32 resourceDefaultFalseCallback(void *)
{
    return 0;
}
