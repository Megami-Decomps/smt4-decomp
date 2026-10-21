/* NON_MATCHING: compiler changes the relative-pointer flag branch and address calculation registers. */
#include "shard/W5_W5Match2_RelativeData.h"
extern "C" {
/* Resolve either an absolute or record-relative data pointer. */
void *resourceResolveDataPointer(const RelativeDataA *record) { u32 data=record->data; if (record->absolute==0 && data!=0) return (u8 *)record+data; return (void *)data; }
}
