/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7344` (_code @ 0x3f7344, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned char FUN_003f7344(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v6 = 1;
  temp_v2 = (param_1[2] - param_1[1]) >> 6;
  if ((int)param_2 < temp_v2) {
    temp_v6 = (int)param_2 < 0;
    if (temp_v6) {
      param_2 = 0;
    }
    temp_v6 = !temp_v6;
    if ((int)param_2 < temp_v2) {
      temp_v0 = (temp_v2 - param_2) & 1;
    }
    else {
      temp_v0 = 0;
    }
    for (temp_v1 = temp_v0 + param_2; temp_v1 < temp_v2; temp_v1 = temp_v1 + 2) {
    }
    temp_v2 = param_1[1] + param_2 * 0x40;
  }
  else {
    temp_v0 = param_1[3];
    if ((int)(temp_v0 & 0x3fffffff) < (int)param_2) {
      piVar4 = (int *)*param_1;
      if ((piVar4 == (int *)0x0) || ((temp_v0 & 0xc0000000) != 0x40000000)) {
        temp_v6 = 0;
        param_2 = temp_v0 & 0x3fffffff;
      }
      else {
        temp_v3 = (**(romwright_code **)(*piVar4 + 8))(piVar4,param_2 << 6,0x20);
        temp_v2 = 0;
        temp_v4 = param_1[1];
        temp_v5 = param_1[2];
        temp_v1 = temp_v3;
        if (temp_v4 != temp_v5) {
          do {
            if (temp_v1 != 0) {
              nn_math_ARMv6_MTX34CopyAsm(temp_v1,temp_v4);
              temp_v7 = *(unsigned int *)(temp_v4 + 0x34);
              temp_v8 = *(unsigned int *)(temp_v4 + 0x38);
              *(unsigned int *)(temp_v1 + 0x30) = *(unsigned int *)(temp_v4 + 0x30);
              *(unsigned int *)(temp_v1 + 0x34) = temp_v7;
              *(unsigned int *)(temp_v1 + 0x38) = temp_v8;
              *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v4 + 0x3c);
            }
            temp_v4 = temp_v4 + 0x40;
            temp_v1 = temp_v1 + 0x40;
          } while (temp_v4 != temp_v5);
          temp_v2 = (param_1[2] - param_1[1]) >> 6;
        }
        if (param_1[1] != 0) {
          (**(romwright_code **)(*(int *)*param_1 + 0xc))();
        }
        param_1[2] = temp_v3 + temp_v2 * 0x40;
        param_1[1] = temp_v3;
        param_1[3] = (param_1[3] & 0xc0000000U) | param_2;
      }
    }
    temp_v2 = (param_1[2] - param_1[1]) >> 6;
    if (temp_v2 < (int)param_2) {
      temp_v7 = 0;
      temp_v8 = 0x3f800000;
      do {
        temp_v1 = param_1[1] + temp_v2 * 0x40;
        if (temp_v1 != 0) {
          if (((DAT_00476634 & 1) == 0) && (temp_v3 = FUN_002bfefc(&DAT_00476634), temp_v3 != 0)) {
            DAT_004efd6c = temp_v8;
            DAT_004efd70 = temp_v7;
            DAT_004efd74 = temp_v7;
            DAT_004efd78 = temp_v7;
            DAT_004efd7c = temp_v7;
            DAT_004efd80 = temp_v8;
            DAT_004efd84 = temp_v7;
            DAT_004efd88 = temp_v7;
            DAT_004efd8c = temp_v7;
            DAT_004efd90 = temp_v7;
            DAT_004efd94 = temp_v8;
            DAT_004efd98 = temp_v7;
          }
          nn_math_ARMv6_MTX34CopyAsm(temp_v1,&DAT_004efd6c);
          *(unsigned int *)(temp_v1 + 0x30) = temp_v8;
          *(unsigned int *)(temp_v1 + 0x34) = temp_v8;
          *(unsigned int *)(temp_v1 + 0x38) = temp_v8;
          *(unsigned int *)(temp_v1 + 0x3c) = 0x801;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_2);
    }
    temp_v2 = param_1[1] + param_2 * 0x40;
  }
  param_1[2] = temp_v2;
  return temp_v6;
}
