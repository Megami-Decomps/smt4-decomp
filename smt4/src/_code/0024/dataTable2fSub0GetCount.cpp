#include "gamedata/DataTable.h"
#include "gamedata/Table2fCount.h"

extern "C" s32 dataTable2fSub0GetCount(void)
{
    return static_cast<s32>(dataTableGetCount(dataTableGet(0x2f, 0)));
}
