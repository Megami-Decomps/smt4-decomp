#include "shard/Shard0043.h"

extern "C" {

extern void clearTwoWords(u32 id);

u32 asdCecMessageIdInit(u32 id)
{
    clearTwoWords(id);
    return id;
}

} /* extern "C" */
