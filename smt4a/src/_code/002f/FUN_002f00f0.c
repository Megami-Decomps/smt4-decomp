/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f00f0` (_code @ 0x2f00f0, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_003100f6(int, unsigned int);
extern unsigned int FUN_00310160(unsigned int, int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_002f00f0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00310160(*(unsigned int *)(param_1 + 0x14),
                       *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) + param_2);
  if (*(unsigned int *)(param_1 + 0x14) < temp_v0) {
    temp_v1 = FUN_003100f6(param_1,temp_v0);
    if (temp_v1 == 0) {
      return 0;
    }
    rt_memcpy(temp_v1,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x14));
    FUN_002e6e14(*(unsigned int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = temp_v1;
    *(unsigned int *)(param_1 + 0x14) = temp_v0;
  }
  return 1;
}
