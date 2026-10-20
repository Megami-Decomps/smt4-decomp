/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae58c` (_code @ 0x3ae58c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028cb40(int, int, int);

extern int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_002062e8(void);
/* Supplied declaration required: FUN_0028cb40. */


int FUN_003ae58c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v2 = DAT_00439ca8;
  piVar4 = (int *)(DAT_00439ca8 + 0x7e38);
  if (*piVar4 == 0xb) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = DAT_00439ca8 + 0x2460;
    temp_v0 = FUN_002062e8();
    if (temp_v0 != 0) {
      FUN_0028cb40(temp_v1,temp_v2 + 0x7e4e,temp_v2 + 0x7e50);
      if (*(short *)(temp_v2 + 0x7e4e) == 0xe) {
        temp_v2 = 10;
      }
      else {
        temp_v2 = 0;
      }
      *piVar4 = temp_v2;
    }
  }
  return temp_v0;
}

} /* extern "C" */
