/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353d74` (_code @ 0x353d74, 0x2e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_00281b94(int);

extern int DAT_00581284; /* 0x581284 */
extern int DAT_005f15fc; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00281b94. */


void FUN_00353d74(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00581284 + temp_v1 * 0x48;
    if (*(char *)(temp_v0 + 0x14) != '\0') {
      if ((DAT_005f15fc != 4) || (DAT_005f1600 != 1)) {
        if (*(int *)(temp_v0 + 0x38) == 2) {
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00281b94(0);
        }
        if (*(int *)(temp_v0 + 0x38) == 10) {
          FUN_001bc124();
          FUN_001bbf0c();
          FUN_00281b94(0);
        }
      }
      if (*(int *)(temp_v0 + 0x38) == 7) {
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00281b94(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 9) {
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00281b94(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0xb) {
        FUN_001bc124();
        FUN_001bbf0c();
        FUN_00281b94(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0xf) {
        FUN_00281b94(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0x10) {
        FUN_00281b94(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0x11) {
        FUN_00281b94(0);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
