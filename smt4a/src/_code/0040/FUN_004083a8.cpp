/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004083a8` (_code @ 0x4083a8, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int *DAT_005f1600; /* 0x5f1600 */

extern int FUN_0018719c(unsigned int);
extern int FUN_002c2710(void);


unsigned char FUN_004083a8(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *pbVar3;
  
  temp_v0 = FUN_002c2710();
  temp_v0 = temp_v0 + param_1 * 8;
  if (param_1 >= 0xc0) {
    pbVar3 = (unsigned char *)(temp_v0 + 0x2f0);
  }
  else {
    pbVar3 = (unsigned char *)(temp_v0 + 0xcf0);
  }
  if (param_1 != 0x93) {
    if ((param_1 == 0xbb || param_1 == 0xbc) || param_1 == 0xbd) {
      return 1;
    }
    if (param_1 != 0xbe) {
      if (param_1 != 0x79) {
        if (param_1 != 0x7a) {
          if (param_1 == 0xb3) {
            if (param_2 == 0x2d || param_2 == 0x2e) {
              return 1;
            }
            if (param_2 == 0x2f || param_2 == 0x30) {
              return 1;
            }
            if (param_2 == 0x31 || param_2 == 0x32) {
              return 1;
            }
            if (param_2 == 0x33 || param_2 == 0x34) {
              return 1;
            }
            if ((param_2 == 0x2a || param_2 == 0x2b) || param_2 == 0x2c) {
              return 1;
            }
          }
        }
        else if (param_2 == 2) {
          puVar1 = (unsigned int *)&DAT_005f15fc;
          if (DAT_005f15fc == 0x17) {
            puVar1 = DAT_005f1600;
          }
          if (DAT_005f15fc == 0x17 && puVar1 == (unsigned int *)0x1) {
            if ((*pbVar3 & 4) != 0) {
              return 1;
            }
            return *pbVar3 & 4;
          }
          return 0;
        }
      }
      else if (param_2 == 3) {
        puVar1 = (unsigned int *)&DAT_005f15fc;
        if (DAT_005f15fc == 0x17) {
          puVar1 = DAT_005f1600;
        }
        if (DAT_005f15fc == 0x17 && puVar1 == (unsigned int *)0x6) {
          if ((*pbVar3 & 8) == 0) {
            return *pbVar3 & 8;
          }
          return 1;
        }
        return 0;
      }
    }
    else if (param_2 != 2) {
      return 1;
    }
  }
  else {
    temp_v0 = FUN_0018719c(0x9d);
    if (temp_v0 != 0) {
      return 0;
    }
  }
  if (((1 << (param_2 & 7)) & 0xffU & (unsigned int)pbVar3[param_2 >> 3]) != 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
