/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240b9c` (_code @ 0x240b9c, 0x248 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00247344(void);
extern int FUN_0024de30(unsigned int);
extern int FUN_002990bc(void);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002c0ba8. */


unsigned int FUN_00240b9c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  FUN_002b6700();
  if (temp_v1 == 0) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x19e) != 0) && (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a8) != 0) && (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a0) != 0) && (temp_v0 = FUN_002990bc(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a2) != 0) && (temp_v0 = FUN_002990bc(), temp_v0 == 0)) {
    return 0;
  }
  if ((*(short *)(temp_v1 + 0x1a4) != 0) && (temp_v0 = FUN_002990bc(), temp_v0 == 0)) {
    return 0;
  }
  switch(*(unsigned short *)(temp_v1 + 0x1a6)) {
  case 1:
    temp_v0 = FUN_00247344();
    if (temp_v0 != 5) {
      return 0;
    }
    break;
  case 2:
    temp_v0 = FUN_00247344();
    if (temp_v0 != 4) {
      return 0;
    }
    break;
  case 3:
    temp_v0 = FUN_00247344();
    if (temp_v0 != 1) {
      return 0;
    }
    break;
  case 4:
    temp_v0 = FUN_0024de30(5);
    if (temp_v0 == 0) {
      return 0;
    }
    break;
  case 5:
    temp_v0 = FUN_0024de30(4);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  if ((((*(short *)(temp_v1 + 0x1aa) == 0) || (temp_v0 = FUN_002990bc(), temp_v0 == 0)) &&
      ((*(short *)(temp_v1 + 0x1ac) == 0 || (temp_v1 = FUN_002990bc(), temp_v1 == 0)))) &&
     (((((((FUN_002b6700(), param_1 == 0 || ((*(unsigned char *)(param_1 + 7) & 4) == 0)) ||
          (temp_v1 = FUN_002c0ba8(0x675), temp_v1 != 0)) ||
         ((temp_v1 = FUN_002c0ba8(0x676), temp_v1 != 0 || (temp_v1 = FUN_002c0ba8(0x677), temp_v1 != 0))))
        || (temp_v1 = FUN_002c0ba8(0x678), temp_v1 != 0)) ||
       ((temp_v1 = FUN_002c0ba8(0x679), temp_v1 != 0 || (temp_v1 = FUN_002c0ba8(0x67a), temp_v1 != 0)))) ||
      ((temp_v1 = FUN_002c0ba8(0x67b), temp_v1 != 0 || (temp_v1 = FUN_002c0ba8(0x674), temp_v1 != 0)))))) {
    return 1;
  }
  return 0;
}
