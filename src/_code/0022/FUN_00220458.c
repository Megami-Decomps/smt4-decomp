/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220458` (_code @ 0x220458, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002b74a0. */
extern int FUN_002bf41c(unsigned int);


void FUN_00220458(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043dfc0;
  if (DAT_0043dfc0 != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 0x630));
      if (temp_v1 != 0) {
        FUN_002b74a0(*(unsigned int *)(temp_v3 + 0x630),1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return;
}
