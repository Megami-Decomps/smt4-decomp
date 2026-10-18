/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a99a0` (_code @ 0x3a99a0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570de0; /* 0x570de0 */
extern unsigned int DAT_00570de4; /* 0x570de4 */

extern int FUN_0014aa78(void);


unsigned int FUN_003a99a0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = DAT_00570de0 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = *(unsigned int *)(temp_v0 + 0x45a4) | DAT_00570de4;
  *(unsigned int *)(temp_v0 + 0x45a0) = temp_v1;
  return 1;
}
