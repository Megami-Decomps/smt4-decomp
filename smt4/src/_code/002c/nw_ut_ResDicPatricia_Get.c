/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_ResDicPatricia_Get` (_code @ 0x2c301c, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3424. */


/* WARNING: Control flow encountered bad instruction data */

void nw_ut_ResDicPatricia_Get(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = *param_1;
  puVar4 = (unsigned int *)(temp_v1 + (unsigned int)*(unsigned short *)(temp_v1 + 0x10) * 0x10 + 0xc);
  if (*(unsigned int *)(temp_v1 + 0xc) <= *puVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v2 = *puVar4;
  temp_v0 = temp_v2 >> 3;
  if ((temp_v0 < param_3) && ((((int)*(char *)(param_2 + temp_v0) >> (temp_v2 & 7)) & 1U) != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002c3424();
  return;
}
