/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ab0c` (_code @ 0x10ab0c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b58(unsigned int, unsigned int, unsigned int);

typedef int romwright_code(...);
extern int FUN_002ecf28(void);
/* Supplied declaration required: FUN_002f3b58. */


void FUN_0010ab0c(int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  (**(romwright_code **)(*param_2 + 0x58))(param_2,*(unsigned int *)(param_1 + 8));
  *(short *)(param_2 + 8) = (short)param_3;
  temp_v0 = (**(romwright_code **)(*param_2 + 0x54))(param_2);
  temp_v1 = FUN_002ecf28();
  FUN_002f3b58(*(unsigned int *)(temp_v1 + 0xc),param_3,temp_v0);
  return;
}

} /* extern "C" */
