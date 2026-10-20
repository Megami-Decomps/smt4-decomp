/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee796` (_code @ 0x2ee796, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106f24(int);

/* Supplied declaration required: FUN_00106f24. */
extern int FUN_002ee7e8(void);


void FUN_002ee796(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ee7e8();
  temp_v1 = *(unsigned int *)(param_1 + 8);
  if (temp_v1 < (unsigned int)(temp_v0 + param_2)) {
    for (; temp_v1 < (unsigned int)(((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) >> 1) + param_2);
        temp_v1 = (temp_v1 >> 1) + temp_v1) {
    }
    FUN_00106f24(param_1);
  }
  return;
}

} /* extern "C" */
