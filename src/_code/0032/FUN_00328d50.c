/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328d50` (_code @ 0x328d50, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern int FUN_00299064(unsigned int);
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


int * FUN_00328d50(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  
  temp_v3 = 0;
  FUN_002c0ec4(0x23,6);
  temp_v0 = FUN_002c0e4c();
  if (0 < temp_v0 + *(int *)(DAT_00433158 + 0x414)) {
    do {
      temp_v1 = FUN_002c0ec4(0x23,6);
      temp_v0 = FUN_002c0e9c();
      temp_v2 = FUN_002c0e4c(temp_v1);
      if (temp_v3 < temp_v2) {
        piVar5 = (int *)(temp_v0 + temp_v3 * 0xc);
      }
      else {
        piVar5 = (int *)0x0;
        if (temp_v3 < *(int *)(DAT_00433158 + 0x414) + temp_v2) {
          piVar5 = (int *)(*(int *)(DAT_00433158 + 0x418) + (temp_v3 - temp_v2) * 0xc);
        }
      }
      if ((((*piVar5 == param_1) &&
           (((short)piVar5[1] == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 != 0)))) &&
          ((*(short *)((int)piVar5 + 6) == 0 || (temp_v0 = FUN_002c0ba8(), temp_v0 == 0)))) &&
         ((piVar5[2] == 0 || (temp_v0 = FUN_00299064(piVar5[2] & 0xffff), temp_v0 != 0)))) {
        return piVar5;
      }
      temp_v3 = temp_v3 + 1;
      FUN_002c0ec4(0x23,6);
      temp_v0 = FUN_002c0e4c();
    } while ((int)temp_v3 < temp_v0 + *(int *)(DAT_00433158 + 0x414));
  }
  return (int *)0x0;
}
