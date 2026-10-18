/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010195c` (_code @ 0x10195c, 0x1fe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001c5888. */
/* Supplied declaration required: FUN_001c58b8. */
extern unsigned int *FUN_002e3cf8(void);
extern unsigned int FUN_002e418c(unsigned int);
/* Supplied declaration required: FUN_002e4194. */
extern long long FUN_002e49c4(int, int, unsigned int, unsigned int);


void FUN_0010195c(int *param_1,unsigned char *param_2,unsigned char *param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned long long temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int *piVar5;
  unsigned char *pbVar6;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  int temp_v7;
  long long temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int temp_v15;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  int *piStack_24;
  unsigned char *pbStack_20;
  unsigned char *temp_v16;
  int temp_v17;
  
  piVar5 = &temp_v9;
  piVar9 = &temp_v9;
  if (*param_2 != 0xff) {
    temp_v9 = 0;
    pbVar6 = param_2;
    while( 1 ) {
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0xff) break;
      temp_v9 = (unsigned int)*pbVar6 + temp_v9 * 10;
    }
    if (*param_2 == 0x2d) {
      temp_v9 = -temp_v9;
    }
  }
  else {
    temp_v9 = 0;
  }
  temp_v12 = 0;
  temp_v0 = *param_3;
  piStack_24 = param_1;
  pbStack_20 = param_2;
  temp_v17 = param_4;
  if ((temp_v0 == 0x2d) || (temp_v16 = param_3, temp_v1 = 0, temp_v0 == 0x2b)) {
    temp_v16 = param_3 + 1;
    temp_v12 = (unsigned int)(temp_v0 == 0x2d);
    temp_v1 = 0;
  }
  while( 1 ) {
    temp_v6 = (int)(temp_v1 >> 0x20);
    temp_v0 = *temp_v16;
    if (temp_v0 == 0xff) break;
    temp_v16 = temp_v16 + 1;
    temp_v10 = 0;
    temp_v8 = FUN_002e49c4((int)temp_v1,temp_v6,10,0);
    temp_v1 = temp_v8 + romwright_piece_4_4(temp_v10,(unsigned int)temp_v0);
  }
  temp_v2 = FUN_002e418c(0);
  if (temp_v12 != 0) {
    temp_v2 = temp_v2 * 5 >> 1;
  }
  temp_v13 = (temp_v2 & 0xffffff) >> 0x16;
  if (temp_v13 >= 2) {
    temp_v13 = 0xffffffff;
  }
  temp_v7 = temp_v9 + temp_v17;
  if ((int)temp_v1 == 0 && temp_v6 == 0) {
    param_1[1] = temp_v12 << 0x1f;
    *param_1 = 0;
  }
  else {
    if (temp_v7 < -500) {
      param_1[1] = temp_v12 << 0x1f;
      *param_1 = 0;
    }
    else {
      if (temp_v7 < 0x1f5) {
        temp_v3 = temp_v7;
        temp_v2 = temp_v13;
        if (temp_v7 < 0) {
          temp_v3 = -temp_v7;
          temp_v2 = -temp_v13;
        }
        FUN_002e4194(&temp_v15,temp_v3,temp_v2);
        temp_v14 = temp_v15;
        uStack_38 = uStack_2c;
        uStack_34 = uStack_28;
        temp_v9 = 0x403e;
        if (temp_v6 == 0) {
          temp_v1 = temp_v1 << 0x20;
          temp_v9 = 0x401e;
        }
        if ((temp_v1 & 0xffff000000000000) == 0) {
          temp_v1 = temp_v1 << 0x10;
          temp_v9 = temp_v9 - 0x10;
        }
        if ((temp_v1 & 0xff00000000000000) == 0) {
          temp_v1 = temp_v1 << 8;
          temp_v9 = temp_v9 - 8;
        }
        if ((temp_v1 & 0xf000000000000000) == 0) {
          temp_v1 = temp_v1 << 4;
          temp_v9 = temp_v9 - 4;
        }
        if ((temp_v1 & 0xc000000000000000) == 0) {
          temp_v1 = temp_v1 << 2;
          temp_v9 = temp_v9 - 2;
        }
        temp_v2 = (unsigned int)temp_v1;
        if ((temp_v1 & 0x8000000000000000) == 0) {
          temp_v1 = romwright_piece_4_4((int)(temp_v1 >> 0x20) * 2 + (unsigned int)romwright_carry_4(temp_v2,temp_v2),temp_v2 * 2);
          temp_v9 = temp_v9 - 1;
        }
        temp_v10 = (unsigned int)(temp_v1 >> 0x20);
        temp_v11 = (unsigned int)temp_v1;
        if (temp_v7 >= 1) {
          FUN_001c58b8();
          piVar9 = piVar5;
          temp_v6 = temp_v4;
        }
        else {
          FUN_001c5888(&temp_v9,&temp_v14,temp_v13,&temp_v15);
          temp_v6 = temp_v5;
        }
        if (temp_v12 != 0) {
          piVar9 = (int *)((unsigned int)piVar9 ^ 0x80000000);
        }
        if ((((unsigned int)piVar9 & 0x7fffffff) == 0 && temp_v6 == 0) ||
           (((unsigned int)piVar9 & 0x7fffffff) >> 0x14 == 0x7ff)) {
          puVar4 = (unsigned int *)FUN_002e3cf8();
          *puVar4 = 2;
          if (((unsigned int)piVar9 & 0x7fffffff) >> 0x14 == 0x7ff) {
            *param_1 = 0;
            param_1[1] = ((unsigned int)piVar9 & 0x80000000) | 0x7ff00000;
            return;
          }
        }
        *param_1 = temp_v6;
        param_1[1] = (int)piVar9;
        return;
      }
      *param_1 = 0;
      param_1[1] = 0x7ff00000;
      param_1[1] = (temp_v12 << 0x1f) | 0x7ff00000;
    }
    puVar4 = (unsigned int *)FUN_002e3cf8();
    *puVar4 = 2;
  }
  return;
}
