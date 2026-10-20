/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010575c` (_code @ 0x10575c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int *, unsigned int);

extern unsigned char DAT_00558788; /* 0x558788 */

/* Supplied declaration required: FUN_002e6354. */
extern unsigned int *FUN_002e6dac(int);
extern int FUN_002e7168(unsigned int *, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int *FUN_002e760a(unsigned int);


int FUN_0010575c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar6;
  unsigned int temp_v3;
  
  *param_1 = (unsigned int)&DAT_00558788;
  temp_v0 = FUN_002e7168(param_1 + 1,0x20000000,param_3,param_4,param_4);
  puVar2 = (unsigned int *)FUN_002e760a(4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = 0;
  }
  puVar6 = (unsigned short *)(temp_v0 + 0x3c);
  *(unsigned int **)(temp_v0 + 0x30) = puVar2;
  *puVar6 = (unsigned short)param_2;
  puVar3 = (unsigned int *)FUN_002e6dac(param_2 + 4);
  *puVar3 = param_2;
  for (temp_v1 = 0; temp_v1 < param_2; temp_v1 = temp_v1 + 1) {
  }
  **(unsigned int **)(temp_v0 + 0x30) = (unsigned int)(puVar3 + 1);
  temp_v2 = 0;
  while( 1 ) {
    if ((int)(unsigned int)*puVar6 <= temp_v2) break;
    *(unsigned char *)(**(int **)(temp_v0 + 0x30) + temp_v2) = 0;
    temp_v2 = temp_v2 + 1;
  }
  temp_v3 = (unsigned int)*puVar6;
  puVar3 = (unsigned int *)FUN_002e6dac(temp_v3 * 4 + 4);
  *puVar3 = temp_v3;
  for (temp_v1 = 0; temp_v1 < temp_v3; temp_v1 = temp_v1 + 1) {
  }
  *(unsigned int **)(temp_v0 + 0x34) = puVar3 + 1;
  FUN_002e6354(puVar3 + 1,(unsigned int)*puVar6 << 2);
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  return temp_v0 - 4;
}

} /* extern "C" */
