/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023af68` (_code @ 0x23af68, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f47c; /* 0x57f47c */
extern unsigned int DAT_0057f480; /* 0x57f480 */
extern unsigned int DAT_0057f484; /* 0x57f484 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162808. */
extern int FUN_00162ea4(void);
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001f4908. */
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_0023af68(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v0 = DAT_0057f47c;
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v1 = FUN_0018206c((&DAT_0057f480)[temp_v2 * 3],(&DAT_0057f484)[temp_v2 * 3]);
    if (temp_v1 != 0) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  if (((temp_v3 == 2) && (*(int *)(temp_v0 + 8) != 0)) && (temp_v2 = FUN_00162ea4(), temp_v2 != 0)) {
    *(unsigned char *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 3;
  }
  piVar5 = (int *)0x57f498;
  temp_v6 = 0.0f;
  temp_v5 = 1.0f;
  switch(*(unsigned int *)(temp_v0 + 0xc)) {
  case 0:
    temp_v3 = 0;
    temp_v2 = 0;
    do {
      temp_v1 = FUN_0018206c((&DAT_0057f480)[temp_v2 * 3],(&DAT_0057f484)[temp_v2 * 3]);
      if (temp_v1 != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 2);
    if (temp_v3 != 2) {
      return 0;
    }
    if (*(int *)(temp_v0 + 8) == 0) {
      return 0;
    }
    temp_v2 = FUN_00203d74();
    if (temp_v2 != 0) {
      *(unsigned char *)(temp_v0 + 0x25) = 1;
    }
    else {
      *(unsigned char *)(temp_v0 + 0x25) = 0;
    }
    if ((*(char *)(DAT_0057f47c + 0x25) == '\0') &&
       (piVar5 = (int *)0x0, *(int *)(DAT_0057f47c + 8) != 0)) {
      piVar5 = (int *)(*(int *)(DAT_0057f47c + 8) + *(int *)(temp_v0 + 0x10) * 0x10);
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      *(float *)(temp_v0 + 0x20) = temp_v6;
      *(float *)(temp_v0 + 0x1c) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xc) = 2;
      FUN_001f4908(1,piVar5[2] + 1,0xffffffff);
    }
    else {
      FUN_003d54f8(0);
      FUN_003d54f8(1,*piVar5 + 1);
      *(float *)(temp_v0 + 0x20) = temp_v5;
      *(float *)(temp_v0 + 0x1c) = temp_v5;
      *(unsigned int *)(temp_v0 + 0xc) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x24) = 1;
    return 0;
  case 1:
    if ((*(char *)(DAT_0057f47c + 0x25) == '\0') &&
       (piVar5 = (int *)0x0, *(int *)(DAT_0057f47c + 8) != 0)) {
      piVar5 = (int *)(*(int *)(DAT_0057f47c + 8) + *(int *)(temp_v0 + 0x10) * 0x10);
    }
    temp_v4 = temp_v5;
    FUN_00162808(*piVar5,*(unsigned int *)(temp_v0 + 0x18));
    *(float *)(temp_v0 + 0x1c) = temp_v5;
    temp_v2 = piVar5[1];
    if (temp_v2 <= *(int *)(temp_v0 + 0x18)) {
      FUN_00162808(*piVar5 - temp_v2,*(int *)(temp_v0 + 0x18) - temp_v2);
      *(float *)(temp_v0 + 0x20) = temp_v4;
    }
    *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
    if (*(float *)(temp_v0 + 0x20) != temp_v6) {
      return 0;
    }
    break;
  case 2:
    if ((*(char *)(DAT_0057f47c + 0x25) == '\0') &&
       (piVar5 = (int *)0x0, *(int *)(DAT_0057f47c + 8) != 0)) {
      piVar5 = (int *)(*(int *)(DAT_0057f47c + 8) + *(int *)(temp_v0 + 0x10) * 0x10);
    }
    temp_v4 = temp_v6;
    FUN_00162808(piVar5[2],*(unsigned int *)(temp_v0 + 0x18));
    *(float *)(temp_v0 + 0x1c) = temp_v6;
    if (piVar5[3] <= *(int *)(temp_v0 + 0x18)) {
      FUN_00162808(piVar5[2] - piVar5[3],*(int *)(temp_v0 + 0x18) - piVar5[1]);
      *(float *)(temp_v0 + 0x20) = temp_v4;
    }
    *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
    temp_v6 = (float)VectorSignedToFloat((piVar5[2] - piVar5[3]) - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v5 - temp_v5 / temp_v6 <= *(float *)(temp_v0 + 0x20)) {
      FUN_001f4908(0,0,0xffffffff);
    }
    if (*(int *)(temp_v0 + 0x20) != 0x3f800000) {
      return 0;
    }
    break;
  default:
    return 0;
  }
  *(unsigned int *)(temp_v0 + 0xc) = 3;
  *(unsigned char *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  return 0;
}
