/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Battle_SetStagePosition` (_code @ 0x2f1128, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e760(int);
int FUN_003c7c84(int, int);
int FUN_003c7f20(int, int);

extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0027e760. */
extern int FUN_002893d8(void);
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_003c7c84. */
/* Supplied declaration required: FUN_003c7f20. */


unsigned char scrComm_Battle_SetStagePosition(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002939f4();
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  temp_v3 = FUN_002893d8();
  if (temp_v3 == 0) {
    FUN_003c7f20(DAT_004398d4,temp_v0);
    *(unsigned int *)(temp_v0 + 0x13c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x140) = temp_v2;
    FUN_003c7c84(DAT_004398d4,temp_v0);
    FUN_0027e760(DAT_004398d4);
    return 0;
  }
  return *(int *)(DAT_004398d4 + 0x80) == 4;
}

} /* extern "C" */
