/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a53c` (_code @ 0x10a53c, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern int onlineSockAddrEquals(int, int);


unsigned long long FUN_0010a53c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if (param_2 == 0) {
    return (unsigned long long)*(unsigned int *)(param_1 + 0x1c);
  }
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&iStack_20,param_1 + 0x4c);
  temp_v3 = 0;
  temp_v2 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  while (temp_v2 != *(int *)(param_1 + 0x18)) {
    temp_v0 = onlineSockAddrEquals(temp_v2 + 0x10,param_2);
    if ((temp_v0 != 0) || (temp_v0 = onlineSockAddrEquals(temp_v2 + 0x30,param_2), temp_v0 != 0)) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v0 = *(int *)(temp_v2 + 0xc);
    if (*(int *)(temp_v2 + 0xc) != 0) {
      do {
        temp_v2 = temp_v0;
        temp_v0 = *(int *)(temp_v2 + 8);
      } while (*(int *)(temp_v2 + 8) != 0);
    }
    else {
      do {
        temp_v1 = temp_v2;
        temp_v0 = *(int *)(temp_v1 + 4);
        temp_v2 = temp_v0;
      } while (temp_v1 == *(int *)(temp_v0 + 0xc));
      temp_v2 = temp_v1;
      if (*(int *)(temp_v1 + 0xc) != temp_v0) {
        temp_v2 = temp_v0;
      }
    }
  }
  FUN_002e6e5c(&iStack_20);
  return romwright_piece_4_4(iStack_20,temp_v3);
}

} /* extern "C" */
