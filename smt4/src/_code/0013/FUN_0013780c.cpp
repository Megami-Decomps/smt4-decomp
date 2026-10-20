/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013780c` (_code @ 0x13780c, 0x2a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013b608(void);
int FUN_0013b618(void);
int FUN_002ba2b8(void);

/* stack frame of param_12: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
} param_12_stack;

extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern signed char DAT_004c62a2; /* 0x4c62a2 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_0013780c(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  if (param_10 == 0x500) {
    temp_v9 = 0;
    temp_v0 = 1;
    temp_v3 = 1;
  }
  else if (param_10 == 0x501) {
    temp_v9 = 1;
    temp_v0 = 2;
    temp_v3 = 1;
  }
  else {
    if (param_10 != 0x502) {
      return;
    }
    temp_v9 = 2;
    temp_v0 = 2;
    temp_v3 = 2;
  }
  if (param_5 == 0x8057) {
    temp_v2 = 3;
  }
  else if (param_5 < 0x8057) {
    if (param_5 == 0x8051) {
      temp_v2 = 1;
    }
    else {
      if (param_5 != 0x8056) {
        return;
      }
      temp_v2 = 4;
    }
  }
  else if (param_5 == 0x8058) {
    temp_v2 = 0;
  }
  else {
    if (param_5 != 0x8d62) {
      return;
    }
    temp_v2 = 2;
  }
  if (param_9 == 0x8057) {
    temp_v6 = 3;
    temp_v1 = 2;
  }
  else if (param_9 < 0x8057) {
    if (param_9 == 0x8051) {
      temp_v6 = 1;
      temp_v1 = 3;
    }
    else {
      if (param_9 != 0x8056) {
        return;
      }
      temp_v6 = 4;
      temp_v1 = 2;
    }
  }
  else if (param_9 == 0x8058) {
    temp_v6 = 0;
    temp_v1 = 4;
  }
  else {
    if (param_9 != 0x8d62) {
      return;
    }
    temp_v6 = 2;
    temp_v1 = temp_v6;
  }
  if ((param_3 != 0 && param_4 != 0) && (param_7 != 0 && param_8 != 0)) {
    temp_v8 = param_7 * temp_v0;
    puVar4 = (unsigned char *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
    *puVar4 = 3;
    *(unsigned int *)(puVar4 + 4) = param_2;
    *(int *)(puVar4 + 8) = param_6;
    temp_v4 = *(unsigned int *)(puVar4 + 0x14);
    temp_v5 = (temp_v4 & 0xffffffc0) | temp_v2 | (temp_v6 << 3);
    *(unsigned int *)(puVar4 + 0x14) = temp_v5;
    *(short *)(puVar4 + 0xc) = (short)param_3;
    *(short *)(puVar4 + 0xe) = (short)param_4;
    *(short *)(puVar4 + 0x10) = (short)temp_v8;
    if (param_11 == 0) {
      temp_v0 = (temp_v4 & 0xffffff80) | temp_v2 | (temp_v6 << 3);
    }
    *(short *)(puVar4 + 0x12) = (short)param_8 * temp_v3;
    if (param_11 != 0) {
      temp_v7 = *(unsigned int *)(puVar4 + 0x10);
      temp_v4 = temp_v7 & 0xffff;
      temp_v2 = *(unsigned int *)(puVar4 + 0xc) & 0xffff;
      if (temp_v2 <= temp_v4) {
        temp_v8 = temp_v7 >> 0x10;
      }
      if (temp_v2 > temp_v4 || temp_v8 < *(unsigned int *)(puVar4 + 0xc) >> 0x10) {
        if (temp_v0 != 2) {
          temp_v1 = (temp_v2 - temp_v4) * ((temp_v7 >> 0x10) - 1) * temp_v1;
        }
        else {
          temp_v2 = temp_v2 - temp_v4;
          if (temp_v1 == 3) {
            temp_v0 = 0x10;
          }
          else {
            temp_v0 = 8;
          }
          if ((temp_v2 & temp_v0) != 0) {
            temp_v2 = temp_v2 - temp_v0;
          }
          temp_v1 = (int)(temp_v2 * (param_8 - 1) * temp_v1) / 2;
        }
        *(int *)(puVar4 + 8) = param_6 - temp_v1;
      }
      temp_v0 = temp_v5 | 0x40;
    }
    temp_v2 = (temp_v0 & 0xfffffe7f) | (temp_v9 << 7);
    *(unsigned int *)(puVar4 + 0x14) = temp_v2;
    if (param_12 == 0x20) {
      temp_v2 = temp_v2 | 0x200;
    }
    else {
      temp_v2 = (temp_v0 & 0xfffffc7f) | (temp_v9 << 7);
    }
    *(unsigned int *)(puVar4 + 0x14) = temp_v2 & 0xfffff3ff;
    FUN_0013b608();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (((DAT_004c6330 == param_1) && (DAT_004c62a2 != '\0')) && (DAT_004c62a1 == '\0')) {
      DAT_004c62a1 = '\x01';
      FUN_002ba2b8();
    }
    FUN_0013b618();
    return;
  }
  return;
}

} /* extern "C" */
