/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d1c1c` (_code @ 0x3d1c1c, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246730(...);
int FUN_00294414(...);
int FUN_002ae164(...);
int FUN_00338358(...);
int FUN_003392cc(...);
int FUN_003398e4(...);
int FUN_00339eec(...);
int FUN_00339f38(...);
int FUN_00339fa8(...);
int FUN_0033a360(...);
int FUN_003d6fd4(...);
int FUN_003dba3c(...);
int FUN_003dcb94(...);

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */

extern int FUN_0023fad8(int);
/* Supplied declaration required: FUN_00246730. */
extern int FUN_00293ed0(int);
/* Supplied declaration required: FUN_00294414. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_00338358. */
/* Supplied declaration required: FUN_003392cc. */
extern int FUN_00339860(int);
/* Supplied declaration required: FUN_003398e4. */
extern int FUN_00339e90(int);
/* Supplied declaration required: FUN_00339eec. */
/* Supplied declaration required: FUN_00339f38. */
/* Supplied declaration required: FUN_00339fa8. */
/* Supplied declaration required: FUN_0033a360. */
extern int FUN_0033ac58(int);
extern int FUN_003d6b48(unsigned int);
/* Supplied declaration required: FUN_003d6fd4. */
/* Supplied declaration required: FUN_003dba3c. */
/* Supplied declaration required: FUN_003dcb94. */


unsigned int FUN_003d1c1c(int *param_1,int param_2)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  switch(*(unsigned int *)(param_2 + 8)) {
  case 0:
    FUN_003d6fd4(DAT_004342c8,"battle/army_summon/army_summon.bccam");
    *(unsigned int *)(param_2 + 8) = 1;
    return 0;
  case 1:
    temp_v1 = FUN_003d6b48(DAT_004342c8);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_003dba3c(DAT_00435d18);
    temp_v0 = 2;
    break;
  case 2:
    temp_v1 = DAT_00435d18;
    FUN_003dcb94();
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_00246730(DAT_00435d18);
    FUN_00339eec(*param_1);
    temp_v0 = 3;
    break;
  case 3:
    temp_v1 = FUN_00339860(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_002ae164();
    temp_v0 = 4;
    break;
  case 4:
    FUN_003398e4(*param_1);
    temp_v0 = 5;
    break;
  case 5:
    temp_v1 = FUN_0033ac58(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_003392cc(*param_1);
    FUN_00339fa8(*param_1);
    temp_v0 = 6;
    break;
  case 6:
    temp_v1 = FUN_0023fad8(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0033a360(*param_1);
    *(unsigned int *)(param_2 + 8) = 7;
  case 7:
    temp_v1 = FUN_00339e90(*param_1);
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_00339f38(*param_1);
    temp_v0 = 8;
    break;
  case 8:
    FUN_00338358(*param_1);
    temp_v1 = FUN_00293ed0(*param_1);
    if (temp_v1 != 0) {
      FUN_00294414(*param_1);
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xd;
      return 1;
    }
  default:
    return 0;
  }
  *(unsigned int *)(param_2 + 8) = temp_v0;
  return 0;
}

} /* extern "C" */
