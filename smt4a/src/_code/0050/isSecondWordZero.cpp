#include "shard/Shard0050.h"

extern "C" {

u8 isSecondWordZero(Words2 *obj)
{
    return obj->w[1] == 0;
}

} /* extern "C" */
