#include "shard/Shard0035.h"

extern "C" {

extern s32 dataTable23Type0FindIndexById(s32 value);
extern void dataTable23MarkEntrySeen(s32 id);
extern void mapIfClearGroupRecordStates(s32 value);

void applyIfIdValid(s32 value)
{
    if (value == 0) {
        return;
    }
    s32 id = dataTable23Type0FindIndexById(value);

    if (id != -1) {
        dataTable23MarkEntrySeen(id);
        mapIfClearGroupRecordStates(value);
    }
}

} /* extern "C" */
