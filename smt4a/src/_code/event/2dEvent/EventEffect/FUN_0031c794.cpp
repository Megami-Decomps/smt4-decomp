/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c794` (_code @ 0x31c794, 0x340 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162808(...);
int FUN_00212204(int);
int FUN_00226724(...);

extern int DAT_0057f3b4; /* 0x57f3b4 */
extern unsigned int DAT_0057f3d0; /* 0x57f3d0 */
extern unsigned int DAT_0057f3d4; /* 0x57f3d4 */

/* Supplied declaration required: FUN_00162808. */
extern int FUN_00162ea4(void);
extern int FUN_0018206c(unsigned int, unsigned int);
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00212204. */
/* Supplied declaration required: FUN_00226724. */


unsigned int FUN_0031c794(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  unsigned int temp_v9;
  
  temp_v0 = DAT_0057f3b4;
  temp_v9 = 0x3f800000;
  temp_v8 = 0x3f80000000000000;
  if (*(int *)(DAT_0057f3b4 + 8) == 0) {
    temp_v5 = 0;
    temp_v1 = temp_v5;
    do {
      temp_v3 = FUN_0018206c((&DAT_0057f3d0)[temp_v5 * 3],(&DAT_0057f3d4)[temp_v5 * 3]);
      temp_v9 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
      if (temp_v3 != 0) {
        temp_v1 = temp_v1 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    if (temp_v1 == 2) {
      FUN_00212204(0);
      *(unsigned int *)(temp_v0 + 8) = 1;
      *(unsigned char *)(temp_v0 + 0x18) = 1;
      temp_v1 = FUN_00203d74();
      if (temp_v1 == 0) {
        *(unsigned char *)(temp_v0 + 0x19) = 0;
      }
      else {
        *(unsigned char *)(temp_v0 + 0x19) = 1;
        *(unsigned int *)(temp_v0 + 0xc) = 0x28;
        *(unsigned int *)(temp_v0 + 0x14) = temp_v9;
      }
    }
  }
  else if (*(int *)(DAT_0057f3b4 + 8) == 1) {
    if (*(char *)(DAT_0057f3b4 + 0x19) != '\0') {
      temp_v6 = *(float *)(DAT_0057f3b4 + 0x14) - 0.1f;
      temp_v1 = *(int *)(DAT_0057f3b4 + 0xc) - 0x16;
      *(int *)(DAT_0057f3b4 + 0xc) = temp_v1;
      *(float *)(temp_v0 + 0x14) = temp_v6;
      if (temp_v1 < -0xb3) {
        if (temp_v6 <= 0.0f) {
          *(unsigned int *)(temp_v0 + 0x10) = 300;
          temp_v1 = *(int *)(temp_v0 + 0xc);
          if (-0xb4 >= temp_v1) {
            temp_v1 = -0xb4;
          }
        }
        else {
          temp_v1 = -0xb4;
        }
      }
      *(int *)(temp_v0 + 0xc) = temp_v1;
      temp_v7 = 0.0f;
      if (0.0f < temp_v6) {
        temp_v7 = temp_v6;
      }
      *(float *)(temp_v0 + 0x14) = temp_v7;
    }
    else {
      temp_v4 = *(int *)(DAT_0057f3b4 + 0x10) - 0xf;
      if (temp_v4 < 0x79) {
        temp_v2 = FUN_00226724(0x28,0xffffff4c,0x78,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v4 = *(int *)(temp_v0 + 0x10) - 0x88;
      if (temp_v4 < 7) {
        temp_v2 = FUN_00226724(0xffffff4c,0x28,6,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v4 = *(int *)(temp_v0 + 0x10) - 0x8f;
      if (temp_v4 < 8) {
        temp_v2 = FUN_00226724(0x28,0xffffff4c,7,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v4 = *(int *)(temp_v0 + 0x10) - 0xc3;
      if (temp_v4 < 5) {
        temp_v2 = FUN_00226724(0xffffff4c,0x28,4,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v4 = *(int *)(temp_v0 + 0x10) - 200;
      if (temp_v4 < 7) {
        temp_v2 = FUN_00226724(0x28,0xffffff4c,6,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v4 = *(int *)(temp_v0 + 0x10) - 0xcf;
      if (temp_v4 < 5) {
        temp_v2 = FUN_00226724(0xffffff4c,0x28,4,temp_v4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      if (*(int *)(temp_v0 + 0x10) >= 0xd4) {
        temp_v2 = FUN_00226724(0x28,0xffffff4c,0x2d,*(int *)(temp_v0 + 0x10) - 0xd4);
        *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
      }
      temp_v2 = 0x3f19999a;
      if (*(int *)(temp_v0 + 0x10) - 0xfU < 0xbc) {
        FUN_00162808(0xca);
        *(unsigned int *)(temp_v0 + 0x14) = temp_v9;
      }
      temp_v9 = 0x3f333333;
      if (*(int *)(temp_v0 + 0x10) - 0xcbU < 8) {
        FUN_00162808(8);
        *(unsigned int *)(temp_v0 + 0x14) = temp_v2;
      }
      if (*(int *)(temp_v0 + 0x10) >= 0xf0) {
        FUN_00162808(0x3c,*(int *)(temp_v0 + 0x10) - 0xf0);
        *(unsigned int *)(temp_v0 + 0x14) = temp_v9;
      }
      temp_v1 = FUN_00203d74();
      if (temp_v1 != 0) {
        *(unsigned char *)(temp_v0 + 0x19) = 1;
        temp_v9 = FUN_00226724(0,10,0xdc,0x28 - *(int *)(temp_v0 + 0xc));
        *(unsigned int *)(temp_v0 + 0x10) = temp_v9;
      }
    }
    temp_v1 = *(int *)(temp_v0 + 0x10) + 1;
    *(int *)(temp_v0 + 0x10) = temp_v1;
    if (temp_v1 >= 301) {
      *(unsigned char *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
  }
  temp_v1 = FUN_00162ea4();
  if (temp_v1 != 0) {
    temp_v5 = 0;
    temp_v1 = temp_v5;
    do {
      temp_v3 = FUN_0018206c((&DAT_0057f3d0)[temp_v5 * 3],(&DAT_0057f3d4)[temp_v5 * 3]);
      if (temp_v3 != 0) {
        temp_v1 = temp_v1 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    if (temp_v1 == 2) {
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
  }
  return 0;
}

} /* extern "C" */
