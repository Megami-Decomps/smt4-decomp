/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287468` (_code @ 0x287468, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004c53d0; /* 0x4c53d0 */
extern int DAT_004c53d4; /* 0x4c53d4 */
extern unsigned int DAT_004c53e0; /* 0x4c53e0 */
extern int DAT_004c53f0; /* 0x4c53f0 */
extern int DAT_004c53f4; /* 0x4c53f4 */
extern unsigned int DAT_004c5400; /* 0x4c5400 */

extern int FUN_002c564c(unsigned int);


unsigned int FUN_00287468(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 != 0) {
    return 0;
  }
  if ((DAT_004c53e0 != 0) && ((DAT_004c53e0 & 1) != 0)) {
    if (DAT_004c53d0 == param_1) {
      if ((DAT_004c53e0 & 0x30) != 0) {
        return 3;
      }
      if (((DAT_004c53e0 & 2) != 0) && ((DAT_004c53e0 & 8) == 0)) {
        return 1;
      }
    }
    else if (DAT_004c53d4 == param_1) {
      return 3;
    }
  }
  if (DAT_004c5400 == 0 || (DAT_004c5400 & 1) == 0) {
    return 0;
  }
  if (DAT_004c53f0 == param_1) {
    if ((DAT_004c5400 & 0x30) == 0) {
      if ((DAT_004c5400 & 2) == 0) {
        return 0;
      }
      if ((DAT_004c5400 & 8) == 0) {
        return 1;
      }
      return 0;
    }
  }
  else if (DAT_004c53f4 != param_1) {
    return 0;
  }
  return 3;
}
