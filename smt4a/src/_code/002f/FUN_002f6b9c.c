/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6b9c` (_code @ 0x2f6b9c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005590d8; /* 0x5590d8 */

extern int FUN_00104710(int, int);
extern int FUN_002f7414(unsigned int *);
extern unsigned char FUN_002f742c(int);


int FUN_002f6b9c(unsigned int *param_1,int param_2)

{
  unsigned char temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_005590d8;
  temp_v1 = FUN_002f7414(param_1 + 1);
  temp_v1 = FUN_00104710(temp_v1 + 0x10,param_2 + 0x14);
  *(unsigned int *)(temp_v1 + 0x14) = *(unsigned int *)(temp_v1 + 8);
  temp_v0 = FUN_002f742c(temp_v1 - 0x14);
  *(unsigned char *)(temp_v1 + 0x18) = temp_v0;
  return temp_v1 - 0x14;
}
