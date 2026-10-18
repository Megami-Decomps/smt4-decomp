/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f36a4` (_code @ 0x3f36a4, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003f36a4_arg2 fn_003f36a4_arg2;
struct fn_003f36a4_arg2 {
    unsigned char pad_0x0[0x52];
    ushort field_0x52; /* +0x52 */
    unsigned char pad_0x54[0x2];
    ushort field_0x56; /* +0x56 */
    unsigned char pad_0x58[0x2];
    ushort field_0x5a; /* +0x5a */
    unsigned char pad_0x5c[0x2];
    ushort field_0x5e; /* +0x5e */
    unsigned char pad_0x60[0x2];
    ushort field_0x62; /* +0x62 */
    unsigned char pad_0x64[0x2];
    ushort field_0x66; /* +0x66 */
    unsigned char pad_0x68[0x2];
    ushort field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0x2];
    ushort field_0x6e; /* +0x6e */
};

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0014bef4. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_003c3f1c. */
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_003f39ac. */


short FUN_003f36a4(unsigned int *param_1,int param_2,fn_003f36a4_arg2 *param_3)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  unsigned char temp_v6;
  short *psVar9;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  
  if (param_2 < 0) {
    return 0;
  }
  temp_v1 = (unsigned int)*(unsigned short *)((int)param_1 + param_2 * 2);
  FUN_003c3f1c();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  temp_v2 = temp_v0 & 0x1f;
  temp_v1 = temp_v2;
  FUN_003f39ac();
  temp_v7 = 0;
  temp_v6 = 0;
  temp_v3 = FUN_0014bef4(99);
  do {
    temp_v6 = *(unsigned char *)(temp_v1 + 1 + temp_v7) + temp_v6;
    if (temp_v3 < temp_v6) break;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 5);
  if (temp_v7 != 0) {
    if (temp_v7 != 1) {
      if (temp_v7 == 3) {
        temp_v2 = (temp_v2 + 1) & 0xff;
      }
      else if (temp_v7 == 4) {
        temp_v2 = (temp_v2 + 2) & 0xff;
      }
    }
    else if ((temp_v0 & 0x1f) != 0) {
      temp_v2 = (temp_v2 - 1) & 0xff;
    }
  }
  else if (temp_v2 >= 2) {
    temp_v2 = (temp_v2 - 2) & 0xff;
  }
  temp_v4 = FUN_003e46f4(5);
  if (temp_v4 != 0) {
    temp_v2 = (temp_v2 + 1) & 0xff;
  }
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v8 = *param_1;
  temp_v9 = param_1[1];
  temp_v10 = param_1[2];
  temp_v11 = param_1[3];
  FUN_00184310();
  temp_v4 = 0;
  psVar9 = (short *)0x1;
  temp_v12 = romwright_piece_2_2(param_3->field_0x56,param_3->field_0x52);
  temp_v13 = romwright_piece_2_2(param_3->field_0x5e,param_3->field_0x5a);
  temp_v14 = romwright_piece_2_2(param_3->field_0x66,param_3->field_0x62);
  temp_v15 = romwright_piece_2_2(param_3->field_0x6e,param_3->field_0x6a);
  do {
    psVar6 = psVar9;
    FUN_003c3f1c();
    if (((psVar6 != (short *)0x0) && ((*(unsigned char *)((int)psVar6 + 3) & 0x80) != 0)) &&
       ((*(unsigned char *)((int)psVar6 + 3) & 0x1f) == temp_v2)) {
      temp_v5 = 0;
      do {
        if (*(short *)((int)&temp_v8 + temp_v5 * 2) == *psVar6) goto LAB_003f384c;
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x10);
      temp_v4 = temp_v4 + 1;
    }
LAB_003f384c:
    psVar9 = (short *)(((int)psVar9 + 1U) & 0xffff);
  } while (psVar9 < (short *)0x1f5);
  if (temp_v4 != 0) {
    temp_v4 = FUN_0014bef4((temp_v4 - 1U) & 0xffff);
    psVar9 = (short *)0x1;
    do {
      psVar6 = psVar9;
      FUN_003c3f1c();
      if (((psVar6 != (short *)0x0) && ((*(unsigned char *)((int)psVar6 + 3) & 0x80) != 0)) &&
         ((*(unsigned char *)((int)psVar6 + 3) & 0x1f) == temp_v2)) {
        temp_v5 = 0;
        do {
          if (*(short *)((int)&temp_v8 + temp_v5 * 2) == *psVar6) goto LAB_003f38d0;
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x10);
        temp_v4 = temp_v4 - 1;
        if (temp_v4 == 0) {
          return *psVar6;
        }
      }
LAB_003f38d0:
      psVar9 = (short *)(((int)psVar9 + 1U) & 0xffff);
    } while (psVar9 < (short *)0x1f5);
  }
  return 0;
}
