/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c600c` (_code @ 0x4c600c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, int);

extern unsigned int DAT_005713f0; /* 0x5713f0 */
extern unsigned int DAT_005713f4; /* 0x5713f4 */
extern unsigned int DAT_00571420; /* 0x571420 */
extern unsigned int DAT_00571424; /* 0x571424 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_003f0e20. */


int FUN_004c600c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  
  if (param_1 - 4U < 0x32) {
    temp_v3 = 0;
    temp_v4 = 4;
  }
  else {
    temp_v3 = 4;
    temp_v4 = 0x32;
  }
  temp_v1 = btlGetMainState();
  temp_v5 = temp_v3 + temp_v4;
  if (temp_v3 < temp_v5) {
    do {
      puVar6 = (unsigned int *)(*(int *)(temp_v1 + 0x1ffc) + temp_v3 * 0x408);
      if (((DAT_005713f0 & *puVar6) != 0 || (DAT_005713f4 & puVar6[1]) != 0) &&
         ((*puVar6 & DAT_00571420) == 0 && (puVar6[1] & DAT_00571424) == 0)) {
        temp_v0 = *(short *)((int)puVar6 + 0x6e);
        temp_v2 = btlGetMainState();
        FUN_003f0e20(temp_v2,(int)temp_v0);
        temp_v4 = 0;
        if (temp_v2 != 0) {
          temp_v4 = *(int *)(temp_v2 + 0x120);
        }
        if ((temp_v2 != 0 && temp_v4 != 0) && -1 < temp_v4) {
          return (int)*(short *)((int)puVar6 + 0x6e);
        }
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)temp_v5);
  }
  return -1;
}

} /* extern "C" */
