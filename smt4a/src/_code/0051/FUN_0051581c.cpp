/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051581c` (_code @ 0x51581c, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(...);

typedef int romwright_code(...);
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned char FUN_0051581c(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  
  temp_v9 = 1;
  temp_v2 = (param_1[2] - param_1[1]) >> 6;
  if ((int)param_2 < temp_v2) {
    temp_v9 = (int)param_2 < 0;
    if (temp_v9) {
      param_2 = 0;
    }
    temp_v9 = !temp_v9;
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
    if ((int)(param_1[3] & 0x3fffffffU) < (int)param_2) {
      piVar4 = (int *)*param_1;
      if (((piVar4 != (int *)0x0) && ((param_1[3] & 0xc0000000U) == 0x40000000)) &&
         (temp_v0 = (**(romwright_code **)(*piVar4 + 8))(piVar4,param_2 << 6,0x20), temp_v0 != 0)) {
        temp_v2 = 0;
        temp_v1 = param_1[1];
        temp_v8 = param_1[2];
        temp_v3 = temp_v0;
        if (temp_v1 != temp_v8) {
          do {
            if (temp_v3 != 0) {
              nn_math_ARMv6_MTX34CopyAsm(temp_v3,temp_v1);
              temp_v5 = *(unsigned int *)(temp_v1 + 0x34);
              temp_v7 = *(unsigned int *)(temp_v1 + 0x38);
              *(unsigned int *)(temp_v3 + 0x30) = *(unsigned int *)(temp_v1 + 0x30);
              *(unsigned int *)(temp_v3 + 0x34) = temp_v5;
              *(unsigned int *)(temp_v3 + 0x38) = temp_v7;
              *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v1 + 0x3c);
            }
            temp_v1 = temp_v1 + 0x40;
            temp_v3 = temp_v3 + 0x40;
          } while (temp_v1 != temp_v8);
          temp_v3 = param_1[2] - param_1[1];
          temp_v2 = (int)temp_v3 >> 6;
        }
        temp_v4 = param_1[1];
        if (temp_v4 != 0) {
          temp_v6 = param_1[2];
          if (temp_v4 < temp_v6) {
            temp_v3 = temp_v6 - temp_v4;
          }
          if (temp_v4 < temp_v6) {
            temp_v3 = temp_v3 << 0x19;
          }
          if (temp_v4 < temp_v6) {
            temp_v3 = temp_v3 >> 0x1f;
          }
          else {
            temp_v3 = 0;
          }
          for (temp_v1 = temp_v3 + 1; temp_v1 < ((int)(temp_v6 - temp_v4) >> 6) + 1; temp_v1 = temp_v1 + 2) {
          }
          param_1[2] = temp_v4;
          (**(romwright_code **)(*(int *)*param_1 + 0xc))();
        }
        param_1[2] = temp_v0 + temp_v2 * 0x40;
        param_1[1] = temp_v0;
        param_1[3] = (param_1[3] & 0xc0000000U) | param_2;
      }
      else {
        temp_v9 = 0;
        param_2 = param_1[3] & 0x3fffffff;
      }
    }
    temp_v2 = (param_1[2] - param_1[1]) >> 6;
    if (temp_v2 < (int)param_2) {
      temp_v5 = 0;
      temp_v7 = 0x3f800000;
      do {
        temp_v1 = param_1[1] + temp_v2 * 0x40;
        if (temp_v1 != 0) {
          if (((DAT_005c4c2c & 1) == 0) && (temp_v8 = FUN_002eba64(&DAT_005c4c2c), temp_v8 != 0)) {
            DAT_0064c054 = temp_v7;
            DAT_0064c058 = temp_v5;
            DAT_0064c05c = temp_v5;
            DAT_0064c060 = temp_v5;
            DAT_0064c064 = temp_v5;
            DAT_0064c068 = temp_v7;
            DAT_0064c06c = temp_v5;
            DAT_0064c070 = temp_v5;
            DAT_0064c074 = temp_v5;
            DAT_0064c078 = temp_v5;
            DAT_0064c07c = temp_v7;
            DAT_0064c080 = temp_v5;
          }
          nn_math_ARMv6_MTX34CopyAsm(temp_v1,&DAT_0064c054);
          *(unsigned int *)(temp_v1 + 0x30) = temp_v7;
          *(unsigned int *)(temp_v1 + 0x34) = temp_v7;
          *(unsigned int *)(temp_v1 + 0x38) = temp_v7;
          *(unsigned int *)(temp_v1 + 0x3c) = 0x801;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)param_2);
    }
    temp_v2 = param_1[1] + param_2 * 0x40;
  }
  param_1[2] = temp_v2;
  return temp_v9;
}

} /* extern "C" */
