/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183318` (_code @ 0x183318, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);
int FUN_0019d36c(void);
int FUN_0019e330(int, int, int);

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019d36c. */
/* Supplied declaration required: FUN_0019e330. */


void FUN_00183318(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  unsigned char temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  temp_v2 = 0;
  piVar4 = (int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5d0);
  do {
    FUN_001846d0(temp_v0 + temp_v2 * 0x8c + 0x34,1);
    temp_v1 = temp_v0 + temp_v2 * 4;
    if (*(char *)(temp_v1 + 0x5ac) != '\0') {
      if (param_1 != 0) {
        *(unsigned char *)(temp_v1 + 0x5ac) = 0;
      }
      FUN_0019d36c();
      *piVar4 = *(int *)(temp_v0 + 0x5d0) - 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  if (0 < *(int *)(temp_v0 + 0x5d0)) {
    temp_v2 = 0;
    do {
      FUN_0019d36c();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0x5d0));
    *(unsigned int *)(temp_v0 + 0x5d0) = 0;
  }
  temp_v2 = 0;
  do {
    if (*(char *)(temp_v0 + 0x5e4) != '\x01') {
      temp_v3 = *(char *)(temp_v0 + 0x5e4) == '\x02';
      if (!temp_v3) {
        temp_v1 = temp_v0 + temp_v2 * 0x8c;
      }
      else {
        temp_v1 = temp_v0 + temp_v2 * 0x8c;
        FUN_00184c00(temp_v1 + 0x37c,1,0);
      }
      FUN_0019e330(temp_v1 + 0x37c,temp_v3,!temp_v3);
    }
    else {
      FUN_00184758(temp_v0 + temp_v2 * 0x8c + 0x37c,3,0);
    }
    temp_v1 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 3;
  return;
}

} /* extern "C" */
