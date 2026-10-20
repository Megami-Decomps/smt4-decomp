/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4a48` (_code @ 0x1f4a48, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019aa50(unsigned int *, int, int);
int FUN_001bce84(void);
int FUN_0023716c(int, int);
int FUN_002bed20(void);

extern unsigned int DAT_00636dec; /* 0x636dec */

/* Supplied declaration required: FUN_0019aa50. */
/* Supplied declaration required: FUN_001bce84. */
/* Supplied declaration required: FUN_0023716c. */
/* Supplied declaration required: FUN_002bed20. */


int FUN_001f4a48(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002bed20();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_2;
  FUN_0023716c(param_1,0);
  *(int *)(temp_v0 + 4) = param_1;
  FUN_001bce84();
  FUN_0019aa50(&DAT_00636dec,temp_v0,0);
  return temp_v0;
}

} /* extern "C" */
