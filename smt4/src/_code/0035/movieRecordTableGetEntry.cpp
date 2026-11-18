#include "record/RecordTable.h"

/* Returns an in-range kind-0 record, otherwise null. */
extern "C" RecordKind0 *movieRecordTableGetEntry(RecordTable *table, s32 index)
{
    if (index >= 0 && index < table->kind0Count)
        return &table->kind0[index];
    return NULL;
}
