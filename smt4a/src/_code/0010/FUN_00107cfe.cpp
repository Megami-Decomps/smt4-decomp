/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107cfe` (_code @ 0x107cfe, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int constructObj00559344(unsigned int *, unsigned int);
extern int *arrayElementAddress_002efa50(int, int);
extern int FUN_002f035c(int, unsigned int);


long long FUN_00107cfe(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v1 = 0;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  while( 1 ) {
    if ((int)(*(unsigned short *)(param_1 + 0x104) + 1) <= temp_v1) {
      return (unsigned long long)uStack_20 << 0x20;
    }
    piVar1 = (int *)arrayElementAddress_002efa50(param_1 + 0x90,temp_v1);
    temp_v2 = *piVar1;
    temp_v0 = constructObj00559344(&uStack_20,1);
    temp_v2 = FUN_002f035c(temp_v2 + 0x20,temp_v0);
    if (temp_v2 != 0) break;
    temp_v1 = temp_v1 + 1;
  }
  return romwright_piece_4_4(uStack_20,1);
}

} /* extern "C" */
