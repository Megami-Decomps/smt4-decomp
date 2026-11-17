#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

extern u32 dataSelectPrioritizedCandidate(s32 index);

/* Returns the 15-bit value of the table-00 record selected for this table-02 index. */
u16 dataTable00GetCurrentValue(s32 index)
{
    return dataTable00FindById(dataSelectPrioritizedCandidate(index))->level & 0x7FFF;
}

} /* extern "C" */
