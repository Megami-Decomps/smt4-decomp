/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385f74` (_code @ 0x385f74, 0x1720 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00385f74_arg0 fn_00385f74_arg0;
struct fn_00385f74_arg0 {
    unsigned char pad_0x0[0x310];
    int field_0x310; /* +0x310 */
    unsigned char pad_0x314[0x4];
    int field_0x318; /* +0x318 */
    unsigned char pad_0x31c[0x40];
    int field_0x35c; /* +0x35c */
    int field_0x360; /* +0x360 */
    int field_0x364; /* +0x364 */
    int field_0x368; /* +0x368 */
    int field_0x36c; /* +0x36c */
    int field_0x370; /* +0x370 */
    int field_0x374; /* +0x374 */
    int field_0x378; /* +0x378 */
    int field_0x37c; /* +0x37c */
    int field_0x380; /* +0x380 */
    int field_0x384; /* +0x384 */
    int field_0x388; /* +0x388 */
    int field_0x38c; /* +0x38c */
    int field_0x390; /* +0x390 */
    int field_0x394; /* +0x394 */
    int field_0x398; /* +0x398 */
    int field_0x39c; /* +0x39c */
    int field_0x3a0; /* +0x3a0 */
    int field_0x3a4; /* +0x3a4 */
    int field_0x3a8; /* +0x3a8 */
    int field_0x3ac; /* +0x3ac */
    int field_0x3b0; /* +0x3b0 */
    int field_0x3b4; /* +0x3b4 */
    int field_0x3b8; /* +0x3b8 */
    int field_0x3bc; /* +0x3bc */
    int field_0x3c0; /* +0x3c0 */
    int field_0x3c4; /* +0x3c4 */
    int field_0x3c8; /* +0x3c8 */
    int field_0x3cc; /* +0x3cc */
    int field_0x3d0; /* +0x3d0 */
    int field_0x3d4; /* +0x3d4 */
    int field_0x3d8; /* +0x3d8 */
    int field_0x3dc; /* +0x3dc */
    int field_0x3e0; /* +0x3e0 */
    int field_0x3e4; /* +0x3e4 */
    int field_0x3e8; /* +0x3e8 */
    int field_0x3ec; /* +0x3ec */
    int field_0x3f0; /* +0x3f0 */
    int field_0x3f4; /* +0x3f4 */
    int field_0x3f8; /* +0x3f8 */
    int field_0x3fc; /* +0x3fc */
    int field_0x400; /* +0x400 */
    int field_0x404; /* +0x404 */
    int field_0x408; /* +0x408 */
    int field_0x40c; /* +0x40c */
    int field_0x410; /* +0x410 */
    int field_0x414; /* +0x414 */
    int field_0x418; /* +0x418 */
    int field_0x41c; /* +0x41c */
    int field_0x420; /* +0x420 */
    int field_0x424; /* +0x424 */
    int field_0x428; /* +0x428 */
    int field_0x42c; /* +0x42c */
    int field_0x430; /* +0x430 */
    int field_0x434; /* +0x434 */
    int field_0x438; /* +0x438 */
    int field_0x43c; /* +0x43c */
    int field_0x440; /* +0x440 */
};

/* stack frame of param_1: 46 slot(s), 184 byte(s) */
typedef struct {
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
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
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
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_1_stack;

extern unsigned char LAB_0014147c; /* 0x14147c */
extern unsigned char LAB_00151b78; /* 0x151b78 */
extern unsigned char LAB_00151b88; /* 0x151b88 */
extern unsigned char LAB_00385b64; /* 0x385b64 */
extern unsigned char LAB_00385b74; /* 0x385b74 */
extern unsigned char LAB_003876b0; /* 0x3876b0 */
extern unsigned char LAB_00387c68; /* 0x387c68 */

#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00141710. */
/* Supplied declaration required: FUN_0020124c. */
/* Supplied declaration required: FUN_00234b14. */
/* Supplied declaration required: FUN_00262888. */
/* Supplied declaration required: FUN_002ac068. */
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
/* Supplied declaration required: FUN_002ac12c. */
/* Supplied declaration required: FUN_002acaac. */
/* Supplied declaration required: FUN_002b486c. */
/* Supplied declaration required: FUN_002b7bca. */
extern int FUN_002c0c74(void);
extern unsigned int FUN_002c0cc4(unsigned int);
/* Supplied declaration required: FUN_0038e2ac. */
/* Supplied declaration required: FUN_00393620. */
/* Supplied declaration required: FUN_00393fa4. */


void FUN_00385f74(fn_00385f74_arg0 *param_1)

{
/* irregular: 20 native warning(s); review required */
  int **ppiVar1;
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  char *pcVar5;
  int *piVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *puVar9;
  char *pcVar10;
  int temp_v11;
  unsigned int unaff_r5;
  unsigned char *puVar12;
  int *piVar13;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int *piVar17;
  int temp_v15;
  int *temp_v16;
  int temp_v17;
  int *temp_v18;
  int *temp_v19;
  int *temp_v20;
  int *temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int *temp_v24 [2];
  int temp_v25;
  int *temp_v26;
  int *temp_v27;
  int *temp_v28;
  int *temp_v29;
  int *temp_v30;
  int *temp_v31;
  int *temp_v32;
  int temp_v33;
  int *temp_v34;
  int temp_v35;
  int *temp_v36;
  int temp_v37;
  int *temp_v38;
  int *temp_v39;
  int *temp_v40;
  int *temp_v41;
  int *temp_v42;
  int *temp_v43;
  int *temp_v44;
  int *temp_v45;
  int *temp_v46;
  int *temp_v47;
  int *temp_v48;
  int *temp_v49;
  int *temp_v50;
  int *temp_v51;
  int *temp_v52;
  int *temp_v53;
  int *temp_v54;
  int *temp_v55;
  int *temp_v56;
  int *temp_v57;
  int *temp_v58;
  
  FUN_002b486c();
  temp_v38 = &param_1->field_0x404;
  temp_v39 = &param_1->field_0x40c;
  temp_v40 = &param_1->field_0x414;
  temp_v41 = &param_1->field_0x41c;
  temp_v42 = &param_1->field_0x424;
  temp_v43 = &param_1->field_0x434;
  temp_v44 = &param_1->field_0x43c;
  temp_v45 = &param_1->field_0x42c;
  temp_v37 = 0;
  if (0 < param_1->field_0x310) {
    temp_v46 = &param_1->field_0x384;
    temp_v47 = &param_1->field_0x38c;
    temp_v48 = &param_1->field_0x394;
    temp_v49 = &param_1->field_0x39c;
    temp_v50 = &param_1->field_0x3a8;
    temp_v51 = &param_1->field_0x3b4;
    temp_v52 = &param_1->field_0x3c0;
    temp_v53 = &param_1->field_0x3cc;
    temp_v54 = &param_1->field_0x3d8;
    temp_v55 = &param_1->field_0x3e4;
    temp_v56 = &param_1->field_0x3ec;
    temp_v57 = &param_1->field_0x3f4;
    temp_v58 = &param_1->field_0x3fc;
    do {
      temp_v23 = param_1->field_0x318 + temp_v37 * 0x50;
      temp_v2 = FUN_002ac12c();
      if (temp_v2 != 0) {
        temp_v13 = temp_v23;
        FUN_002ac0f8();
        temp_v9 = temp_v23;
        FUN_002ac0c4();
        temp_v12 = 0;
        if (temp_v12 < temp_v9) {
          do {
            pcVar5 = (char *)(temp_v13 + temp_v12 * 0x40);
            temp_v0 = *pcVar5;
            temp_v2 = *(int *)(temp_v23 + 0x4c);
            puVar9 = (unsigned int *)(temp_v2 + temp_v12 * 0x10);
            temp_v14 = *puVar9;
            if (temp_v0 != '\x15') {
              if (temp_v0 < '\x16') {
                if (temp_v0 != '\x04') {
                  if (temp_v0 < '\x05') {
                    if (temp_v0 != '\0') {
                      if (temp_v0 != '\x01') {
                        if (temp_v0 == '\x02') {
                          unaff_r5 = 0;
                          temp_v34 = temp_v46;
                          temp_v35 = (int)temp_v47;
                          temp_v36 = temp_v48;
                          do {
                            FUN_002ac068(temp_v14,unaff_r5);
                            temp_v2 = FUN_002c0c74();
                            ppiVar1 = &temp_v34 + unaff_r5;
                            unaff_r5 = unaff_r5 + 1;
                            **ppiVar1 = temp_v2 + **ppiVar1;
                          } while ((int)unaff_r5 < 3);
                        }
                      }
                      else {
                        FUN_002ac068(temp_v14,2);
                        temp_v2 = FUN_002c0c74();
                        param_1->field_0x36c = temp_v2 + param_1->field_0x36c;
                        FUN_002ac068(temp_v14,1);
                        temp_v2 = FUN_002c0c74();
                        param_1->field_0x374 = temp_v2 + param_1->field_0x374;
                        FUN_002ac068(temp_v14,0);
                        temp_v2 = FUN_002c0c74();
                        param_1->field_0x37c = temp_v2 + param_1->field_0x37c;
                      }
                    }
                    else {
                      FUN_002ac068(temp_v14,0);
                      temp_v2 = FUN_002c0c74();
                      param_1->field_0x35c = temp_v2 + param_1->field_0x35c;
                      FUN_002ac068(temp_v14,1);
                      temp_v2 = FUN_002c0c74();
                      param_1->field_0x364 = temp_v2 + param_1->field_0x364;
                    }
                  }
                  else if (temp_v0 != '\v') {
                    if (temp_v0 != '\x12') {
                      if (temp_v0 == '\x13') {
                        FUN_0038e2ac(temp_v14);
                      }
                    }
                    else {
                      unaff_r5 = 0;
                      temp_v24[0] = temp_v55;
                      temp_v24[1] = temp_v56;
                      temp_v25 = (int)temp_v57;
                      temp_v26 = temp_v58;
                      temp_v27 = temp_v38;
                      temp_v28 = temp_v39;
                      temp_v29 = temp_v40;
                      temp_v30 = temp_v41;
                      temp_v31 = temp_v42;
                      do {
                        FUN_002ac068(temp_v14,unaff_r5);
                        temp_v2 = FUN_002c0c74();
                        ppiVar1 = temp_v24 + unaff_r5;
                        unaff_r5 = unaff_r5 + 1;
                        **ppiVar1 = temp_v2 + **ppiVar1;
                      } while ((int)unaff_r5 < 9);
                    }
                  }
                  else {
                    FUN_0020124c(temp_v14);
                  }
                }
                else {
                  unaff_r5 = 0;
                  temp_v16 = temp_v49;
                  temp_v17 = (int)temp_v50;
                  temp_v18 = temp_v51;
                  temp_v19 = temp_v52;
                  temp_v20 = temp_v53;
                  temp_v21 = temp_v54;
                  do {
                    FUN_002ac068(temp_v14,unaff_r5);
                    temp_v2 = FUN_002c0c74();
                    ppiVar1 = &temp_v16 + unaff_r5;
                    unaff_r5 = unaff_r5 + 1;
                    **ppiVar1 = temp_v2 + **ppiVar1;
                  } while ((int)unaff_r5 < 6);
                }
              }
              else if (temp_v0 != '\x1a') {
                if (temp_v0 < '\x1b') {
                  if (temp_v0 != '\x17') {
                    if (temp_v0 != '\x18') {
                      if (temp_v0 == '\x19') {
                        unaff_r5 = 0;
                        if (unaff_r5 < temp_v9) {
                          do {
                            pcVar10 = (char *)(temp_v13 + unaff_r5 * 0x40);
                            if ((*pcVar10 == '\x1a') &&
                               (*(int *)(pcVar10 + 0x3c) == *(int *)(pcVar5 + 0x3c))) {
                              if (*(int *)(temp_v2 + unaff_r5 * 0x10 + 4) == 0) {
                                FUN_00234b14(temp_v2 + unaff_r5 * 0x10);
                              }
                              break;
                            }
                            unaff_r5 = unaff_r5 + 1;
                          } while (unaff_r5 < temp_v9);
                        }
                        if (unaff_r5 != temp_v9) {
                          FUN_00393fa4(*(unsigned int *)
                                        (*(int *)(temp_v23 + 0x4c) + unaff_r5 * 0x10 + 4),
                                       *(int *)(temp_v23 + 0x4c) + temp_v12 * 0x10);
                        }
                      }
                    }
                    else {
                      unaff_r5 = 0;
                      if (unaff_r5 < temp_v9) {
                        do {
                          pcVar10 = (char *)(temp_v13 + unaff_r5 * 0x40);
                          if ((*pcVar10 == '\x17') &&
                             (*(int *)(pcVar10 + 0x3c) == *(int *)(pcVar5 + 0x3c))) {
                            if (*(int *)(temp_v2 + unaff_r5 * 0x10 + 4) == 0) {
                              FUN_00234b14(temp_v2 + unaff_r5 * 0x10);
                            }
                            break;
                          }
                          unaff_r5 = unaff_r5 + 1;
                        } while (unaff_r5 < temp_v9);
                      }
                      if (unaff_r5 != temp_v9) {
                        FUN_00393620(*(unsigned int *)
                                      (*(int *)(temp_v23 + 0x4c) + unaff_r5 * 0x10 + 4),
                                     *(int *)(temp_v23 + 0x4c) + temp_v12 * 0x10);
                      }
                    }
                  }
                  else {
                    FUN_00234b14(puVar9);
                  }
                }
                else if (temp_v0 != '+') {
                  if (temp_v0 == ',') {
                    FUN_002ac068(temp_v14,0);
                    temp_v2 = FUN_002c0c74();
                    *temp_v45 = temp_v2 + param_1->field_0x42c;
                  }
                }
                else {
                  unaff_r5 = 0;
                  temp_v32 = temp_v43;
                  temp_v33 = (int)temp_v44;
                  do {
                    FUN_002ac068(temp_v14,unaff_r5);
                    temp_v2 = FUN_002c0c74();
                    ppiVar1 = &temp_v32 + unaff_r5;
                    unaff_r5 = unaff_r5 + 1;
                    **ppiVar1 = temp_v2 + **ppiVar1;
                  } while ((int)unaff_r5 < 2);
                }
              }
              else {
                FUN_00234b14(puVar9);
              }
            }
            else {
              FUN_00234b14(puVar9);
            }
            temp_v12 = temp_v12 + 1;
          } while (temp_v12 < temp_v9);
        }
      }
      temp_v37 = temp_v37 + 1;
    } while (temp_v37 < param_1->field_0x310);
  }
  if (param_1->field_0x35c != 0) {
    temp_v2 = param_1->field_0x35c * 0x94;
    FUN_00262888();
    param_1->field_0x360 = temp_v2;
  }
  if (param_1->field_0x364 != 0) {
    temp_v2 = param_1->field_0x364 * 0xa8;
    FUN_00262888();
    param_1->field_0x368 = temp_v2;
  }
  if (param_1->field_0x36c != 0) {
    temp_v2 = param_1->field_0x36c << 2;
    FUN_00262888();
    param_1->field_0x370 = temp_v2;
  }
  if (param_1->field_0x374 != 0) {
    temp_v2 = param_1->field_0x374 * 0x28;
    FUN_00262888();
    param_1->field_0x378 = temp_v2;
  }
  if (param_1->field_0x37c != 0) {
    temp_v2 = param_1->field_0x37c * 0x22;
    FUN_00262888();
    param_1->field_0x380 = temp_v2;
  }
  if (param_1->field_0x384 != 0) {
    temp_v2 = param_1->field_0x384 * 0x1b4;
    FUN_00262888();
    param_1->field_0x388 = temp_v2;
  }
  if (param_1->field_0x38c != 0) {
    temp_v2 = param_1->field_0x38c * 0x54;
    FUN_00262888();
    param_1->field_0x390 = temp_v2;
  }
  if (param_1->field_0x394 != 0) {
    temp_v2 = param_1->field_0x394 << 4;
    FUN_00262888();
    param_1->field_0x398 = temp_v2;
  }
  if (param_1->field_0x3e4 != 0) {
    temp_v2 = param_1->field_0x3e4 << 5;
    FUN_00262888();
    param_1->field_0x3e8 = temp_v2;
  }
  if (param_1->field_0x3ec != 0) {
    temp_v2 = param_1->field_0x3ec * 0xc;
    FUN_00262888();
    param_1->field_0x3f0 = temp_v2;
  }
  if (param_1->field_0x3f4 != 0) {
    temp_v2 = param_1->field_0x3f4 << 5;
    FUN_00262888();
    param_1->field_0x3f8 = temp_v2;
  }
  if (param_1->field_0x3fc != 0) {
    temp_v2 = param_1->field_0x3fc * 0x14;
    FUN_00262888();
    param_1->field_0x400 = temp_v2;
  }
  if (param_1->field_0x404 != 0) {
    temp_v2 = param_1->field_0x404 * 0x1c;
    FUN_00262888();
    param_1->field_0x408 = temp_v2;
  }
  if (param_1->field_0x40c != 0) {
    temp_v2 = param_1->field_0x40c * 0x2c;
    FUN_00262888();
    param_1->field_0x410 = temp_v2;
  }
  if (param_1->field_0x414 != 0) {
    temp_v2 = param_1->field_0x414 * 0xc;
    FUN_00262888();
    param_1->field_0x418 = temp_v2;
  }
  if (param_1->field_0x41c != 0) {
    temp_v2 = param_1->field_0x41c * 0xc;
    FUN_00262888();
    param_1->field_0x420 = temp_v2;
  }
  if (param_1->field_0x424 != 0) {
    temp_v2 = param_1->field_0x424 * 0x18;
    FUN_00262888();
    param_1->field_0x428 = temp_v2;
  }
  if (param_1->field_0x42c != 0) {
    temp_v2 = param_1->field_0x42c * 0x18;
    FUN_00262888();
    param_1->field_0x430 = temp_v2;
  }
  if (param_1->field_0x434 != 0) {
    temp_v2 = param_1->field_0x434 * 0x68;
    FUN_00262888();
    param_1->field_0x438 = temp_v2;
  }
  if (param_1->field_0x43c != 0) {
    temp_v2 = param_1->field_0x43c * 0x3c;
    FUN_00262888();
    param_1->field_0x440 = temp_v2;
  }
  if (param_1->field_0x39c != 0) {
    temp_v2 = param_1->field_0x39c * 0x58;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3a0 = temp_v2;
    temp_v2 = param_1->field_0x39c << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3a4 = temp_v2;
  }
  if (param_1->field_0x3a8 != 0) {
    temp_v2 = param_1->field_0x3a8 << 7;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3ac = temp_v2;
    temp_v2 = param_1->field_0x3a8 << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3b0 = temp_v2;
  }
  if (param_1->field_0x3b4 != 0) {
    temp_v2 = param_1->field_0x3b4 * 0xa8;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3b8 = temp_v2;
    temp_v2 = param_1->field_0x3b4 << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3bc = temp_v2;
  }
  if (param_1->field_0x3c0 != 0) {
    temp_v2 = param_1->field_0x3c0 * 0x3c;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3c4 = temp_v2;
    temp_v2 = param_1->field_0x3c0 << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3c8 = temp_v2;
  }
  if (param_1->field_0x3cc != 0) {
    temp_v2 = param_1->field_0x3cc * 0x30;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3d0 = temp_v2;
    temp_v2 = param_1->field_0x3cc << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3d4 = temp_v2;
  }
  if (param_1->field_0x3d8 != 0) {
    temp_v2 = param_1->field_0x3d8 * 0x2c;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3dc = temp_v2;
    temp_v2 = param_1->field_0x3d8 << 1;
    FUN_00262888(temp_v2,unaff_r5);
    param_1->field_0x3e0 = temp_v2;
  }
  temp_v13 = 0;
  temp_v29 = (int *)0x0;
  temp_v30 = (int *)0x0;
  temp_v15 = 0;
  temp_v22 = 0;
  temp_v38 = (int *)0x0;
  temp_v23 = 0;
  temp_v20 = (int *)0x0;
  temp_v31 = (int *)0x0;
  temp_v27 = (int *)0x0;
  temp_v17 = 0;
  temp_v16 = (int *)0x0;
  temp_v33 = 0;
  temp_v26 = (int *)0x0;
  temp_v35 = 0;
  temp_v42 = (int *)0x0;
  temp_v34 = (int *)0x0;
  temp_v28 = (int *)0x0;
  temp_v40 = (int *)0x0;
  temp_v36 = (int *)0x0;
  temp_v37 = 0;
  temp_v41 = (int *)0x0;
  temp_v25 = 0;
  temp_v43 = (int *)0x0;
  temp_v32 = (int *)0x0;
  temp_v39 = (int *)0x0;
  temp_v49 = (int *)0x0;
  if (0 < param_1->field_0x310) {
    do {
      piVar13 = (int *)(param_1->field_0x318 + (int)temp_v49 * 0x50);
      temp_v2 = FUN_002ac12c(piVar13);
      if (temp_v2 != 0) {
        piVar17 = piVar13;
        FUN_002ac0f8();
        piVar6 = piVar13;
        temp_v45 = piVar17;
        FUN_002ac0c4();
        piVar17 = (int *)0;
        if (piVar6 != (int *)0x0) {
          piVar17 = temp_v49;
        }
        puVar12 = (unsigned char *)0x0;
        if (piVar6 != (int *)0x0) {
          temp_v1 = romwright_subpiece_4_2_0(piVar17,0);
          temp_v9 = temp_v13;
          do {
            temp_v48 = *(int **)(piVar13[0x13] + (int)puVar12 * 0x10);
            temp_v0 = (char)temp_v45[(int)puVar12 * 0x10];
            temp_v13 = temp_v9;
            if (temp_v0 != '\x04') {
              piVar17 = temp_v20;
              if (temp_v0 < '\x04') {
                if (temp_v0 != '\0') {
                  if (temp_v0 != '\x01') {
                    if (temp_v0 == '\x02') {
                      temp_v14 = FUN_002ac068(temp_v48,0);
                      temp_v2 = FUN_002c0c74();
                      if (temp_v2 != 0) {
                        temp_v14 = FUN_002c0cc4(temp_v14);
                        FUN_002acaac(param_1->field_0x388 + (int)temp_v42 * 0x1b4,temp_v14,
                                     temp_v2 * 0x1b4);
                        temp_v42 = (int *)((int)temp_v42 + temp_v2);
                      }
                      temp_v14 = FUN_002ac068(temp_v48,1);
                      temp_v2 = FUN_002c0c74();
                      if (temp_v2 != 0) {
                        temp_v14 = FUN_002c0cc4(temp_v14);
                        FUN_002acaac(param_1->field_0x390 + temp_v25 * 0x54,temp_v14,temp_v2 * 0x54);
                        temp_v25 = temp_v25 + temp_v2;
                      }
                      temp_v14 = FUN_002ac068(temp_v48,2);
                      temp_v2 = FUN_002c0c74();
                      piVar17 = temp_v20;
                      if (temp_v2 != 0) {
                        temp_v14 = FUN_002c0cc4(temp_v14);
                        FUN_002acaac(param_1->field_0x398 + temp_v37 * 0x10,temp_v14,temp_v2 << 4);
                        temp_v37 = temp_v37 + temp_v2;
                        piVar17 = temp_v20;
                      }
                    }
                  }
                  else {
                    temp_v14 = FUN_002ac068(temp_v48,2);
                    temp_v2 = FUN_002c0c74();
                    if (temp_v2 != 0) {
                      temp_v14 = FUN_002c0cc4(temp_v14);
                      FUN_002acaac(param_1->field_0x370 + (int)temp_v31 * 4,temp_v14,temp_v2 << 2);
                      temp_v31 = (int *)((int)temp_v31 + temp_v2);
                    }
                    temp_v14 = FUN_002ac068(temp_v48,1);
                    temp_v2 = FUN_002c0c74();
                    if (temp_v2 != 0) {
                      temp_v14 = FUN_002c0cc4(temp_v14);
                      FUN_002acaac(param_1->field_0x378 + (int)temp_v40 * 0x28,temp_v14,temp_v2 * 0x28);
                      temp_v40 = (int *)((int)temp_v40 + temp_v2);
                    }
                    temp_v14 = FUN_002ac068(temp_v48,0);
                    temp_v2 = FUN_002c0c74();
                    piVar17 = temp_v20;
                    if (temp_v2 != 0) {
                      temp_v14 = FUN_002c0cc4(temp_v14);
                      FUN_002acaac(param_1->field_0x380 + (int)temp_v41 * 0x22,temp_v14,temp_v2 * 0x22);
                      temp_v41 = (int *)((int)temp_v41 + temp_v2);
                      piVar17 = temp_v20;
                    }
                  }
                }
                else {
                  temp_v14 = FUN_002ac068(temp_v48,0);
                  temp_v2 = FUN_002c0c74();
                  if (temp_v2 != 0) {
                    temp_v14 = FUN_002c0cc4(temp_v14);
                    FUN_002acaac(param_1->field_0x360 + (int)temp_v29 * 0x94,temp_v14,temp_v2 * 0x94);
                    temp_v29 = (int *)((int)temp_v29 + temp_v2);
                  }
                  temp_v14 = FUN_002ac068(temp_v48,1);
                  temp_v2 = FUN_002c0c74();
                  piVar17 = temp_v20;
                  if (temp_v2 != 0) {
                    temp_v14 = FUN_002c0cc4(temp_v14);
                    FUN_002acaac(param_1->field_0x368 + temp_v23 * 0xa8,temp_v14,temp_v2 * 0xa8);
                    temp_v23 = temp_v23 + temp_v2;
                    piVar17 = temp_v20;
                  }
                }
              }
              else if (temp_v0 != '\x12') {
                if (temp_v0 != '+') {
                  if (temp_v0 == ',') {
                    temp_v14 = FUN_002ac068(temp_v48,0);
                    temp_v2 = FUN_002c0c74();
                    piVar17 = temp_v20;
                    if (temp_v2 != 0) {
                      temp_v14 = FUN_002c0cc4(temp_v14);
                      FUN_002acaac(param_1->field_0x430 + (int)temp_v43 * 0x18,temp_v14,temp_v2 * 0x18);
                      temp_v43 = (int *)((int)temp_v43 + temp_v2);
                      piVar17 = temp_v20;
                    }
                  }
                }
                else {
                  temp_v14 = FUN_002ac068(temp_v48,0);
                  temp_v2 = FUN_002c0c74();
                  if (temp_v2 != 0) {
                    temp_v14 = FUN_002c0cc4(temp_v14);
                    FUN_002acaac(param_1->field_0x438 + (int)temp_v32 * 0x68,temp_v14,temp_v2 * 0x68);
                    temp_v32 = (int *)((int)temp_v32 + temp_v2);
                  }
                  temp_v14 = FUN_002ac068(temp_v48,1);
                  temp_v2 = FUN_002c0c74();
                  piVar17 = temp_v20;
                  if (temp_v2 != 0) {
                    temp_v14 = FUN_002c0cc4(temp_v14);
                    FUN_002acaac(param_1->field_0x440 + (int)temp_v39 * 0x3c,temp_v14,temp_v2 * 0x3c);
                    temp_v39 = (int *)((int)temp_v39 + temp_v2);
                    piVar17 = temp_v20;
                  }
                }
              }
              else {
                temp_v14 = FUN_002ac068(temp_v48,0);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x3e8 + temp_v15 * 0x20,temp_v14,temp_v2 << 5);
                  temp_v15 = temp_v15 + temp_v2;
                }
                temp_v14 = FUN_002ac068(temp_v48,1);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x3f0 + temp_v33 * 0xc,temp_v14,temp_v2 * 0xc);
                  temp_v33 = temp_v33 + temp_v2;
                }
                temp_v14 = FUN_002ac068(temp_v48,2);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x3f8 + (int)temp_v26 * 0x20,temp_v14,temp_v2 << 5);
                  temp_v26 = (int *)((int)temp_v26 + temp_v2);
                }
                temp_v14 = FUN_002ac068(temp_v48,3);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x400 + (int)temp_v27 * 0x14,temp_v14,temp_v2 * 0x14);
                  temp_v27 = (int *)((int)temp_v27 + temp_v2);
                }
                temp_v14 = FUN_002ac068(temp_v48,4);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x408 + (int)temp_v34 * 0x1c,temp_v14,temp_v2 * 0x1c);
                  temp_v34 = (int *)((int)temp_v34 + temp_v2);
                }
                temp_v14 = FUN_002ac068(temp_v48,5);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x410 + temp_v17 * 0x2c,temp_v14,temp_v2 * 0x2c);
                  temp_v17 = temp_v17 + temp_v2;
                }
                temp_v14 = FUN_002ac068(temp_v48,6);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x418 + temp_v35 * 0xc,temp_v14,temp_v2 * 0xc);
                  temp_v35 = temp_v35 + temp_v2;
                }
                temp_v14 = FUN_002ac068(temp_v48,7);
                temp_v2 = FUN_002c0c74();
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x420 + (int)temp_v28 * 0xc,temp_v14,temp_v2 * 0xc);
                  temp_v28 = (int *)((int)temp_v28 + temp_v2);
                }
                temp_v14 = FUN_002ac068(temp_v48,8);
                temp_v2 = FUN_002c0c74();
                piVar17 = temp_v20;
                if (temp_v2 != 0) {
                  temp_v14 = FUN_002c0cc4(temp_v14);
                  FUN_002acaac(param_1->field_0x428 + (int)temp_v36 * 0x18,temp_v14,temp_v2 * 0x18);
                  temp_v36 = (int *)((int)temp_v36 + temp_v2);
                  piVar17 = temp_v20;
                }
              }
            }
            else {
              temp_v14 = FUN_002ac068(temp_v48,0);
              temp_v2 = FUN_002c0c74();
              piVar17 = temp_v30;
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v11 = temp_v2 * 0x58;
                FUN_002acaac(param_1->field_0x3a0 + (int)temp_v30 * 0x58,temp_v14);
                piVar17 = (int *)((int)temp_v30 + temp_v2);
                if (piVar17 != temp_v30) {
                  temp_v11 = 0;
                }
                temp_v12 = temp_v3;
                if (piVar17 < temp_v30) {
                  temp_v12 = 0;
                }
                if (piVar17 != temp_v30) {
                  if ((piVar17 >= temp_v30) &&
                     (temp_v12 = ((int)piVar17 - (int)temp_v30) & 1, temp_v12 == 1)) {
                    temp_v11 = 1;
                    *(unsigned short *)(param_1->field_0x3a4 + (int)temp_v30 * 2) = temp_v1;
                  }
                  for (; temp_v12 < (unsigned int)((int)piVar17 - (int)temp_v30); temp_v12 = temp_v12 + 2) {
                    temp_v2 = temp_v11 + 1;
                    *(unsigned short *)(param_1->field_0x3a4 + ((int)temp_v30 + temp_v11) * 2) = temp_v1;
                    temp_v11 = temp_v11 + 2;
                    *(unsigned short *)(param_1->field_0x3a4 + ((int)temp_v30 + temp_v2) * 2) = temp_v1;
                  }
                }
              }
              temp_v30 = piVar17;
              temp_v14 = FUN_002ac068(temp_v48,1);
              temp_v2 = FUN_002c0c74();
              piVar17 = temp_v16;
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v11 = temp_v2 << 7;
                FUN_002acaac(param_1->field_0x3ac + (int)temp_v16 * 0x80,temp_v14);
                piVar17 = (int *)((int)temp_v16 + temp_v2);
                if (piVar17 != temp_v16) {
                  temp_v11 = 0;
                }
                temp_v12 = temp_v4;
                if (piVar17 < temp_v16) {
                  temp_v12 = 0;
                }
                if (piVar17 != temp_v16) {
                  if ((piVar17 >= temp_v16) &&
                     (temp_v12 = ((int)piVar17 - (int)temp_v16) & 1, temp_v12 == 1)) {
                    temp_v11 = 1;
                    *(unsigned short *)(param_1->field_0x3b0 + (int)temp_v16 * 2) = temp_v1;
                  }
                  for (; temp_v12 < (unsigned int)((int)piVar17 - (int)temp_v16); temp_v12 = temp_v12 + 2) {
                    temp_v2 = temp_v11 + 1;
                    *(unsigned short *)(param_1->field_0x3b0 + ((int)temp_v16 + temp_v11) * 2) = temp_v1;
                    temp_v11 = temp_v11 + 2;
                    *(unsigned short *)(param_1->field_0x3b0 + ((int)temp_v16 + temp_v2) * 2) = temp_v1;
                  }
                }
              }
              temp_v16 = piVar17;
              temp_v14 = FUN_002ac068(temp_v48,2);
              temp_v2 = FUN_002c0c74();
              temp_v12 = temp_v22;
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v11 = temp_v2 * 0xa8;
                FUN_002acaac(param_1->field_0x3b8 + temp_v22 * 0xa8,temp_v14);
                temp_v12 = temp_v22 + temp_v2;
                if (temp_v12 != temp_v22) {
                  temp_v11 = 0;
                }
                temp_v6 = temp_v5;
                if (temp_v12 < temp_v22) {
                  temp_v6 = 0;
                }
                if (temp_v12 != temp_v22) {
                  if ((temp_v12 >= temp_v22) && (temp_v6 = (temp_v12 - temp_v22) & 1, temp_v6 == 1)) {
                    temp_v11 = 1;
                    *(unsigned short *)(param_1->field_0x3bc + temp_v22 * 2) = temp_v1;
                  }
                  for (; temp_v6 < temp_v12 - temp_v22; temp_v6 = temp_v6 + 2) {
                    temp_v2 = temp_v11 + 1;
                    *(unsigned short *)(param_1->field_0x3bc + (temp_v22 + temp_v11) * 2) = temp_v1;
                    temp_v11 = temp_v11 + 2;
                    *(unsigned short *)(param_1->field_0x3bc + (temp_v22 + temp_v2) * 2) = temp_v1;
                  }
                }
              }
              temp_v22 = temp_v12;
              temp_v14 = FUN_002ac068(temp_v48,3);
              temp_v2 = FUN_002c0c74();
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v12 = param_1->field_0x3c4 + temp_v9 * 0x3c;
                FUN_002acaac(temp_v12,temp_v14,temp_v2 * 0x3c);
                temp_v13 = temp_v9 + temp_v2;
                temp_v2 = temp_v7;
                if (temp_v13 != temp_v9) {
                  temp_v2 = 0;
                }
                if (temp_v13 < temp_v9) {
                  temp_v12 = 0;
                }
                if (temp_v13 != temp_v9) {
                  if ((temp_v13 >= temp_v9) && (temp_v12 = (temp_v13 - temp_v9) & 1, temp_v12 == 1)) {
                    temp_v2 = 1;
                    *(unsigned short *)(param_1->field_0x3c8 + temp_v9 * 2) = temp_v1;
                  }
                  for (; temp_v12 < temp_v13 - temp_v9; temp_v12 = temp_v12 + 2) {
                    temp_v11 = temp_v2 + 1;
                    *(unsigned short *)(param_1->field_0x3c8 + (temp_v9 + temp_v2) * 2) = temp_v1;
                    temp_v2 = temp_v2 + 2;
                    *(unsigned short *)(param_1->field_0x3c8 + (temp_v9 + temp_v11) * 2) = temp_v1;
                  }
                }
              }
              temp_v14 = FUN_002ac068(temp_v48,4);
              temp_v2 = FUN_002c0c74();
              piVar17 = temp_v38;
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v11 = temp_v2 * 0x30;
                FUN_002acaac(param_1->field_0x3d0 + (int)temp_v38 * 0x30,temp_v14);
                piVar17 = (int *)((int)temp_v38 + temp_v2);
                if (piVar17 != temp_v38) {
                  temp_v11 = 0;
                }
                temp_v9 = temp_v8;
                if (piVar17 < temp_v38) {
                  temp_v9 = 0;
                }
                if (piVar17 != temp_v38) {
                  if ((piVar17 >= temp_v38) &&
                     (temp_v9 = ((int)piVar17 - (int)temp_v38) & 1, temp_v9 == 1)) {
                    temp_v11 = 1;
                    *(unsigned short *)(param_1->field_0x3d4 + (int)temp_v38 * 2) = temp_v1;
                  }
                  for (; temp_v9 < (unsigned int)((int)piVar17 - (int)temp_v38); temp_v9 = temp_v9 + 2) {
                    temp_v2 = temp_v11 + 1;
                    *(unsigned short *)(param_1->field_0x3d4 + ((int)temp_v38 + temp_v11) * 2) = temp_v1;
                    temp_v11 = temp_v11 + 2;
                    *(unsigned short *)(param_1->field_0x3d4 + ((int)temp_v38 + temp_v2) * 2) = temp_v1;
                  }
                }
              }
              temp_v38 = piVar17;
              temp_v14 = FUN_002ac068(temp_v48,5);
              temp_v2 = FUN_002c0c74();
              piVar17 = temp_v20;
              if (temp_v2 != 0) {
                temp_v14 = FUN_002c0cc4(temp_v14);
                temp_v11 = temp_v2 * 0x2c;
                FUN_002acaac(param_1->field_0x3dc + (int)temp_v20 * 0x2c,temp_v14);
                piVar17 = (int *)((int)temp_v20 + temp_v2);
                if (piVar17 != temp_v20) {
                  temp_v11 = 0;
                }
                temp_v9 = temp_v10;
                if (piVar17 < temp_v20) {
                  temp_v9 = 0;
                }
                if (piVar17 != temp_v20) {
                  if ((piVar17 >= temp_v20) &&
                     (temp_v9 = ((int)piVar17 - (int)temp_v20) & 1, temp_v9 == 1)) {
                    temp_v11 = 1;
                    *(unsigned short *)(param_1->field_0x3e0 + (int)temp_v20 * 2) = temp_v1;
                  }
                  for (; temp_v9 < (unsigned int)((int)piVar17 - (int)temp_v20); temp_v9 = temp_v9 + 2) {
                    temp_v2 = temp_v11 + 1;
                    *(unsigned short *)(param_1->field_0x3e0 + ((int)temp_v20 + temp_v11) * 2) = temp_v1;
                    temp_v11 = temp_v11 + 2;
                    *(unsigned short *)(param_1->field_0x3e0 + ((int)temp_v20 + temp_v2) * 2) = temp_v1;
                  }
                }
              }
            }
            temp_v20 = piVar17;
            puVar12 = puVar12 + 1;
            temp_v9 = temp_v13;
          } while (puVar12 < piVar6);
        }
      }
      temp_v49 = (int *)((int)temp_v49 + 1);
    } while ((int)temp_v49 < param_1->field_0x310);
  }
  if (param_1->field_0x384 != 0) {
    FUN_002b7bca(param_1->field_0x388,param_1->field_0x384,0x1b4,&LAB_00385b74);
  }
  if (param_1->field_0x35c != 0) {
    FUN_002b7bca(param_1->field_0x360,param_1->field_0x35c,0x94,&LAB_003876b0);
  }
  if (param_1->field_0x364 != 0) {
    FUN_002b7bca(param_1->field_0x368,param_1->field_0x364,0xa8,&LAB_00385b64);
  }
  if (param_1->field_0x374 != 0) {
    FUN_002b7bca(param_1->field_0x378,param_1->field_0x374,0x28,&LAB_00387c68);
  }
  if (param_1->field_0x42c != 0) {
    FUN_002b7bca(param_1->field_0x430,param_1->field_0x42c,0x18,&LAB_0014147c);
  }
  if (param_1->field_0x434 != 0) {
    FUN_002b7bca(param_1->field_0x438,param_1->field_0x434,0x68,&LAB_00151b88);
  }
  if (param_1->field_0x43c != 0) {
    FUN_002b7bca(param_1->field_0x440,param_1->field_0x43c,0x3c,&LAB_00151b78);
  }
  temp_v2 = 0;
  if (temp_v2 < param_1->field_0x310) {
    do {
      FUN_00141710(param_1->field_0x318 + temp_v2 * 0x50,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_1->field_0x310);
  }
  return;
}
