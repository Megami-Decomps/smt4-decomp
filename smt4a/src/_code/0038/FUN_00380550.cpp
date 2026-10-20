/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380550` (_code @ 0x380550, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(void);


unsigned int FUN_00380550(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  temp_v0 = ~(1 << (temp_v0 & 0xff));
  *(unsigned int *)(temp_v1 + 0x4cd8) = temp_v0 & *(unsigned int *)(temp_v1 + 0x4cd8);
  *(unsigned int *)(temp_v1 + 0x4cdc) = *(unsigned int *)(temp_v1 + 0x4cdc) & ((int)temp_v0 >> 0x1f);
  return 1;
}

} /* extern "C" */
