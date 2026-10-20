/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9c6c` (_code @ 0x3f9c6c, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001986c4(unsigned int, int *);
int FUN_00198848(unsigned int, unsigned int *);
int FUN_0019eb14(unsigned int *);
int FUN_00522a08(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001986c4. */
/* Supplied declaration required: FUN_00198848. */
/* Supplied declaration required: FUN_0019eb14. */
/* Supplied declaration required: FUN_00522a08. */


unsigned char FUN_003f9c6c(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned char temp_v5;
  unsigned int in_s0;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  int temp_v10;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int temp_v11;
  unsigned int uStack_34;
  unsigned int temp_v12;
  float temp_v13 [5];
  
  temp_v1 = *(int *)(param_1 + 0x34);
  temp_v8 = romwright_piece_4_4(0x42652ee0,in_s0);
  temp_v2 = *(int *)(*(int *)(temp_v1 + 0x48) + param_3 * 4);
  puVar7 = *(unsigned int **)(temp_v2 + 0x34);
  if (*(short *)(temp_v1 + 0x94) == 0) {
    puVar3 = *(unsigned int **)(temp_v2 + 0x30);
    temp_v3 = *puVar3;
    temp_v4 = puVar3[1];
    param_2[5] = puVar3[2];
    param_2[3] = temp_v3;
    param_2[4] = temp_v4;
    temp_v4 = *(unsigned int *)(temp_v2 + 0x20);
    temp_v3 = *(unsigned int *)(temp_v2 + 0x24);
    *param_2 = *(unsigned int *)(temp_v2 + 0x1c);
    param_2[1] = temp_v4;
    param_2[2] = temp_v3;
    param_2[10] = *puVar7;
    param_2[0xb] = puVar7[1];
    param_2[0xc] = puVar7[2];
    *(float *)&param_2[9] = (float)puVar7[3] * 57.295776f;
    return 1;
  }
  temp_v1 = *(int *)(*(int *)(temp_v1 + 0x90) + param_3 * 4);
  if (*(unsigned char *)(temp_v1 + 0x1a) == 0xff) {
    temp_v0 = *(char *)(temp_v1 + 0x1b);
    temp_v5 = temp_v0 == -1;
    if (temp_v5) {
      temp_v0 = *(char *)(temp_v1 + 0x1c);
    }
    if (temp_v5 && temp_v0 == -1) {
      return 0;
    }
  }
  temp_v10 = *(unsigned int *)(temp_v2 + 4);
  uStack_4c = *(unsigned int *)(temp_v2 + 8);
  uStack_48 = *(unsigned int *)(temp_v2 + 0xc);
  uStack_44 = *(unsigned int *)(temp_v2 + 0x10);
  uStack_40 = *(unsigned int *)(temp_v2 + 0x14);
  uStack_3c = *(unsigned int *)(temp_v2 + 0x18);
  temp_v11 = *(unsigned int *)(temp_v2 + 0x1c);
  uStack_34 = *(unsigned int *)(temp_v2 + 0x20);
  temp_v12 = *(unsigned int *)(temp_v2 + 0x24);
  if (*(unsigned char *)(temp_v1 + 0x1a) != 0xff) {
    FUN_001986c4(*(unsigned int *)(*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1a) * 4),
                 &temp_v10);
  }
  if (*(unsigned char *)(temp_v1 + 0x1b) != 0xff) {
    FUN_00198848(*(unsigned int *)(*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1b) * 4),
                 param_2 + 3);
  }
  if (*(unsigned char *)(temp_v1 + 0x1c) != 0xff) {
    FUN_00522a08(*(unsigned int *)(*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1c) * 4),
                 param_2 + 0xd);
  }
  temp_v9 = 0.0f;
  *param_2 = temp_v11;
  param_2[1] = uStack_34;
  param_2[2] = temp_v12;
  param_2[10] = *puVar7;
  param_2[0xb] = puVar7[1];
  param_2[0xc] = puVar7[2];
  temp_v13[0] = 0.0f;
  if (*(unsigned char *)(temp_v1 + 0x21) != 0xff) {
    FUN_00522a08(*(unsigned int *)(*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x21) * 4),temp_v13
                );
  }
  temp_v7 = (float)((unsigned long long)temp_v8 >> 0x20);
  temp_v6 = temp_v13[0] * temp_v7;
  *(float *)&param_2[9] = temp_v6;
  if (temp_v6 == temp_v9) {
    *(float *)&param_2[9] = (float)puVar7[3] * temp_v7;
  }
  FUN_0019eb14(param_2);
  temp_v6 = *(float *)(param_1 + 0x38) + (float)temp_v8;
  *(float *)(param_1 + 0x38) = temp_v6;
  temp_v7 = *(float *)(temp_v1 + 8);
  if (temp_v7 < temp_v6) {
    *(float *)(param_1 + 0x38) = temp_v9;
  }
  return temp_v6 <= temp_v7;
}

} /* extern "C" */
