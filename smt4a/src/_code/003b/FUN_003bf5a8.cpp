/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf5a8` (_code @ 0x3bf5a8, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int uRam00580cd4; /* 0x580cd4 */
extern unsigned int uRam00580d94; /* 0x580d94 */
extern unsigned int uRam00580e54; /* 0x580e54 */
extern unsigned int uRam00580f74; /* 0x580f74 */
extern unsigned int uRam00581034; /* 0x581034 */

extern int FUN_0018719c(unsigned int);
extern int FUN_004083a8(unsigned int, unsigned int);


unsigned int FUN_003bf5a8(int param_1)

{
  int temp_v0;
  
  if (param_1 * 0x30 == -0x580ca8) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 4) {
      if (param_1 != 8) {
        if (param_1 != 0xe) {
          if (param_1 != 0x12) {
            temp_v0 = FUN_0018719c(*(unsigned int *)(param_1 * 0x30 + 0x580cd4));
            if (temp_v0 == 0) {
              return 0;
            }
          }
          else {
            temp_v0 = FUN_004083a8(0xed,4);
            if (temp_v0 != 0) {
              return 0;
            }
            temp_v0 = FUN_0018719c(uRam00581034);
            if (temp_v0 == 0) {
              return 0;
            }
          }
        }
        else {
          temp_v0 = FUN_004083a8(0xda,5);
          if (temp_v0 != 0) {
            return 0;
          }
          temp_v0 = FUN_0018719c(uRam00580f74);
          if (temp_v0 == 0) {
            return 0;
          }
        }
      }
      else {
        temp_v0 = FUN_004083a8(0xcd,3);
        if (temp_v0 != 0) {
          return 0;
        }
        temp_v0 = FUN_0018719c(uRam00580e54);
        if (temp_v0 == 0) {
          return 0;
        }
      }
    }
    else {
      temp_v0 = FUN_004083a8(0xbf,7);
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v0 = FUN_0018719c(uRam00580d94);
      if (temp_v0 == 0) {
        return 0;
      }
    }
  }
  else {
    temp_v0 = FUN_004083a8(0x4e,8);
    if (temp_v0 != 0) {
      return 0;
    }
    temp_v0 = FUN_0018719c(uRam00580cd4);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
