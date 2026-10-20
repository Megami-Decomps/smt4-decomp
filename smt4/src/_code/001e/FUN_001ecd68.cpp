/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ecd68` (_code @ 0x1ecd68, 0x3cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b1fc4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf538(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);

typedef int romwright_code(...);
/* stack frame of void: 34 slot(s), 136 byte(s) */
typedef struct {
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
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
} void_stack;

extern int DAT_0043dc24; /* 0x43dc24 */
extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002b1fc4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


int FUN_001ecd68(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  
  temp_v4 = DAT_0043dc24;
  temp_v0 = 0;
  if (DAT_0043dc24 != 0) {
    temp_v0 = *(int *)(DAT_0043dc24 + 8);
  }
  if (DAT_0043dc24 != 0 && temp_v0 != 0) {
    FUN_002c39a4(g_titleScene);
    temp_v0 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v0 + 0x124c);
    temp_v2 = *piVar6;
    temp_v3 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 + 1;
    piVar6[temp_v2 + 3] = temp_v1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    if (*(int *)(temp_v4 + 0xc) != 1) {
      temp_v6 = 0x3f800000;
      temp_v7 = 0x3f800000;
      temp_v8 = 0x3f800000;
      temp_v9 = 0x3f800000;
      temp_v10 = 0x3f800000;
      temp_v19 = 0x3f800000;
      temp_v20 = 0x3f800000;
      temp_v21 = 0x3f800000;
      temp_v22 = 0x3f800000;
      temp_v15 = 0x3f800000;
      temp_v16 = 0x3f800000;
      temp_v17 = 0x3f800000;
      temp_v18 = 0x3f800000;
      temp_v11 = 0x3f800000;
      temp_v12 = 0x3f800000;
      temp_v13 = 0x3f800000;
      temp_v14 = 0x3f800000;
      FUN_002b1fc4(&temp_v11,&temp_v15,&temp_v19,&temp_v7,0,1);
      FUN_002bf288(2,0x11,0,0,0,1);
      temp_v0 = g_titleScene;
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar6 = (int *)(temp_v0 + 0x12ac);
      temp_v2 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v1;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      temp_v0 = 0;
      do {
        FUN_002bf538();
        temp_v23 = (unsigned int)temp_v6;
        temp_v24 = temp_v23;
        temp_v25 = temp_v23;
        temp_v26 = temp_v23;
        temp_v27 = temp_v23;
        temp_v28 = temp_v23;
        temp_v29 = temp_v23;
        temp_v30 = temp_v23;
        temp_v31 = temp_v23;
        temp_v32 = temp_v23;
        temp_v33 = temp_v23;
        temp_v34 = temp_v23;
        temp_v35 = temp_v23;
        temp_v36 = temp_v23;
        temp_v37 = temp_v23;
        temp_v38 = temp_v23;
        FUN_002b1fc4(&temp_v35,&temp_v23,&temp_v27,&temp_v31,0,1);
        FUN_002bf288(2,0x11,3,0,(int)*(float *)(temp_v4 + temp_v0 * 0x14 + 0x7c),1);
        temp_v5 = (unsigned int)temp_v6;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 5);
      FUN_002bf538();
      temp_v7 = temp_v5;
      temp_v8 = temp_v5;
      temp_v9 = temp_v5;
      temp_v10 = temp_v5;
      temp_v11 = temp_v5;
      temp_v12 = temp_v5;
      temp_v13 = temp_v5;
      temp_v14 = temp_v5;
      temp_v15 = temp_v5;
      temp_v16 = temp_v5;
      temp_v17 = temp_v5;
      temp_v18 = temp_v5;
      temp_v19 = temp_v5;
      temp_v20 = temp_v5;
      temp_v21 = temp_v5;
      temp_v22 = temp_v5;
      FUN_002b1fc4(&temp_v7,&temp_v19,&temp_v15,&temp_v11,0,1);
      temp_v0 = g_titleScene;
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar6 = (int *)(temp_v0 + 0x12ac);
      temp_v2 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v1;
      if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v0 + 0x12c8))();
        *(unsigned char *)(temp_v0 + 0x12c4) = 0;
      }
      temp_v0 = 0;
      do {
        temp_v1 = temp_v4 + temp_v0 * 0x14;
        FUN_002bf288(2,0x11,1,(int)*(float *)(temp_v1 + 0x18),(int)*(float *)(temp_v1 + 0x1c),2);
        temp_v1 = g_titleScene;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 5);
      temp_v0 = packNibblesAndByte(6,7,0);
      piVar6 = (int *)(temp_v1 + 0x12ac);
      temp_v4 = piVar6[*piVar6 + 2];
      piVar6[*piVar6 + 2] = temp_v0;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v0) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
    }
    else {
      FUN_002bf380(2,0x11,0,0,0,1);
    }
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v4 = *piVar6;
    temp_v1 = piVar6[temp_v4 + 2];
    *piVar6 = temp_v4 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
