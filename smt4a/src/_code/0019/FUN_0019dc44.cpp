#include "font/FontStringReader.h"
extern "C" {
extern FontRecordPool DAT_005b3bc0;
/* Gets an indexed record when the pool is allocated and the index is valid. */
FontRegisteredRecord *FUN_0019dc44(u32 index)
{
    if (DAT_005b3bc0.records != NULL && index < DAT_005b3bc0.count) {
        return &DAT_005b3bc0.records[index];
    }
    return NULL;
}
}
