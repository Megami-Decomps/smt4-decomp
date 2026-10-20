#include "common.h"

extern "C" {

int dataTableGetCount(void);
int dataTableGet(int id, int index);

void QcUtility_GetQuestTableChunkCount(u32 unused, int group)
{
    dataTableGet(0x26, group * 2 + 1);
    dataTableGetCount();
}

} /* extern "C" */
