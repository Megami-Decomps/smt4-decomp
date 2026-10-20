/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcad0` (_code @ 0x3bcad0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, unsigned int);

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_003bcad0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_0014aa78();
  FUN_003f0e20(temp_v2,temp_v0);
  if (temp_v2 != 0) {
    piVar4 = (int *)(temp_v2 + 0x3ac);
    *(unsigned int *)(temp_v2 + *(int *)(temp_v2 + 0x3ac) * 4 + 0x394) = temp_v1;
    temp_v2 = *piVar4;
    *piVar4 = temp_v2 + 1;
    if (temp_v2 + 1 >= 6) {
      *piVar4 = 0;
    }
  }
  return 1;
}

} /* extern "C" */
