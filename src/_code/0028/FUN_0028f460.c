/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f460` (_code @ 0x28f460, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240b9c(unsigned int);
extern int FUN_002990bc(void);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002c0ba8. */


unsigned int FUN_0028f460(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = param_1;
  FUN_002b6700();
  if (temp_v1 == 0) {
    return 0;
  }
  temp_v2 = FUN_00240b9c(param_1);
  if (temp_v2 == 0) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1aa) != 0) && (temp_v2 = FUN_002990bc(), temp_v2 != 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1ac) != 0) && (temp_v2 = FUN_002990bc(), temp_v2 != 0)) {
    return 0;
  }
  if (param_1 < 0x15e) {
    temp_v0 = *(short *)(temp_v1 + 0x1ae);
    if (temp_v0 != 0) {
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if (((*(short *)(temp_v1 + 0x1b0) != 0) && (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)) &&
             ((*(short *)(temp_v1 + 0x1b2) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
            return 0;
          }
          return 1;
        }
        temp_v2 = FUN_002c0ba8(0x224);
      }
      else {
        temp_v2 = FUN_002c0ba8(0x223);
      }
      if (temp_v2 == 0) {
        return 0;
      }
    }
    else {
      temp_v2 = FUN_002c0ba8(0x223);
      if (temp_v2 != 0) {
        return 0;
      }
      temp_v2 = FUN_002c0ba8(0x224);
      if (temp_v2 != 0) {
        return 0;
      }
      temp_v2 = FUN_002c0ba8(0x295);
      if (temp_v2 != 0) {
        return 0;
      }
    }
  }
  if (((*(short *)(temp_v1 + 0x1b0) != 0) && (temp_v2 = FUN_002c0ba8(), temp_v2 != 0)) &&
     ((*(short *)(temp_v1 + 0x1b2) == 0 || (temp_v2 = FUN_002c0ba8(), temp_v2 == 0)))) {
    return 0;
  }
  return 1;
}
