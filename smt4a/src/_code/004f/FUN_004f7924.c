/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7924` (_code @ 0x4f7924, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001568f8. */
extern unsigned int FUN_003eae20(int, int, unsigned short);
extern int FUN_003ef9e0(int, int);
/* Supplied declaration required: FUN_00401d18. */
/* Supplied declaration required: FUN_00402290. */


unsigned int FUN_004f7924(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if ((*(unsigned int *)(param_2 + 0x50) & 0x20000) == 0) {
    temp_v1 = FUN_0014aa78();
    temp_v2 = FUN_003ef9e0(temp_v1,param_2);
    if (temp_v2 < 0) {
      temp_v2 = 0;
    }
    temp_v4 = temp_v1;
    FUN_001568f8(temp_v1,(int)*(short *)(param_2 + 0x6a));
    temp_v0 = *(unsigned short *)(temp_v4 + 2);
    temp_v4 = *(int *)(temp_v4 + temp_v2 * 4 + 0xc);
    temp_v2 = 0;
    while ((temp_v5 = param_1 + temp_v2 * 0x3c, *(int *)(temp_v5 + 0x1398) != temp_v4 ||
           ((*(unsigned int *)(temp_v5 + 0x13d0) & 1) == 0))) {
      temp_v2 = temp_v2 + 1;
      if (temp_v2 >= 0x32) {
        temp_v2 = 0;
        do {
          if (*(int *)(param_1 + temp_v2 * 0x3c + 0x1398) == temp_v4) {
            param_1 = param_1 + temp_v2 * 0x3c;
            if (*(int *)(param_1 + 0x139c) != 0) {
              *(int *)(param_1 + 0x13a4) = *(int *)(param_1 + 0x139c);
              temp_v3 = 0;
              if (-1 < *(int *)(temp_v1 + 0xf0)) {
                temp_v3 = FUN_003eae20(temp_v1,(int)(short)*(int *)(temp_v1 + 0xf0),temp_v0);
              }
              FUN_00401d18(param_1 + 0x13a0,0x20000,0x20000,temp_v3);
              FUN_00402290(param_1 + 0x13a0);
            }
            *(unsigned int *)(param_1 + 0x13d0) = *(unsigned int *)(param_1 + 0x13d0) | 1;
            return 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x32);
        return 0;
      }
    }
  }
  return 1;
}
