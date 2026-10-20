/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514018` (_code @ 0x514018, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0050d2cc(void);

extern int FUN_0050cf94(int);
/* Supplied declaration required: FUN_0050d2cc. */


unsigned int FUN_00514018(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    temp_v0 = 1;
    *param_3 = 0;
  }
  else {
    temp_v1 = *(int *)(param_1 + 4);
    FUN_0050d2cc();
    temp_v2 = *(int *)(temp_v1 + 0x10);
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x38);
    }
    if (((temp_v2 != 0 && temp_v1 != 0) && (temp_v1 = FUN_0050cf94(temp_v2), temp_v1 != 0)) &&
       (*(char *)(temp_v1 + 0x11) == '\0')) {
      *param_3 = *(unsigned int *)(temp_v2 + 0x38);
      return 0;
    }
    temp_v0 = 0xe;
    *param_3 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
