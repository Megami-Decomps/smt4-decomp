/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1e48` (_code @ 0x3d1e48, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */

extern int FUN_0023fc34(int);
/* Supplied declaration required: FUN_0024689c. */
extern int FUN_00294174(int);
/* Supplied declaration required: FUN_002946b8. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_0033858c. */
/* Supplied declaration required: FUN_00339500. */
extern int FUN_00339a94(int);
/* Supplied declaration required: FUN_00339b18. */
extern int FUN_0033a0c4(int);
/* Supplied declaration required: FUN_0033a120. */
/* Supplied declaration required: FUN_0033a16c. */
/* Supplied declaration required: FUN_0033a1dc. */
/* Supplied declaration required: FUN_0033a594. */
extern int FUN_0033ae8c(int);
extern int FUN_003d6d74(unsigned int);
/* Supplied declaration required: FUN_003d7200. */
/* Supplied declaration required: FUN_003dbc68. */
/* Supplied declaration required: FUN_003dcdc0. */


unsigned int FUN_003d1e48(int *param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  switch(*(unsigned int *)(param_2 + 8)) {
  case 0:
    FUN_003d7200(DAT_004342c8,"battle/army_summon/army_summon.bccam");
    *(unsigned int *)(param_2 + 8) = 1;
    return 0;
  case 1:
    temp_v1 = FUN_003d6d74(DAT_004342c8);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_003dbc68(DAT_00435d18);
    temp_v0 = 2;
    break;
  case 2:
    temp_v1 = DAT_00435d18;
    FUN_003dcdc0();
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0024689c(DAT_00435d18);
    FUN_0033a120(*param_1);
    temp_v0 = 3;
    break;
  case 3:
    temp_v1 = FUN_00339a94(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_002ae3f0();
    temp_v0 = 4;
    break;
  case 4:
    FUN_00339b18(*param_1);
    temp_v0 = 5;
    break;
  case 5:
    temp_v1 = FUN_0033ae8c(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_00339500(*param_1);
    FUN_0033a1dc(*param_1);
    temp_v0 = 6;
    break;
  case 6:
    temp_v1 = FUN_0023fc34(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0033a594(*param_1);
    *(unsigned int *)(param_2 + 8) = 7;
  case 7:
    temp_v1 = FUN_0033a0c4(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0033a16c(*param_1);
    temp_v0 = 8;
    break;
  case 8:
    FUN_0033858c(*param_1);
    temp_v1 = FUN_00294174(*param_1);
    if (temp_v1 != 0) {
      FUN_002946b8(*param_1);
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xd;
      return 1;
    }
  default:
    return 0;
  }
  *(unsigned int *)(param_2 + 8) = temp_v0;
  return 0;
}
