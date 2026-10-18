/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003218e0` (_code @ 0x3218e0, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
/* Supplied declaration required: FUN_002c0cec. */


unsigned int FUN_003218e0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  FUN_002c0cec(0x2f,1);
  temp_v0 = FUN_002c0c74();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_002c0cec(0x2f,1);
      temp_v0 = FUN_002c0cc4();
      temp_v2 = FUN_002c0c74(temp_v1);
      piVar4 = (int *)0x0;
      if (temp_v3 < temp_v2) {
        piVar4 = (int *)(temp_v0 + temp_v3 * 0x18);
      }
      if (*piVar4 == -1) {
        return 0xffffffff;
      }
      if (*piVar4 == param_1) {
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
      FUN_002c0cec(0x2f,1);
      temp_v0 = FUN_002c0c74();
    } while ((int)temp_v3 < temp_v0);
  }
  return 0xffffffff;
}
