#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

int __aeabi_memcpy(void *dst, const void *src, int size); // declcheck: local (the shared declaration does not compile here or changes this unit)

void memCopy(const void *src, void *dst, int size)
{
    __aeabi_memcpy(dst, src, size);
}

} /* extern "C" */
