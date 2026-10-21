/* NON_MATCHING: pointer-range loads and constant division use different registers. */
#include "common.h"
struct Record { u8 data[184]; };
struct RecordRange { u8 unk00[232]; Record *begin; Record *end; };
/* Returns the number of records in the range. */
extern "C" s32 FUN_00413e28(RecordRange *range) { return range->end-range->begin; }
