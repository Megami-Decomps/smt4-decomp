/* NON_MATCHING: compiler branches on signed failure instead of retail high-bit extraction and unconditional PC capture. */
#include "common.h"
extern "C" {
extern u8 DAT_0040b738;
s32 FUN_0013a170(u8 *value,u32 count,u32 operation);
void FUN_002bbb2c(u32 error,u32 site);
/* Query a byte-sized system value and report a failed result. */
u8 systemApplyConfigurationByte(void) { u8 value=DAT_0040b738; s32 result=FUN_0013a170(&value,1,0xA0002); if (result<0) FUN_002bbb2c(result,__current_pc()); return value; }
}
