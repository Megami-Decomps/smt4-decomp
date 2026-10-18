/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280c5c` (_code @ 0x280c5c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005b3c80; /* 0x5b3c80 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */
extern int DAT_005b3c90; /* 0x5b3c90 */
extern int DAT_005b3c94; /* 0x5b3c94 */
extern int DAT_005b3c98; /* 0x5b3c98 */
extern int DAT_005b3c9c; /* 0x5b3c9c */
extern unsigned int DAT_00636e00; /* 0x636e00 */

/* Supplied declaration required: FUN_0018cfe4. */
/* Supplied declaration required: FUN_002246d0. */
/* Supplied declaration required: FUN_0034103c. */


void FUN_00280c5c(unsigned int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  *param_1 = *param_1 & 0xffdfffff;
  temp_v0 = param_1[2];
  temp_v2 = DAT_005b3c90;
  if (param_2 != 1) {
    if (param_2 == 2) {
      temp_v1 = 0;
      temp_v2 = DAT_005b3c98;
      FUN_0034103c(temp_v1);
    }
    else {
      temp_v2 = DAT_005b3c94;
      if (param_2 != 4) {
        if (param_2 != 5) {
          return;
        }
        temp_v1 = 1;
        temp_v2 = DAT_005b3c9c;
        FUN_0034103c(temp_v1);
      }
    }
  }
  if (temp_v2 != 0) {
    FUN_002246d0(temp_v0);
    temp_v3 = (unsigned int)(param_2 >= 3);
    FUN_0018cfe4((&DAT_005b3c80)[temp_v3],(&DAT_005b3c88)[temp_v3]);
    (&DAT_00636e00)[temp_v3 * 6] = (&DAT_00636e00)[temp_v3 * 6] + 1;
    *(int *)(temp_v0 + 0xc) = param_2;
    *(int *)(temp_v0 + 0x10) = param_2;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  return;
}
