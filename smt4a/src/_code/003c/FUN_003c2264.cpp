/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2264` (_code @ 0x3c2264, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570db8; /* 0x570db8 */
extern unsigned int DAT_00570dbc; /* 0x570dbc */

extern int FUN_0014aa78(void);


unsigned int FUN_003c2264(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = DAT_00570db8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = *(unsigned int *)(temp_v0 + 0x45a4) | DAT_00570dbc;
  *(unsigned int *)(temp_v0 + 0x45a0) = temp_v1;
  return 1;
}

} /* extern "C" */
