#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

int rt_memcpy(void *dst, const void *src, int size);

void memCopy(const void *src, void *dst, int size)
{
    rt_memcpy(dst, src, size);
}

} /* extern "C" */
