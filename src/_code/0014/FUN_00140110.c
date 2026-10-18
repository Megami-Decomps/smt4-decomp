/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140110` (_code @ 0x140110, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0014e560; /* 0x14e560 */
extern unsigned char DAT_00421738; /* 0x421738 */

extern unsigned int *FUN_0014bf04(void);
extern int FUN_0014c7a0(int);
extern int FUN_0014c87c(unsigned int *);
/* Supplied declaration required: FUN_002c5f58. */


void FUN_00140110(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0014bf04();
  *puVar1 = (unsigned int)&DAT_00421738;
  temp_v0 = FUN_0014c87c(puVar1 + 0x3d);
  temp_v0 = FUN_0014c7a0(temp_v0 + 0x1c5c);
  *(unsigned int *)(temp_v0 + 0xc30) = param_2;
  temp_v0 = temp_v0 + 0xc34;
  FUN_002c5f58(temp_v0,&LAB_0014e560,0x10,4);
  *(unsigned char *)(temp_v0 + 0x246) = 0;
  *(unsigned int *)(temp_v0 + 0x248) = 0;
  *(unsigned int *)(temp_v0 + 0x24c) = 0;
  return;
}
