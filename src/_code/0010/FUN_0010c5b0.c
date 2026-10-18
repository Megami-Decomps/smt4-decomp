/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c5b0` (_code @ 0x10c5b0, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3178; /* 0x4e3178 */

extern int FUN_001221a0(void);
/* Supplied declaration required: FUN_002bda30. */


unsigned int FUN_0010c5b0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((((param_1 < 2) && (piVar2 = (int *)(&DAT_004e3178)[param_1], piVar2 != (int *)0x0)) &&
      ((*(unsigned char *)(piVar2 + 3) & 6) != 0)) && (param_1 < 2)) {
    if ((*(unsigned char *)(piVar2 + 3) & 0x10) == 0) {
      if (*piVar2 != 0) {
        FUN_002bda30();
      }
      *(unsigned char *)(piVar2 + 3) = *(unsigned char *)(piVar2 + 3) | 0x10;
    }
    if ((*piVar2 == 0) || (temp_v0 = FUN_001221a0(), temp_v0 < 1)) {
      *(unsigned char *)(piVar2 + 3) = 1;
      temp_v1 = 1;
      piVar2[2] = 0;
    }
  }
  return temp_v1;
}
