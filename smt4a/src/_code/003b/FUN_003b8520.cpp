/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8520` (_code @ 0x3b8520, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00570dc0; /* 0x570dc0 */
extern unsigned int DAT_00570dc4; /* 0x570dc4 */

extern int FUN_0014aa78(void);
extern int FUN_00236038(void);


unsigned int FUN_003b8520(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_0014aa78();
  if (temp_v0 >= 1) {
    temp_v2 = DAT_00570dc0 | *(unsigned int *)(temp_v1 + 0x45a0);
    *(unsigned int *)(temp_v1 + 0x45a4) = DAT_00570dc4 | *(unsigned int *)(temp_v1 + 0x45a4);
    *(unsigned int *)(temp_v1 + 0x45a0) = temp_v2;
  }
  else {
    temp_v2 = ~DAT_00570dc4;
    *(unsigned int *)(temp_v1 + 0x45a0) = *(unsigned int *)(temp_v1 + 0x45a0) & ~DAT_00570dc0;
    *(unsigned int *)(temp_v1 + 0x45a4) = *(unsigned int *)(temp_v1 + 0x45a4) & temp_v2;
  }
  return 1;
}

} /* extern "C" */
