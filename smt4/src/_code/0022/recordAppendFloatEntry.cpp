#include "common.h"
extern "C" {
struct FloatRecord { f32 values[8]; };
struct FloatRecordList { s16 count; u8 unk02[2]; FloatRecord entries[1]; };
/* Append an eight-float record and advance the signed count. */
void recordAppendFloatEntry(FloatRecordList *list,const FloatRecord *record) { list->entries[list->count]=*record; ++list->count; }
}
