/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022697c` (_code @ 0x22697c, 0x2b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(...);
int FUN_00167ab4(int, int, int, unsigned int, int, int);
int FUN_0019a5a0(...);
int FUN_00418fe0(unsigned int, unsigned int, unsigned int *, unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00418fe0. */


void FUN_0022697c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *pbVar10;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int *puVar13;
  int unaff_r9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int *temp_v12;
  
  temp_v1 = *(unsigned short *)(param_2 + 0x12);
  temp_v8 = (unsigned int)temp_v1;
  temp_v9 = (unsigned int)*(unsigned short *)(param_2 + 0x14);
  if (*(char *)(param_2 + 0x11) == '\0') {
    unaff_r9 = 4;
    *(unsigned int *)(param_1 + 0x28) = temp_v8 * temp_v9 * 4;
    temp_v12 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,*(unsigned int *)(param_1 + 0x28),1);
  }
  temp_v0 = *(unsigned char *)(param_2 + 0x16);
  param_2 = param_2 + 0x40;
  if (temp_v0 != 0x1b) {
    if (temp_v0 < 0x1c) {
      if (temp_v0 == 0x13) goto LAB_00226aa8;
      if (temp_v0 != 0x14) goto LAB_00226bc0;
    }
    else if (temp_v0 != 0x24 && temp_v0 != 0x2c) goto LAB_00226bc0;
    temp_v10 = 0;
    puVar13 = temp_v12;
    if (temp_v9 != 0) {
      do {
        if (temp_v8 != 0) {
          temp_v2 = 0;
          puVar5 = puVar13;
          temp_v7 = temp_v8;
          do {
            temp_v11 = (temp_v2 & 1) != 0;
            temp_v4 = ((temp_v9 - temp_v10) - 1) * temp_v8 + temp_v2;
            temp_v2 = temp_v2 + 1;
            temp_v0 = *(unsigned char *)(param_2 + unaff_r9 * 0x10 + (temp_v4 >> 1));
            if (temp_v11) {
              temp_v0 = temp_v0 >> 4;
            }
            temp_v5 = (unsigned int)temp_v0;
            if (!temp_v11) {
              temp_v5 = temp_v5 & 0xf;
            }
            temp_v6 = *(unsigned int *)(param_2 + temp_v5 * 4);
            temp_v5 = temp_v6 >> 0x18;
            temp_v11 = temp_v5 < 0x7f;
            if (temp_v11) {
              temp_v5 = temp_v5 << 0x19;
            }
            if (!temp_v11) {
              temp_v5 = 0xff;
            }
            else {
              temp_v5 = temp_v5 >> 0x18;
            }
            temp_v7 = (temp_v7 - 1) & 0xffff;
            *puVar5 = (temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) |
                      (((temp_v6 >> 0x10) & 0xff) << 8) | temp_v5;
            puVar5 = puVar5 + 1;
          } while (temp_v7 != 0);
          puVar13 = puVar13 + temp_v8;
        }
        temp_v10 = (temp_v10 + 1) & 0xffff;
      } while (temp_v10 < temp_v9);
    }
  }
  else {
LAB_00226aa8:
    temp_v4 = 0x100;
    FUN_00163060(0x100,0x100,0,0x400,1);
    temp_v10 = 0;
    do {
      temp_v2 = *(unsigned int *)(param_2 +
                       ((temp_v10 & 0xe7) | ((temp_v10 & 0x10) >> 1) | ((temp_v10 & 8) << 1)) * 4);
      temp_v7 = temp_v2 >> 0x18;
      temp_v11 = temp_v7 < 0x7f;
      if (temp_v11) {
        temp_v7 = temp_v7 << 0x19;
      }
      if (!temp_v11) {
        temp_v7 = 0xff;
      }
      else {
        temp_v7 = temp_v7 >> 0x18;
      }
      *(unsigned int *)(temp_v4 + temp_v10 * 4) =
           temp_v7 | (temp_v2 << 0x18) | (((temp_v2 & 0xff00) >> 8) << 0x10) |
                   (((temp_v2 & 0xff0000) >> 0x10) << 8);
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < 0x100);
    temp_v10 = 0;
    if (temp_v9 != 0) {
      puVar13 = temp_v12;
      do {
        if (temp_v8 != 0) {
          pbVar10 = (unsigned char *)(((temp_v9 - temp_v10) - 1) * temp_v8 + ((param_2 + unaff_r9 * 0x100) - 1));
          temp_v7 = (unsigned int)(temp_v1 >> 1);
          puVar5 = puVar13 + -1;
          if ((temp_v1 & 1) != 0) {
            pbVar10 = pbVar10 + 1;
            *puVar13 = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar10 * 4);
            puVar5 = puVar13;
          }
          for (; temp_v7 != 0; temp_v7 = temp_v7 - 1) {
            puVar5[1] = *(unsigned int *)(temp_v4 + (unsigned int)pbVar10[1] * 4);
            pbVar10 = pbVar10 + 2;
            puVar5[2] = *(unsigned int *)(temp_v4 + (unsigned int)*pbVar10 * 4);
            puVar5 = puVar5 + 2;
          }
          puVar13 = puVar13 + temp_v8;
        }
        temp_v10 = (temp_v10 + 1) & 0xffff;
      } while (temp_v10 < temp_v9);
    }
    FUN_0019a5a0(temp_v4);
  }
LAB_00226bc0:
  *(unsigned int *)(param_1 + 8) = param_4;
  *(unsigned int *)(param_1 + 4) = 0xde1;
  *(unsigned int *)(param_1 + 0x1c) = 0x6752;
  *(unsigned int *)(param_1 + 0x20) = 0x1401;
  *(unsigned int *)(param_1 + 0x14) = temp_v8;
  *(unsigned int *)(param_1 + 0x18) = temp_v9;
  temp_v3 = 0x10000;
  FUN_00167ab4(0x10000,0x100,0,*(unsigned int *)(param_1 + 0x28),0x80,1);
  *(unsigned int *)(param_1 + 0x24) = temp_v3;
  FUN_00418fe0(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),temp_v12,temp_v3);
  FUN_0019a5a0(temp_v12);
  return;
}

} /* extern "C" */
