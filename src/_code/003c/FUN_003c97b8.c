/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c97b8` (_code @ 0x3c97b8, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c97b8_arg0 fn_003c97b8_arg0;
struct fn_003c97b8_arg0 {
    unsigned char pad_0x0[0x118];
    char field_0x118; /* +0x118 */
    unsigned char pad_0x119[0x1];
    ushort field_0x11a; /* +0x11a */
    byte field_0x11c; /* +0x11c */
    unsigned char pad_0x11d[0x1];
    ushort field_0x11e; /* +0x11e */
    unsigned char pad_0x120[0x22];
    byte field_0x142; /* +0x142 */
};

/* stack frame of param_2: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int FUN_0022a018(void);
extern int FUN_0029ed08(unsigned int);
/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0e4c(unsigned int);
extern unsigned char *FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_003c97b8(fn_003c97b8_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  fn_003c97b8_arg0 *pfVar3;
  unsigned int temp_v2;
  unsigned char *pbVar5;
  int temp_v3;
  unsigned short temp_v4;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int temp_v5;
  int temp_v6;
  char temp_v7 [60];
  
  temp_v1 = param_1->field_0x118;
  temp_v6 = 0;
  pfVar3 = param_1;
  if (temp_v1 == '\0') {
    pfVar3 = (fn_003c97b8_arg0 *)(unsigned int)param_1->field_0x11c;
  }
  if (!(temp_v1 == '\0' && pfVar3 == (fn_003c97b8_arg0 *)0x0)) {
    temp_v7[0] = '\0';
    temp_v7[1] = '\0';
    temp_v7[2] = '\0';
    temp_v7[3] = '\0';
    temp_v7[4] = '\0';
    temp_v7[5] = '\0';
    temp_v7[6] = '\0';
    temp_v7[7] = '\0';
    temp_v7[8] = '\0';
    temp_v7[9] = '\0';
    temp_v7[10] = '\0';
    temp_v7[0xb] = '\0';
    temp_v7[0xc] = '\0';
    temp_v7[0xd] = '\0';
    temp_v7[0xe] = '\0';
    temp_v7[0xf] = '\0';
    temp_v7[0x10] = '\0';
    temp_v7[0x11] = '\0';
    temp_v7[0x12] = '\0';
    temp_v7[0x13] = '\0';
    temp_v7[0x14] = '\0';
    temp_v7[0x15] = '\0';
    temp_v7[0x16] = '\0';
    temp_v7[0x17] = '\0';
    temp_v7[0x18] = '\0';
    temp_v7[0x19] = '\0';
    temp_v7[0x1a] = '\0';
    temp_v7[0x1b] = '\0';
    temp_v7[0x1c] = '\0';
    temp_v7[0x1d] = '\0';
    temp_v7[0x1e] = '\0';
    temp_v7[0x1f] = '\0';
    temp_v7[0x20] = '\0';
    temp_v7[0x21] = '\0';
    temp_v7[0x22] = '\0';
    temp_v7[0x23] = '\0';
    temp_v7[0x24] = '\0';
    temp_v7[0x25] = '\0';
    temp_v7[0x26] = '\0';
    temp_v7[0x27] = '\0';
    temp_v7[0x28] = '\0';
    temp_v7[0x29] = '\0';
    temp_v7[0x2a] = '\0';
    temp_v7[0x2b] = '\0';
    temp_v7[0x2c] = '\0';
    temp_v7[0x2d] = '\0';
    temp_v7[0x2e] = '\0';
    temp_v7[0x2f] = '\0';
    temp_v7[0x30] = '\0';
    temp_v7[0x31] = '\0';
    temp_v7[0x32] = '\0';
    temp_v7[0x33] = '\0';
    temp_v7[0x34] = '\0';
    temp_v7[0x35] = '\0';
    temp_v7[0x36] = '\0';
    temp_v7[0x37] = '\0';
    if (temp_v1 == '\0') {
      temp_v5 = (unsigned int)param_1->field_0x11e;
    }
    else {
      temp_v5 = (unsigned int)param_1->field_0x11a;
      FUN_002b9364();
      temp_v5 = (unsigned int)*(unsigned char *)(temp_v5 + 2);
    }
    temp_v2 = FUN_002c0ec4(5,1);
    pbVar5 = (unsigned char *)FUN_002c0e9c();
    temp_v3 = FUN_002c0e4c(temp_v2);
    if (temp_v3 != 0) {
      pbVar8 = pbVar5 + 2;
      pbVar9 = pbVar5 + 1;
      do {
        if (*pbVar8 == temp_v5) {
          temp_v7[*pbVar5] = '\x01';
          temp_v7[*pbVar9] = '\x01';
        }
        temp_v3 = temp_v3 - 1;
        pbVar8 = pbVar8 + 4;
        pbVar5 = pbVar5 + 4;
        pbVar9 = pbVar9 + 4;
      } while (temp_v3 != 0);
    }
    if (param_1->field_0x142 != 0) {
      temp_v7[0x26] = 1;
      temp_v7[temp_v5] = '\x01';
    }
    temp_v3 = FUN_0022a018();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    temp_v3 = FUN_0022a018();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    if (temp_v5 <= temp_v0) {
      do {
        temp_v3 = FUN_0029ed08(temp_v5 & 0xffff);
        if (temp_v3 != 0) {
          temp_v4 = temp_v5;
          FUN_002b9364();
          if (temp_v7[*(unsigned char *)(temp_v4 + 2)] != '\0') {
            temp_v3 = temp_v6 * 2;
            temp_v6 = temp_v6 + 1;
            *(short *)(param_2 + temp_v3) = (short)temp_v5;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 <= (int)(unsigned int)temp_v0);
    }
  }
  else {
    temp_v3 = FUN_0022a018();
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 8);
    temp_v3 = FUN_0022a018();
    temp_v0 = *(unsigned short *)(temp_v3 + 10);
    if (temp_v5 <= temp_v0) {
      do {
        temp_v3 = FUN_0029ed08(temp_v5 & 0xffff);
        if (temp_v3 != 0) {
          temp_v3 = temp_v6 * 2;
          temp_v6 = temp_v6 + 1;
          *(short *)(param_2 + temp_v3) = (short)temp_v5;
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 <= (int)(unsigned int)temp_v0);
    }
  }
  return temp_v6;
}
