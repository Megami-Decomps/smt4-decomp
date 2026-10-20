/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad6fc` (_code @ 0x1ad6fc, 0x280 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029c3c0(int, int, unsigned int);
int FUN_002a03d8(...);
int FUN_002c53f4(...);

extern int DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002a60b4(unsigned int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c53f4. */


unsigned int FUN_001ad6fc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = DAT_0043df28;
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v1 = FUN_002a60b4((&DAT_0043df40)[temp_v2 * 3],(&DAT_0043df44)[temp_v2 * 3]);
    if (temp_v1 != 0) {
      temp_v3 = temp_v3 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  if (((temp_v3 == 2) && (*(int *)(temp_v0 + 8) != 0)) && (temp_v2 = FUN_002c1d5c(), temp_v2 != 0)) {
    *(unsigned char *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 3;
  }
  temp_v7 = 0x3f800000;
  temp_v6 = 0.0f;
  switch(*(unsigned int *)(temp_v0 + 0xc)) {
  case 0:
    temp_v3 = 0;
    temp_v2 = 0;
    do {
      temp_v1 = FUN_002a60b4((&DAT_0043df40)[temp_v2 * 3],(&DAT_0043df44)[temp_v2 * 3]);
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
    piVar4 = (int *)0x0;
    if (*(int *)(DAT_0043df28 + 8) != 0) {
      piVar4 = (int *)(*(int *)(DAT_0043df28 + 8) + *(int *)(temp_v0 + 0x10) * 0x10);
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      *(float *)(temp_v0 + 0x20) = temp_v6;
      *(float *)(temp_v0 + 0x1c) = temp_v6;
      *(unsigned int *)(temp_v0 + 0xc) = 2;
      FUN_0029c3c0(1,piVar4[2] + 1,0xffffffff);
    }
    else {
      FUN_002a03d8(0);
      FUN_002a03d8(1,*piVar4 + 1);
      *(unsigned int *)(temp_v0 + 0x20) = temp_v7;
      *(unsigned int *)(temp_v0 + 0x1c) = temp_v7;
      *(unsigned int *)(temp_v0 + 0xc) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x24) = 1;
    return 0;
  case 1:
    piVar4 = (int *)0x0;
    if (*(int *)(DAT_0043df28 + 8) != 0) {
      piVar4 = (int *)(*(int *)(DAT_0043df28 + 8) + *(int *)(temp_v0 + 0x10) * 0x10);
    }
    temp_v4 = temp_v7;
    FUN_002c53f4(*piVar4,*(unsigned int *)(temp_v0 + 0x18));
    *(unsigned int *)(temp_v0 + 0x1c) = temp_v7;
    temp_v2 = piVar4[1];
    if (temp_v2 <= *(int *)(temp_v0 + 0x18)) {
      FUN_002c53f4(*piVar4 - temp_v2,*(int *)(temp_v0 + 0x18) - temp_v2);
      *(unsigned int *)(temp_v0 + 0x20) = temp_v4;
    }
    *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
    if (*(float *)(temp_v0 + 0x20) != temp_v6) {
      return 0;
    }
    break;
  case 2:
    temp_v2 = 0;
    if (*(int *)(DAT_0043df28 + 8) != 0) {
      temp_v2 = *(int *)(DAT_0043df28 + 8) + *(int *)(temp_v0 + 0x10) * 0x10;
    }
    temp_v5 = temp_v6;
    FUN_002c53f4(*(unsigned int *)(temp_v2 + 8),*(unsigned int *)(temp_v0 + 0x18));
    *(float *)(temp_v0 + 0x1c) = temp_v6;
    if (*(int *)(temp_v2 + 0xc) <= *(int *)(temp_v0 + 0x18)) {
      FUN_002c53f4(*(int *)(temp_v2 + 8) - *(int *)(temp_v2 + 0xc),*(int *)(temp_v0 + 0x18) - 0x32);
      *(float *)(temp_v0 + 0x20) = temp_v5;
    }
    *(int *)(temp_v0 + 0x18) = *(int *)(temp_v0 + 0x18) + 1;
    if (*(int *)(temp_v0 + 0x20) >= 0x3f733333) {
      FUN_0029c3c0(0,0,0xffffffff);
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

} /* extern "C" */
