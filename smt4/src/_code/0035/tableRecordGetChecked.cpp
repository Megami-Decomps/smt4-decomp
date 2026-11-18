#include "record/RecordTable.h"

/* Returns an in-range kind-1 record, otherwise null. */
extern "C" RecordKind1 *tableRecordGetChecked(RecordTable *table, s32 index)
{
    if (index >= 0 && index < table->kind1Count)
        return &table->kind1[index];
    return NULL;
}
