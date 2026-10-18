/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7ca8` (_code @ 0x4d7ca8, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571508; /* 0x571508 */
extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_005738b8; /* 0x5738b8 */
extern unsigned int DAT_005738bc; /* 0x5738bc */
extern unsigned int DAT_005738c0; /* 0x5738c0 */
extern unsigned int DAT_005738c4; /* 0x5738c4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_003756c8. */
/* Supplied declaration required: FUN_004aa8b0. */
extern int FUN_004f2708(int, int, unsigned int);
/* Supplied declaration required: FUN_004f8f08. */
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004feecc. */


unsigned int FUN_004d7ca8(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_2 + 0x45a0);
  if (((*puVar3 & DAT_005738b8) != 0 || (*(unsigned int *)(param_2 + 0x45a4) & DAT_005738bc) != 0) &&
     ((param_1[1] & 1) == 0)) {
    if ((-1 < *(int *)(DAT_00571508 + 0x7cc)) &&
       (temp_v0 = FUN_004f2708(DAT_00571508,param_2,1), temp_v0 != 0)) {
      FUN_004fb670(0,0);
    }
    FUN_004feecc(1,0);
    param_1[1] = param_1[1] | 1;
  }
  temp_v0 = FUN_00224880(param_1[5]);
  if (temp_v0 == 2) {
    if (((DAT_005738b8 & *puVar3) != 0 || (*(unsigned int *)(param_2 + 0x45a4) & DAT_005738bc) != 0) &&
       (FUN_003756c8(0),
       (*puVar3 & DAT_005738c0) != 0 || (*(unsigned int *)(param_2 + 0x45a4) & DAT_005738c4) != 0)) {
      FUN_004aa8b0(DAT_0057a9c8,0);
      temp_v1 = ~DAT_005738c4;
      *puVar3 = *puVar3 & ~DAT_005738c0;
      *(unsigned int *)(param_2 + 0x45a4) = *(unsigned int *)(param_2 + 0x45a4) & temp_v1;
    }
    *param_1 = 0;
    temp_v1 = ~DAT_005738b8;
    *(unsigned int *)(param_2 + 0x45a4) = *(unsigned int *)(param_2 + 0x45a4) & ~DAT_005738bc;
    *puVar3 = *puVar3 & temp_v1;
    FUN_004f8f08(DAT_00573808);
  }
  if ((int)param_1[10] < 0xffff) {
    param_1[10] = param_1[10] + 1;
  }
  return 0;
}
