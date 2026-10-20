/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4e18` (_code @ 0x2a4e18, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adde8(unsigned int, unsigned int, int);

extern int g_bustupCutAnim; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002adde8. */
extern int FUN_002adee0(void);


unsigned int FUN_002a4e18(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = g_bustupCutAnim;
  if (g_bustupCutAnim == 0) {
    temp_v1 = 0;
  }
  else {
    if ((*(int *)(g_bustupCutAnim + 0x5e4) == 0) || (temp_v2 = FUN_002adee0(), temp_v2 == 0)) {
      return 1;
    }
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x5e4) + 8);
    FUN_002adde8(temp_v1,*(unsigned int *)(param_2 * 4 + 0x43e048),param_1);
    if (param_2 == 0) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *(float *)(temp_v0 + 0x640);
    }
  }
  return temp_v1;
}

} /* extern "C" */
