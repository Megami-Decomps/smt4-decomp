#include "common.h"

extern "C" u8 g_resourceSharedFlag;

/* Return the shared resource flag. */
extern "C" u8 resourceGetSharedFlag(void)
{
    return g_resourceSharedFlag;
}
