/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138d0c` (_code @ 0x138d0c, 0x1f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp118; /* 0x118: local_118 */
} param_4_stack;

extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

extern int FUN_00145310(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0014ce2c. */
/* Supplied declaration required: FUN_0014dcd8. */
/* Supplied declaration required: FUN_002a8728. */
/* Supplied declaration required: FUN_002a87b4. */
/* Supplied declaration required: FUN_002bfedc. */
extern int FUN_002bfefc(unsigned int *);


unsigned char FUN_00138d0c(float *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  float temp_v8;
  float temp_v9;
  float fStack_114;
  float fStack_110;
  float temp_v10;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float temp_v11;
  int temp_v12;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  float fStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  float fStack_cc;
  unsigned int temp_v13;
  unsigned int uStack_c4;
  unsigned int temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  float fStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  float fStack_8c;
  unsigned int temp_v21;
  unsigned int uStack_84;
  unsigned int uStack_80;
  float fStack_7c;
  int temp_v22;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v23;
  unsigned char temp_v24 [60];
  
  temp_v6 = 0x3f800000;
  if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
    DAT_004efd70 = 0;
    DAT_004efd74 = 0;
    DAT_004efd78 = 0;
    DAT_004efd7c = 0;
    DAT_004efd84 = 0;
    DAT_004efd88 = 0;
    DAT_004efd8c = 0;
    DAT_004efd90 = 0;
    DAT_004efd98 = 0;
    DAT_004efd6c = temp_v6;
    DAT_004efd80 = temp_v6;
    DAT_004efd94 = temp_v6;
  }
  FUN_002bfedc(&temp_v12,&DAT_004efd6c);
  temp_v19 = 0x801;
  temp_v3 = 0;
  temp_v16 = temp_v6;
  temp_v17 = temp_v6;
  temp_v18 = temp_v6;
  temp_v0 = FUN_00145310(param_2,param_3,param_4);
  temp_v1 = *(int *)(temp_v0 + 0x1c);
  if (temp_v1 != 0) {
    temp_v3 = temp_v1 + temp_v0 + 0x1c;
  }
  if (temp_v3 != 0) {
    temp_v9 = *(float *)(temp_v3 + 4);
    fStack_114 = *(float *)(temp_v3 + 8);
    fStack_110 = *(float *)(temp_v3 + 0xc);
    temp_v22 = *(unsigned int *)(temp_v3 + 0x10);
    uStack_74 = *(unsigned int *)(temp_v3 + 0x14);
    uStack_70 = *(unsigned int *)(temp_v3 + 0x18);
    uStack_6c = *(unsigned int *)(temp_v3 + 0x1c);
    uStack_68 = *(unsigned int *)(temp_v3 + 0x20);
    uStack_64 = *(unsigned int *)(temp_v3 + 0x24);
    uStack_60 = *(unsigned int *)(temp_v3 + 0x28);
    uStack_5c = *(unsigned int *)(temp_v3 + 0x2c);
    temp_v23 = *(unsigned int *)(temp_v3 + 0x30);
    temp_v7 = *(unsigned long long *)(temp_v3 + 0x34);
    temp_v8 = *(float *)(temp_v3 + 0x3c);
    temp_v0 = *(int *)(*(int *)(param_2 + 8) + 0x2c);
    temp_v12 = *(unsigned int *)(temp_v0 + 0xbc);
    uStack_e4 = *(unsigned int *)(temp_v0 + 0xc0);
    uStack_e0 = *(unsigned int *)(temp_v0 + 0xc4);
    temp_v4 = *(float *)(temp_v0 + 200);
    uStack_d8 = *(unsigned int *)(temp_v0 + 0xcc);
    uStack_d4 = *(unsigned int *)(temp_v0 + 0xd0);
    uStack_d0 = *(unsigned int *)(temp_v0 + 0xd4);
    temp_v5 = *(float *)(temp_v0 + 0xd8);
    temp_v14 = *(unsigned int *)(temp_v0 + 0xe4);
    temp_v2 = *(float *)(temp_v0 + 0xe8);
    temp_v16 = *(unsigned int *)(temp_v0 + 0xec);
    temp_v17 = *(unsigned int *)(temp_v0 + 0xf0);
    temp_v18 = *(unsigned int *)(temp_v0 + 0xf4);
    temp_v13 = *(unsigned int *)(temp_v0 + 0xdc);
    uStack_c4 = *(unsigned int *)(temp_v0 + 0xe0);
    temp_v19 = *(unsigned int *)(temp_v0 + 0xf8);
    fStack_dc = temp_v4;
    fStack_cc = temp_v5;
    temp_v15 = temp_v2;
    temp_v20 = temp_v12;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    fStack_9c = temp_v4;
    uStack_98 = uStack_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    fStack_8c = temp_v5;
    temp_v21 = temp_v13;
    uStack_84 = uStack_c4;
    uStack_80 = temp_v14;
    fStack_7c = temp_v2;
    FUN_002a8728(temp_v24,&temp_v20);
    FUN_002a87b4(&temp_v9,temp_v24);
    temp_v4 = temp_v4 + temp_v9;
    temp_v5 = temp_v5 + fStack_114;
    temp_v2 = temp_v2 + fStack_110;
    FUN_0014dcd8(&temp_v10,temp_v24,&temp_v22);
    *param_1 = temp_v4;
    param_1[1] = temp_v5;
    param_1[2] = temp_v2;
    param_1[3] = temp_v10;
    param_1[4] = fStack_108;
    param_1[5] = fStack_104;
    param_1[6] = fStack_100;
    param_1[7] = fStack_fc;
    param_1[8] = fStack_f8;
    param_1[9] = fStack_f4;
    param_1[10] = fStack_f0;
    param_1[0xb] = temp_v11;
    param_1[0xe] = temp_v8 * 0.5f;
    param_1[0xc] = (float)temp_v7 * 0.5f;
    param_1[0xd] = (float)((unsigned long long)temp_v7 >> 0x20) * 0.5f;
    FUN_0014ce2c(param_1);
  }
  return temp_v3 != 0;
}
