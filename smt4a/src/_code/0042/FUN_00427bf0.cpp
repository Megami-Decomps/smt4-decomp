/* NON_MATCHING: query argument moves and negative-result test differ. */
#include "common.h"
extern "C" {
s32 FUN_004268ec(u8 *value,u32 mode,u32 first,u32 second);
/* Maps the query's absent and nonzero-value cases to their service result codes. */
s32 FUN_00427bf0(u32 first,u32 second){u8 value;s32 result=FUN_004268ec(&value,1,first,second);if(result==(s32)0xD8A083FA)return 0;if(result<0)return result;return value!=0?(s32)0xE0A13899:0;}
}
