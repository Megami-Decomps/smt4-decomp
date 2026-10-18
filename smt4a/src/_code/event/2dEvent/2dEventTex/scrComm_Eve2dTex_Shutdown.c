/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Eve2dTex_Shutdown` (_code @ 0x2611c8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f3b0; /* 0x57f3b0 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00281178. */
/* Supplied declaration required: FUN_0037d024. */


unsigned int scrComm_Eve2dTex_Shutdown(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((DAT_0057f3b0 != (unsigned int *)0x0) && (temp_v0 = FUN_00163e40(*DAT_0057f3b0), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c));
      if (temp_v1 != 0) {
        FUN_0037d024(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c),0);
        FUN_00281178(*(unsigned int *)(temp_v0 * 4 + 0x5e1f3c));
      }
      *(unsigned int *)(temp_v0 * 4 + 0x5e1f3c) = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_001631d0(*DAT_0057f3b0,0);
  }
  return 1;
}
