/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ad310` (_code @ 0x4ad310, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055c9c8; /* 0x55c9c8 */


void FUN_004ad310(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)*param_1)(param_1,0x30);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[5] = 0xffffffff;
    puVar1[3] = (unsigned int)param_1;
    puVar1[4] = param_2;
    *puVar1 = (unsigned int)&DAT_0055c9c8;
    puVar1[1] = 3;
    *(unsigned char *)(puVar1 + 9) = 6;
    *(unsigned char *)((int)puVar1 + 0x25) = 0;
    *(unsigned short *)((int)puVar1 + 0x26) = 0;
    *(unsigned short *)(puVar1 + 10) = 0;
    *(unsigned short *)((int)puVar1 + 0x2a) = 0;
    *(unsigned short *)(puVar1 + 0xb) = 0;
    puVar1[2] = 0xd;
  }
  return;
}
