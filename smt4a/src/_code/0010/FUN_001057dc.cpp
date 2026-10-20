/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001057dc` (_code @ 0x1057dc, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(...);

extern unsigned char DAT_00558788; /* 0x558788 */

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002eb624(unsigned int *);


int FUN_001057dc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558788;
  for (temp_v1 = 0; temp_v1 < *(unsigned int *)(param_1[0xe] - 4); temp_v1 = temp_v1 + 1) {
  }
  FUN_002e6e14();
  for (temp_v1 = 0; temp_v1 < *(unsigned int *)(*(int *)param_1[0xd] - 4); temp_v1 = temp_v1 + 1) {
  }
  FUN_002e6e14();
  FUN_002e6e14(param_1[0xd]);
  temp_v0 = FUN_002eb624(param_1 + 1);
  return temp_v0 - 4;
}

} /* extern "C" */
