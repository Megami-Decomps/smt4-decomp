/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db880` (_code @ 0x3db880, 0x158 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003db9dc; /* 0x3db9dc */

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002aa7f4. */
extern int FUN_002c3290(int);


int FUN_003db880(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned char temp_v2;
  
  piVar3 = (int *)(param_1 + 0x1cfc);
  if (*piVar3 != 0) {
    FUN_00293c98();
    temp_v0 = FUN_002934d4();
    if (temp_v0 == 0) {
      temp_v0 = 0;
      temp_v1 = FUN_002c3290(*piVar3);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3;
        FUN_002aa7f4(temp_v1,&LAB_003db9dc);
        if ((temp_v1 != 0) && (0 < *(short *)(*piVar3 + 0x10))) {
          temp_v0 = (int)*(short *)(*piVar3 + 0x10);
        }
      }
      temp_v1 = FUN_002c3290(*piVar3 + 0x16);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x16;
        FUN_002aa7f4(temp_v1,&LAB_003db9dc);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x26);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      temp_v1 = FUN_002c3290(*piVar3 + 0x2c);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x2c;
        FUN_002aa7f4(temp_v1,&LAB_003db9dc);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x3c);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      temp_v1 = FUN_002c3290(*piVar3 + 0x42);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x42;
        FUN_002aa7f4(temp_v1,&LAB_003db9dc);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x52);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      return temp_v0;
    }
  }
  return -1;
}
