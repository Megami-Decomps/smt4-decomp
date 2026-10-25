#include "gfx/KeyedRecord.h"

extern "C" s32 g_keyedRecordCount;
extern "C" KeyedRecord g_keyedRecords[];

// Find one of the six keyed subrecords belonging to the selected record.
extern "C" KeyedRecordPart *keyedRecordFindPart(s32 recordIndex, s32 key)
{
    if (g_keyedRecordCount - recordIndex - 1 >= 0) {
        for (s32 i = 0; i < 6; ++i) {
            if (g_keyedRecords[recordIndex].parts[i].key == key)
                return &g_keyedRecords[recordIndex].parts[i];
        }
    }
    return NULL;
}
