/* NON_MATCHING: compiler inlines value tracking instead of retaining the retail three-register saved frame. */
#include "shard/W5_W5Match2_TrackedValue.h"
extern "C" {
/* Update an unlocked value and mark it dirty when it changes. */
void recordTrackDirtyValue(TrackedValue *record,u32 value) { if (record->locked==0) { if (record->value!=value) record->dirty=1; record->value=value; } }
}
