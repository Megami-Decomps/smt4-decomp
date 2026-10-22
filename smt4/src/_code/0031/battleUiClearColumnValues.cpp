#include "battle/btlUI.h"

extern "C" void battleUiClearColumnValues(BtlUiObjC *work)
{
    for (s32 index = 0; index < work->columnCount; ++index) {
        work->columns[index].value = 0;
    }
}
