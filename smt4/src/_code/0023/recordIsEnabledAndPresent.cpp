#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
/* The resource is ready only when enabled and assigned. */
s32 recordIsEnabledAndPresent(const ReadyResource *record) { if (record->enabled==0) return 0; return record->resource!=NULL; }
}
