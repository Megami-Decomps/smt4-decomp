/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba6e4` (_code @ 0x3ba6e4, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0049fd14; /* 0x49fd14 */

/* Supplied declaration required: FUN_00249c70. */
/* Supplied declaration required: FUN_00276c24. */
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002bd9ec. */
/* Supplied declaration required: FUN_002c59b8. */
/* Supplied declaration required: FUN_003b84e4. */
/* Supplied declaration required: FUN_003b8d2c. */


void FUN_003ba6e4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (((*(unsigned int *)(param_1 + 0x20) & 0x100) != 0) || (temp_v1 = FUN_00282d98(), temp_v1 == 0)) {
    temp_v2 = *(unsigned int *)(param_1 + 0x20);
    if ((temp_v2 & 0x400000) == 0) {
      if (((((temp_v2 & 0x200000) == 0 && (temp_v2 & 0x40000) == 0) &&
           ((temp_v2 & 0x800000) == 0 && (temp_v2 & 0x4000000) == 0)) &&
          ((temp_v2 & 0x1000000) == 0 && (temp_v2 & 0x2000000) == 0)) &&
         (((temp_v2 & 0x8000000) == 0 && (temp_v2 & 0x20000000) == 0 && ((temp_v2 & 0x10) != 0)))) {
        if ((temp_v2 & 0x80000) != 0) {
          if (DAT_0049fd14 < 100) {
            temp_v3 = 6;
          }
          else {
            temp_v3 = 8;
          }
          FUN_002c59b8(temp_v3,0);
        }
        else {
          if ((temp_v2 & 0x100000) == 0) {
            FUN_003b8d2c(param_1);
            FUN_002bd9ec(param_1 + 0x3c,param_1 + 0x42);
            FUN_003b84e4(param_1);
            *(unsigned int *)(param_1 + 0x28) = 2;
            *(unsigned int *)(param_1 + 0x2c) = 0;
            *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffef;
            return;
          }
          temp_v1 = (int)*(short *)(param_1 + 0x42);
          if (temp_v1 >= 100) {
            if (temp_v1 != 100) {
              FUN_00276c24(temp_v1,1,0xffffffff);
            }
            *(unsigned char *)(param_1 + 0x48) = 1;
          }
          else {
            FUN_00276c24(temp_v1,(int)*(short *)(param_1 + 0x44),(int)*(short *)(param_1 + 0x46));
            *(unsigned char *)(param_1 + 0x49) = 1;
          }
        }
      }
      *(unsigned int *)(param_1 + 0x28) = 0x11;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v0 = *(short *)(param_1 + 0xd78) + 1;
    *(short *)(param_1 + 0xd78) = temp_v0;
    if (temp_v0 >= 0x1e) {
      FUN_00249c70(0,1);
      FUN_002a0678(0,10);
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffbfffff;
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}
