/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5a04` (_code @ 0x2f5a04, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002f5a04_arg1 fn_002f5a04_arg1;
struct fn_002f5a04_arg1 {
    unsigned char pad_0x0[0x25];
    unsigned char field_0x25; /* +0x25 */
    unsigned char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x3d];
    byte field_0x64; /* +0x64 */
    unsigned char field_0x65; /* +0x65 */
    unsigned char pad_0x66[0x72];
    unsigned char field_0xd8; /* +0xd8 */
    unsigned char pad_0xd9[0x9];
    ushort field_0xe2; /* +0xe2 */
    uint field_0xe4; /* +0xe4 */
};

/* stack frame of param_7: 11 slot(s), 32 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_7_stack;

extern unsigned char DAT_00558500; /* 0x558500 */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0011c848. */
/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7516. */
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: FUN_002eb164. */
/* Supplied declaration required: FUN_002ec9f4. */
extern unsigned int FUN_002ecaee(int);
/* Supplied declaration required: FUN_002f5b58. */
/* Supplied declaration required: FUN_002f5bcc. */


void FUN_002f5a04(unsigned int param_1,fn_002f5a04_arg1 *param_2,int param_3,int param_4,
                 unsigned int param_5,int param_6,int param_7)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  fn_002f5a04_arg1 *pfVar6;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  unsigned short temp_v6;
  unsigned short temp_v7 [2];
  unsigned char temp_v8 [4];
  unsigned char temp_v9 [4];
  unsigned char *temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned short temp_v15 [6];
  
  *(unsigned int *)(param_7 + 0x10) = 4;
  pfVar6 = (fn_002f5a04_arg1 *)0x0;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (param_3 == 3) {
        FUN_002eb164(temp_v5,param_2);
        temp_v7[0] = temp_v6;
        temp_v8[0] = param_2->field_0x64;
        FUN_002e7614(temp_v9,(*(int *)(param_4 + 0x10) - *(int *)(param_4 + 0xc)) + 3);
        temp_v3 = *(int *)(param_4 + 0x10);
        temp_v1 = *(int *)(param_4 + 0xc);
        temp_v2 = FUN_002ecaee(param_4);
        FUN_002e74c4(temp_v9,temp_v2,temp_v3 - temp_v1,0xffffffff);
        FUN_002e74c4(temp_v9,temp_v7,2,0xffffffff);
        FUN_002e74c4(temp_v9,temp_v8,1,0xffffffff);
        FUN_002f5b58(param_2,param_5,temp_v12 + temp_v14,temp_v13,0);
        FUN_002ec9f4(temp_v9);
        pfVar6 = param_2;
        FUN_002e7516(pfVar6,param_7);
        return;
      }
      if (param_3 != 7) {
        FUN_002e7516(pfVar6,param_7);
        return;
      }
      FUN_002eb164(temp_v5,param_2);
      temp_v15[0] = temp_v6;
      temp_v8[0] = param_2->field_0x65;
      temp_v9[0] = param_2->field_0x25;
      temp_v7[0] = romwright_piece_1_1(temp_v7[0]._1_1_,param_2->field_0x26);
      temp_v0 = temp_v14 >> 0x10;
      temp_v14 = temp_v14 & 0xffff0000;
      if (*(int *)&param_2->field_0xd8 != 0) {
        temp_v14 = romwright_piece_2_2((short)temp_v0,(short)*(unsigned int *)(*(int *)&param_2->field_0xd8 + 0x10)
                           );
      }
      temp_v11 = 0;
      temp_v10 = &DAT_00558500;
      FUN_002f5bcc(&temp_v10,temp_v15,2,0xffffffff,param_2->field_0x26);
      FUN_002f5bcc(&temp_v10,temp_v8,1,0xffffffff);
      FUN_002f5bcc(&temp_v10,temp_v9,1,0xffffffff);
      FUN_002f5bcc(&temp_v10,temp_v7,1,0xffffffff);
      FUN_002f5bcc(&temp_v10,&temp_v14,2,0xffffffff);
      piVar5 = &temp_v12;
      temp_v4 = 1;
      temp_v2 = temp_v11;
    }
    else {
      temp_v2 = 0;
      piVar5 = (int *)0x0;
      temp_v4 = 0;
    }
    FUN_002f5b58(param_2,param_5,piVar5,temp_v2,temp_v4);
    pfVar6 = param_2;
  }
  else if (param_6 != 0) {
    temp_v0 = param_2->field_0xe4;
    FUN_0011c848(param_6,(temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) |
                         (((temp_v0 >> 0x10) & 0xff) << 8) | (temp_v0 >> 0x18),
                 (param_2->field_0xe2 << 8) | (param_2->field_0xe2 >> 8));
    pfVar6 = (fn_002f5a04_arg1 *)param_6;
  }
  FUN_002e7516(pfVar6,param_7);
  return;
}
