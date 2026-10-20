#include "shard/Shard004B.h"

extern "C" {

extern void releaseEntriesA(u8 *block);

void menu4CClearFlag84(Menu4C *obj)
{
    obj->flag84 = 0;
    releaseEntriesA(obj->block74);
}

} /* extern "C" */
