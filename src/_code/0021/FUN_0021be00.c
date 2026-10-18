/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021be00` (_code @ 0x21be00, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447604; /* 0x447604 */
extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned char DAT_004a0be4; /* 0x4a0be4 */

extern int FUN_0024f4e8(void);
/* Supplied declaration required: FUN_0024f520. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_0021be00(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  char *pcVar3;
  int *unaff_r6;
  unsigned char *unaff_r8;
  
  temp_v0 = 0;
  FUN_0024f520();
  if (temp_v0 != 0) {
    FUN_002c4938(&DAT_004a0be4,0x400);
    temp_v0 = FUN_0024f4e8();
    if (0 < temp_v0) {
      unaff_r6 = (int *)&DAT_0049f91c;
      unaff_r8 = &DAT_004a0be4;
    }
    pcVar3 = (char *)0x0;
    DAT_00447604 = 0;
    if (0 < temp_v0) {
      do {
        pcVar2 = pcVar3;
        FUN_0024f520();
        if (((*pcVar2 != -1) && ((int)*pcVar2 == *unaff_r6)) && ((int)pcVar2[1] == unaff_r6[1])) {
          *(char **)(unaff_r8 + DAT_00447604 * 4) = pcVar3;
          DAT_00447604 = DAT_00447604 + 1;
        }
        pcVar3 = pcVar3 + 1;
      } while ((int)pcVar3 < temp_v0);
    }
  }
  return;
}
