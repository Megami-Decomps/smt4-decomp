/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d1e0` (_code @ 0x35d1e0, 0x554 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00272edc(void);
int FUN_00371068(int, int);
int SBORROW4(int, int);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00272edc. */
/* Supplied declaration required: FUN_00371068. */


void FUN_0035d1e0(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int unaff_r9;
  int unaff_r10;
  unsigned char temp_v8;
  float in_s0;
  float in_s1;
  float in_s2;
  int temp_v9;
  int temp_v10;
  int temp_v11 [9];
  
  temp_v1 = gameFlagsGetBlock();
  temp_v5 = 0;
  if ('\0' < *(char *)(temp_v1 + 0xe05)) {
    do {
      if (0 < *(char *)(temp_v1 + 0xe04)) {
        temp_v2 = (int)*(char *)(temp_v1 + 0xe04) & 1;
        if (temp_v2 == 1) {
          *(unsigned char *)(temp_v1 + temp_v5 * 0x78 + 0x42) = 0;
        }
        temp_v3 = (unsigned int)(temp_v2 == 1);
        if ((int)temp_v2 < (int)*(char *)(temp_v1 + 0xe04)) {
          temp_v4 = temp_v1 + temp_v5 * 0x78;
          do {
            *(unsigned char *)(temp_v4 + temp_v3 * 8 + 0x42) = 0;
            temp_v2 = temp_v2 + 2;
            *(unsigned char *)(temp_v4 + (temp_v3 + 1) * 8 + 0x42) = 0;
            temp_v3 = temp_v3 + 2;
          } while ((int)temp_v2 < (int)*(char *)(temp_v1 + 0xe04));
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(char *)(temp_v1 + 0xe05));
  }
  temp_v10 = (int)(in_s0 * 0.0014285714f);
  temp_v11[2] = (int)(in_s1 * 0.0014285714f);
  if (temp_v10 < 1) {
    temp_v10 = 1;
  }
  if (*(char *)(temp_v1 + 0xe04) - 2 < temp_v10) {
    temp_v10 = *(char *)(temp_v1 + 0xe04) - 2;
  }
  if (temp_v11[2] < 1) {
    temp_v11[2] = 1;
  }
  if (*(char *)(temp_v1 + 0xe05) - 2 < temp_v11[2]) {
    temp_v11[2] = *(char *)(temp_v1 + 0xe05) - 2;
  }
  FUN_00272edc();
  temp_v5 = (int)(((long long)(int)in_s2 * -0x49f49f49 + ((unsigned long long)(unsigned int)(int)in_s2 << 0x20)) >> 0x20
               );
  temp_v5 = (temp_v5 >> 5) - (temp_v5 >> 0x1f);
  if (temp_v5 >= 8) {
    temp_v5 = 0;
  }
  switch(temp_v5) {
  case 0:
    temp_v9 = 1;
    temp_v11[0] = 0;
    break;
  case 1:
    temp_v9 = 2;
    temp_v11[1] = 1;
    temp_v11[0] = 0;
    break;
  case 2:
    temp_v9 = 1;
    temp_v11[0] = 1;
    break;
  case 3:
    temp_v11[0] = 1;
    temp_v11[1] = 2;
    temp_v9 = 2;
    break;
  case 4:
    temp_v9 = 1;
    temp_v11[0] = 2;
    break;
  case 5:
    temp_v9 = 2;
    temp_v11[1] = 3;
    temp_v11[0] = 2;
    break;
  case 6:
    temp_v9 = 1;
    temp_v11[0] = 3;
    break;
  case 7:
    temp_v9 = 2;
    temp_v11[0] = 3;
    temp_v11[1] = 0;
  }
  temp_v11[3] = 0;
  if (0 < temp_v9) {
    do {
      temp_v11[4] = temp_v11[temp_v11[3]];
      if (temp_v11[4] == 0) {
        unaff_r9 = 0;
        unaff_r10 = -1;
      }
      if (temp_v11[4] != 0) {
        if (temp_v11[4] == 1) {
          unaff_r9 = -1;
          unaff_r10 = 0;
        }
        else if (temp_v11[4] == 2) {
          unaff_r9 = 0;
          unaff_r10 = 1;
        }
        else if (temp_v11[4] == 3) {
          unaff_r9 = 1;
          unaff_r10 = 0;
        }
      }
      temp_v7 = 0;
      temp_v5 = temp_v10;
      temp_v4 = temp_v11[2];
      while (temp_v6 = temp_v1 + temp_v4 * 0x78 + temp_v5 * 8, *(char *)(temp_v6 + 0x3c) == '\x02') {
        FUN_00371068(temp_v5,temp_v4);
        if (temp_v7 < 2) {
          temp_v0 = *(char *)(temp_v6 + 0x34);
          temp_v8 = temp_v0 == '\x02';
          if (temp_v8) {
            temp_v0 = *(char *)(temp_v6 + 0x2c);
          }
          if (temp_v8 && temp_v0 == '\x02') {
            FUN_00371068(temp_v5 - 2,temp_v4);
          }
          temp_v0 = *(char *)(temp_v6 + 0x44);
          temp_v8 = temp_v0 == '\x02';
          if (temp_v8) {
            temp_v0 = *(char *)(temp_v6 + 0x4c);
          }
          if (temp_v8 && temp_v0 == '\x02') {
            FUN_00371068(temp_v5 + 2,temp_v4);
          }
          temp_v0 = *(char *)(temp_v6 - 0x3c);
          temp_v8 = temp_v0 == '\x02';
          if (temp_v8) {
            temp_v0 = *(char *)(temp_v6 - 0xb4);
          }
          if (temp_v8 && temp_v0 == '\x02') {
            FUN_00371068(temp_v5,temp_v4 - 2);
          }
          temp_v0 = *(char *)(temp_v6 + 0xb4);
          temp_v8 = temp_v0 == '\x02';
          if (temp_v8) {
            temp_v0 = *(char *)(temp_v6 + 300);
          }
          if (temp_v8 && temp_v0 == '\x02') {
            FUN_00371068(temp_v5,temp_v4 + 2);
          }
        }
        else if (temp_v7 < 4) {
          if (*(char *)(temp_v6 + 0x34) == '\x02') {
            FUN_00371068(temp_v5 - 1,temp_v4);
          }
          if (*(char *)(temp_v6 + 0x44) == '\x02') {
            FUN_00371068(temp_v5 + 1,temp_v4);
          }
          if (*(char *)(temp_v6 - 0x3c) == '\x02') {
            FUN_00371068(temp_v5,temp_v4 - 1);
          }
          if (*(char *)(temp_v6 + 0xb4) == '\x02') {
            FUN_00371068(temp_v5,temp_v4 + 1);
          }
        }
        temp_v7 = temp_v7 + 1;
        temp_v5 = temp_v5 + unaff_r9;
        temp_v4 = temp_v4 + unaff_r10;
      }
      if (temp_v11[4] != 0) {
        if (temp_v11[4] != 1) {
          if (temp_v11[4] != 2) {
            if (temp_v11[4] == 3) {
              temp_v5 = temp_v10;
              temp_v4 = temp_v11[2] - 1;
            }
          }
          else {
            temp_v5 = temp_v10 + 1;
            temp_v4 = temp_v11[2];
          }
        }
        else {
          temp_v5 = temp_v10;
          temp_v4 = temp_v11[2] + 1;
        }
      }
      else {
        temp_v5 = temp_v10 - 1;
        temp_v4 = temp_v11[2];
      }
      if (0 < temp_v5) {
        temp_v6 = *(char *)(temp_v1 + 0xe04) - 2;
        temp_v8 = SBORROW4(temp_v6,temp_v5);
        temp_v7 = temp_v6 - temp_v5;
        if (temp_v5 <= temp_v6) {
          temp_v8 = SBORROW4(temp_v4,1);
          temp_v7 = temp_v4 - 1;
        }
        if ((temp_v7 < 0 == temp_v8) && (temp_v4 <= *(char *)(temp_v1 + 0xe05) - 2)) {
          while (*(char *)(temp_v1 + temp_v4 * 0x78 + temp_v5 * 8 + 0x3c) == '\x02') {
            FUN_00371068(temp_v5,temp_v4);
            temp_v5 = temp_v5 + unaff_r9;
            temp_v4 = temp_v4 + unaff_r10;
          }
        }
      }
      if (temp_v11[4] != 0) {
        if (temp_v11[4] != 1) {
          if (temp_v11[4] != 2) {
            if (temp_v11[4] == 3) {
              temp_v5 = temp_v10;
              temp_v4 = temp_v11[2] + 1;
            }
          }
          else {
            temp_v5 = temp_v10 - 1;
            temp_v4 = temp_v11[2];
          }
        }
        else {
          temp_v5 = temp_v10;
          temp_v4 = temp_v11[2] - 1;
        }
      }
      else {
        temp_v5 = temp_v10 + 1;
        temp_v4 = temp_v11[2];
      }
      if (0 < temp_v5) {
        temp_v6 = *(char *)(temp_v1 + 0xe04) - 2;
        temp_v8 = SBORROW4(temp_v6,temp_v5);
        temp_v7 = temp_v6 - temp_v5;
        if (temp_v5 <= temp_v6) {
          temp_v8 = SBORROW4(temp_v4,1);
          temp_v7 = temp_v4 - 1;
        }
        if ((temp_v7 < 0 == temp_v8) && (temp_v4 <= *(char *)(temp_v1 + 0xe05) - 2)) {
          while (*(char *)(temp_v1 + temp_v4 * 0x78 + temp_v5 * 8 + 0x3c) == '\x02') {
            FUN_00371068(temp_v5,temp_v4);
            temp_v5 = temp_v5 + unaff_r9;
            temp_v4 = temp_v4 + unaff_r10;
          }
        }
      }
      temp_v11[3] = temp_v11[3] + 1;
    } while (temp_v11[3] < temp_v9);
  }
  return;
}

} /* extern "C" */
