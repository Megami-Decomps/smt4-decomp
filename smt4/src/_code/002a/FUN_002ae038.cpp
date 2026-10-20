/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae038` (_code @ 0x2ae038, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b1fc4(int *, int *, int *, int *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(int *, unsigned char *, int, int);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_00141adc; /* 0x141adc */
extern unsigned int DAT_004d4704; /* 0x4d4704 */

/* Supplied declaration required: FUN_002b1fc4. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_002ae038(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v7;
  int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v10;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  int temp_v11;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  __aeabi_vec_ctor_nocookie_nodtor(&temp_v0,&LAB_00141adc,0x10,4);
  temp_v0 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  temp_v1 = DAT_004d4704;
  temp_v2 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  temp_v4 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  temp_v6 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  temp_v3 = temp_v1;
  temp_v5 = temp_v1;
  temp_v7 = temp_v1;
  uStack_48 = temp_v6;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  temp_v8 = temp_v1;
  temp_v9 = temp_v4;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = temp_v1;
  temp_v10 = temp_v2;
  uStack_24 = uStack_74;
  uStack_20 = uStack_70;
  uStack_1c = temp_v1;
  temp_v11 = temp_v0;
  uStack_14 = uStack_84;
  uStack_10 = uStack_80;
  uStack_c = temp_v1;
  FUN_002b1fc4(&temp_v11,&temp_v10,&temp_v9,&uStack_48,0,0);
  return;
}

} /* extern "C" */
