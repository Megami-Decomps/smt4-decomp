/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5ae8` (_code @ 0x2b5ae8, 0x4e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern signed char DAT_0044e364; /* 0x44e364 */

/* Supplied declaration required: FUN_00139d80. */
/* Supplied declaration required: FUN_002b48dc. */
/* Supplied declaration required: FUN_002bb54c. */
extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002c0e4c. */


void FUN_002b5ae8(int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  romwright_code *unaff_r7;
  unsigned char uStack00000000;
  
  if (param_1 != 0) {
    if (DAT_0044e364 == '\0') {
      *param_3 = 0;
      return;
    }
    FUN_00139d80();
    temp_v0 = 0;
    temp_v1 = temp_v2;
  }
  else {
    temp_v1 = FUN_002bb5b4();
    if (temp_v1 == 0) {
      *param_3 = 0;
      return;
    }
    FUN_002bb54c();
    temp_v0 = 1;
    temp_v1 = temp_v3;
  }
  (*unaff_r7)(0,temp_v1 + 0x78);
  FUN_002c0e4c(temp_v0);
  FUN_002b48dc(&uStack00000000);
  return;
}
