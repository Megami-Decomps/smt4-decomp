/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144c9c` (_code @ 0x144c9c, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_3_stack;

extern unsigned int DAT_0063fe0c; /* 0x63fe0c */
extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned int DAT_0063fe18; /* 0x63fe18 */
extern unsigned int DAT_0063fe1c; /* 0x63fe1c */
extern unsigned int DAT_0063fe30; /* 0x63fe30 */
extern unsigned int DAT_0063fe34; /* 0x63fe34 */
extern unsigned char DAT_0063fe4c; /* 0x63fe4c */
extern unsigned int DAT_0063fe54; /* 0x63fe54 */
extern unsigned int DAT_0063fe58; /* 0x63fe58 */
extern unsigned int DAT_0063fe6c; /* 0x63fe6c */
extern unsigned int DAT_0063fe70; /* 0x63fe70 */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern unsigned int DAT_0063fe90; /* 0x63fe90 */
extern unsigned int DAT_0063fe94; /* 0x63fe94 */
extern unsigned int DAT_0063fea8; /* 0x63fea8 */
extern unsigned int DAT_0063feac; /* 0x63feac */
extern int DAT_0063ff7c; /* 0x63ff7c */
extern unsigned int DAT_0063ff80; /* 0x63ff80 */

/* Supplied declaration required: FUN_00153084. */
/* Supplied declaration required: FUN_001550b8. */


void FUN_00144c9c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int temp_v3;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  int temp_v4;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int temp_v5;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int temp_v6;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int temp_v7;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int temp_v8;
  int temp_v9;
  int iStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  int temp_v10;
  unsigned int uStack_48;
  int temp_v11;
  int temp_v12;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int temp_v13;
  unsigned char *temp_v14;
  
  temp_v1 = param_2;
  if (param_3 == 0) {
    temp_v0 = 0x500;
  }
  else {
    temp_v0 = param_2;
    if (param_3 == 1) {
      temp_v1 = 0x500;
    }
  }
  if (param_1 != 0) {
    FUN_001550b8(&temp_v4,1,param_2);
    temp_v2 = temp_v4;
    uStack_ec = uStack_bc;
    uStack_e8 = uStack_b8;
    uStack_e4 = uStack_b4;
    uStack_e0 = uStack_b0;
    uStack_dc = uStack_ac;
    uStack_d8 = uStack_a8;
    uStack_d4 = uStack_a4;
    temp_v3 = temp_v5;
    uStack_cc = uStack_9c;
    uStack_c8 = uStack_98;
    uStack_c4 = uStack_94;
    FUN_00153084(&DAT_0063fe10,&temp_v2,1);
    DAT_0063fe0c = 1;
  }
  else {
    FUN_001550b8(&temp_v6,0,temp_v1);
    temp_v2 = temp_v6;
    uStack_ec = uStack_8c;
    uStack_e8 = uStack_88;
    uStack_e4 = uStack_84;
    uStack_e0 = uStack_80;
    uStack_dc = uStack_7c;
    uStack_d8 = uStack_78;
    uStack_d4 = uStack_74;
    temp_v3 = temp_v7;
    uStack_cc = uStack_6c;
    uStack_c8 = uStack_68;
    uStack_c4 = uStack_64;
    temp_v9 = 1;
    iStack_58 = 1;
    if (temp_v0 == 0x501) {
      temp_v9 = 2;
    }
    else if (temp_v0 == 0x502) {
      temp_v9 = 2;
      iStack_58 = temp_v9;
    }
    temp_v11 = 1;
    temp_v8 = DAT_0063ff80;
    temp_v9 = temp_v9 * 0xf0;
    iStack_58 = iStack_58 * 0x140;
    temp_v12 = 1;
    if (temp_v0 == 0x501) {
      temp_v11 = 2;
    }
    else if (temp_v0 == 0x502) {
      temp_v11 = 2;
      temp_v12 = temp_v11;
    }
    temp_v11 = temp_v11 * 0xf0;
    uStack_48 = 0x88f0;
    uStack_54 = 0x20000;
    uStack_50 = 0x8ce0;
    temp_v12 = temp_v12 * 0x140;
    uStack_3c = 0x30000;
    uStack_38 = 0x821a;
    temp_v10 = temp_v0;
    temp_v13 = temp_v0;
    temp_v14 = (unsigned char *)&temp_v2;
    FUN_001550b8(&temp_v6,0,temp_v1);
    temp_v4 = temp_v6;
    uStack_bc = uStack_8c;
    uStack_b8 = uStack_88;
    uStack_b4 = uStack_84;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    uStack_a8 = uStack_78;
    uStack_a4 = uStack_74;
    temp_v5 = temp_v7;
    uStack_9c = uStack_6c;
    uStack_98 = uStack_68;
    uStack_94 = uStack_64;
    if (DAT_0063ff7c != 0) {
      FUN_00153084(&DAT_0063fe10,temp_v14,1);
      FUN_00153084(&DAT_0063fe88,&temp_v8,1);
      FUN_00153084(&DAT_0063fe4c,&temp_v4,1);
    }
    else {
      FUN_00153084(&DAT_0063fe10,temp_v14,1);
      FUN_00153084(&DAT_0063fe88,&temp_v8,0);
      FUN_00153084(&DAT_0063fe4c,&temp_v4,0);
      DAT_0063fe90 = DAT_0063fe18;
      DAT_0063fe94 = DAT_0063fe1c;
      DAT_0063fe54 = DAT_0063fe18;
      DAT_0063fe58 = DAT_0063fe1c;
      DAT_0063fea8 = DAT_0063fe30;
      DAT_0063feac = DAT_0063fe34;
      DAT_0063fe6c = DAT_0063fe30;
      DAT_0063fe70 = DAT_0063fe34;
    }
    DAT_0063fe0c = 0;
  }
  return;
}
