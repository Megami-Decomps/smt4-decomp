/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ef68` (_code @ 0x20ef68, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f574; /* 0x57f574 */
extern int DAT_0058103c; /* 0x58103c */
extern int *DAT_0058104c; /* 0x58104c */
extern signed char DAT_005f185e; /* 0x5f185e */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00203d04. */


/* WARNING: Removing unreachable block (ram,0x0018478c) */

void FUN_0020ef68(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  piVar2 = DAT_0058104c;
  if (*DAT_0058104c != 0) {
    *DAT_0058104c = 0;
    piVar2[1] = 0;
  }
  temp_v0 = DAT_0058103c;
  if (DAT_005f185e != '\0') {
    DAT_005f185e = '\0';
    FUN_00203d04(1);
  }
  if (*(char *)(temp_v0 + 0x1d) == '\0') {
    return;
  }
  *(unsigned char *)(temp_v0 + 0x1d) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  temp_v0 = DAT_0057f574;
  if (*(int *)(DAT_0057f574 + 8) != 0) {
    *(unsigned int *)(DAT_0057f574 + 8) = 5;
    *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
    FUN_00184758(temp_v0 + 0x54,1,0);
    FUN_00184c00(temp_v0 + 0x54,1,0);
    if (*(int *)(temp_v0 + 0x20) == 2) {
      temp_v1 = *(int *)(temp_v0 + 300);
      if (temp_v1 == 0) {
        return;
      }
      *(unsigned short *)(temp_v0 + 0x130) = 4;
      *(unsigned short *)(temp_v0 + 0x132) = 0;
      *(unsigned char *)(temp_v0 + 0x166) = 0;
      *(unsigned char *)(temp_v0 + 0x16a) = 0;
      *(unsigned char *)(temp_v0 + 0x134) = 0;
      *(int *)(temp_v0 + 0xec) = (int)*(short *)(temp_v1 + 0x30) << 0xc;
      *(int *)(temp_v0 + 0xf0) = (int)*(short *)(temp_v1 + 0x32) << 0xc;
      return;
    }
  }
  return;
}
