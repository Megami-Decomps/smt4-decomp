#include "common.h"
union ScalarValue {u32 encoded;f32 value;};struct ScalarRecord {u8 unk00[8];u32 flags;ScalarValue scalar;};
extern "C" {f32 FUN_001a83bc(u32 encoded);
/* Resolves a scalar when enabled and returns the complemented category mask. */
u32 FUN_00522a08(ScalarRecord *record,f32 *output){if((record->flags&256)==0){f32 value;if((record->flags&1)==0)value=FUN_001a83bc(record->scalar.encoded);else value=record->scalar.value;*output=value;}return ~(record->flags&3840u)<<8;}}
