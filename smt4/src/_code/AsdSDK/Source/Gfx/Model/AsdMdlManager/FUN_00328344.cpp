/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328344` (_code @ 0x328344, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a10bc(void);
int FUN_002a9244(unsigned int);
int FUN_002b265c(unsigned int *, int, int);
int FUN_002b2770(int);
int FUN_002b2988(int, unsigned int);
int FUN_003289a0(unsigned int, unsigned int, unsigned int);

extern unsigned int DAT_004dad60; /* 0x4dad60 */

/* Supplied declaration required: FUN_002a10bc. */
/* Supplied declaration required: FUN_002a9244. */
/* Supplied declaration required: FUN_002b265c. */
/* Supplied declaration required: FUN_002b2770. */
/* Supplied declaration required: FUN_002b2988. */
/* Supplied declaration required: FUN_003289a0. */


int FUN_00328344(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002a10bc();
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = param_3;
  FUN_002b2988(param_1,param_2);
  *(int *)(*(int *)(temp_v0 + 8) + 4) = param_1;
  FUN_003289a0(*(unsigned int *)(temp_v0 + 8),param_3,*(unsigned int *)(param_4 + 8));
  FUN_002a9244(*(unsigned int *)(temp_v0 + 8));
  FUN_002b2770(temp_v0);
  FUN_002b265c(&DAT_004dad60,temp_v0,0);
  return temp_v0;
}

} /* extern "C" */
