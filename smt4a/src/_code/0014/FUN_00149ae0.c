/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149ae0` (_code @ 0x149ae0, 0xca4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00161b8c; /* 0x161b8c */
extern int sys_PDC0Callback(); /* 0x161bcc */
extern int sys_PDC1Callback(); /* 0x161c10 */
extern unsigned char LAB_00161c58; /* 0x161c58 */
extern unsigned char LAB_00161c5c; /* 0x161c5c */
extern unsigned char LAB_00161c60; /* 0x161c60 */
extern unsigned char LAB_0017e4d4; /* 0x17e4d4 */
extern unsigned char LAB_00400004; /* 0x400004 */
extern unsigned char LAB_0040001c; /* 0x40001c */
extern unsigned char LAB_0040002c; /* 0x40002c */
extern unsigned char LAB_00400050; /* 0x400050 */
extern unsigned char LAB_00400054; /* 0x400054 */
extern unsigned char LAB_00400400; /* 0x400400 */
extern unsigned char LAB_00400404; /* 0x400404 */
extern unsigned char LAB_00400408; /* 0x400408 */
extern unsigned char LAB_0040040c; /* 0x40040c */
extern unsigned char LAB_00400410; /* 0x400410 */
extern unsigned char LAB_00400414; /* 0x400414 */
extern unsigned char LAB_00400418; /* 0x400418 */
extern unsigned char LAB_0040041c; /* 0x40041c */
extern unsigned char LAB_00400420; /* 0x400420 */
extern unsigned char LAB_00400424; /* 0x400424 */
extern unsigned char LAB_00400428; /* 0x400428 */
extern unsigned char LAB_0040042c; /* 0x40042c */
extern unsigned char LAB_00400430; /* 0x400430 */
extern unsigned char LAB_00400434; /* 0x400434 */
extern unsigned char LAB_00400438; /* 0x400438 */
extern unsigned char LAB_0040043c; /* 0x40043c */
extern unsigned char LAB_00400440; /* 0x400440 */
extern unsigned char LAB_00400444; /* 0x400444 */
extern unsigned char LAB_00400448; /* 0x400448 */
extern unsigned char LAB_0040045c; /* 0x40045c */
extern unsigned char LAB_00400460; /* 0x400460 */
extern unsigned char LAB_00400464; /* 0x400464 */
extern unsigned char LAB_00400468; /* 0x400468 */
extern unsigned char LAB_0040046c; /* 0x40046c */
extern unsigned char LAB_00400470; /* 0x400470 */
extern unsigned char LAB_00400474; /* 0x400474 */
extern unsigned char LAB_00400478; /* 0x400478 */
extern unsigned char LAB_00400494; /* 0x400494 */
extern unsigned char LAB_00400498; /* 0x400498 */
extern unsigned char LAB_0040049c; /* 0x40049c */
extern unsigned char LAB_00400500; /* 0x400500 */
extern unsigned char LAB_00400504; /* 0x400504 */
extern unsigned char LAB_00400508; /* 0x400508 */
extern unsigned char LAB_0040050c; /* 0x40050c */
extern unsigned char LAB_00400510; /* 0x400510 */
extern unsigned char LAB_00400514; /* 0x400514 */
extern unsigned char LAB_00400518; /* 0x400518 */
extern unsigned char LAB_0040051c; /* 0x40051c */
extern unsigned char LAB_00400520; /* 0x400520 */
extern unsigned char LAB_00400524; /* 0x400524 */
extern unsigned char LAB_00400528; /* 0x400528 */
extern unsigned char LAB_0040052c; /* 0x40052c */
extern unsigned char LAB_00400530; /* 0x400530 */
extern unsigned char LAB_00400534; /* 0x400534 */
extern unsigned char LAB_00400538; /* 0x400538 */
extern unsigned char LAB_0040053c; /* 0x40053c */
extern unsigned char LAB_00400540; /* 0x400540 */
extern unsigned char LAB_00400544; /* 0x400544 */
extern unsigned char LAB_00400548; /* 0x400548 */
extern unsigned char LAB_0040055c; /* 0x40055c */
extern unsigned char LAB_00400560; /* 0x400560 */
extern int FUN_00400564(); /* 0x400564 */
extern unsigned char LAB_00400568; /* 0x400568 */
extern unsigned char LAB_0040056c; /* 0x40056c */
extern unsigned char LAB_00400570; /* 0x400570 */
extern unsigned char LAB_00400574; /* 0x400574 */
extern unsigned char LAB_00400578; /* 0x400578 */
extern unsigned char LAB_0040059c; /* 0x40059c */
extern unsigned char LAB_00400c18; /* 0x400c18 */
extern unsigned char LAB_00401000; /* 0x401000 */
extern unsigned char LAB_00401080; /* 0x401080 */
extern unsigned char LAB_004010c0; /* 0x4010c0 */
extern unsigned char LAB_004010d0; /* 0x4010d0 */
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern unsigned int DAT_00589194; /* 0x589194 */
extern unsigned int DAT_00589198; /* 0x589198 */
extern int DAT_0058919c; /* 0x58919c */
extern int DAT_005891a0; /* 0x5891a0 */
extern int DAT_005b40e0; /* 0x5b40e0 */
extern int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned int DAT_0061a470; /* 0x61a470 */
extern unsigned int DAT_0061a474; /* 0x61a474 */
extern unsigned int DAT_0061a478; /* 0x61a478 */
extern unsigned int DAT_0061a47c; /* 0x61a47c */
extern signed char DAT_0061a480; /* 0x61a480 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern unsigned char DAT_0061a482; /* 0x61a482 */
extern unsigned int DAT_0061a484; /* 0x61a484 */
extern unsigned char DAT_0061a488; /* 0x61a488 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */
extern unsigned int *DAT_0061a510; /* 0x61a510 */
extern unsigned int DAT_0061a5d4; /* 0x61a5d4 */
extern romwright_code *DAT_0061a5e0; /* 0x61a5e0 */
extern unsigned int DAT_0061a5e8; /* 0x61a5e8 */
extern int DAT_0061a5ec; /* 0x61a5ec */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001600b8(int);
/* Supplied declaration required: FUN_001600fc. */
extern int FUN_00160944(void);
extern int FUN_00160ddc(int);
extern int FUN_00160f90(int);
/* Supplied declaration required: FUN_001612f4. */
extern unsigned long long FUN_001623d0(void);
/* Supplied declaration required: FUN_00170050. */
/* Supplied declaration required: FUN_00170158. */
/* Supplied declaration required: FUN_00170184. */
/* Supplied declaration required: FUN_001702ac. */
extern int FUN_001702e0(void);
/* Supplied declaration required: FUN_001702f8. */
extern unsigned int FUN_00170344(void);
/* Supplied declaration required: FUN_0017cdb4. */
/* Supplied declaration required: FUN_0017cff0. */
/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */
/* Supplied declaration required: FUN_002e6354. */
extern int nngxGetVramEndAddr(unsigned int);
extern int vldtr_initializeStateValidator(int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_00149ae0(romwright_code *param_1,romwright_code *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 19 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  int temp_v5;
  romwright_code *in_r12;
  unsigned char temp_v6;
  unsigned long long temp_v7;
  unsigned long long temp_v8;
  int temp_v9 [3];
  
  temp_v9[2] = 1;
  if ((param_1 == (romwright_code *)0x0 || param_2 == (romwright_code *)0x0) || (DAT_0061a480 != '\0')) {
    return 0;
  }
  FUN_002e6354(&DAT_0061a470,0x180);
  DAT_0061a470 = 0xf0;
  DAT_0061a474 = 0xf0;
  DAT_0061a478 = 400;
  DAT_0061a47c = 0x140;
  DAT_00589198 = 1;
  DAT_00589194 = 1;
  DAT_0061a5d4 = 0x700;
  DAT_0058918c = param_1;
  DAT_00589190 = param_2;
  DAT_0058919c = (*param_1)(0x10000,0x100,0,0x30fc);
  if (DAT_0058919c != 0) {
    temp_v9[0] = DAT_0058919c + 0x30ec;
    temp_v1 = DAT_0058919c + 0x868;
    temp_v2 = DAT_0058919c + 0x878;
    temp_v4 = DAT_0058919c + 0x10cc;
    temp_v5 = DAT_0058919c + 0x2840;
    temp_v0 = FUN_00160944();
    if ((((-1 < temp_v0) && (temp_v0 = FUN_001600b8(temp_v1), -1 < temp_v0)) &&
        (temp_v0 = FUN_00160f90(temp_v2), -1 < temp_v0)) &&
       ((FUN_001600fc(), -1 < temp_v4 && (temp_v0 = FUN_00160ddc(temp_v5), -1 < temp_v0)))) {
      FUN_0017cdb4();
      FUN_0017cff0(temp_v9[2]);
      puVar1 = DAT_0061a50c;
      if (DAT_0061a50c != (unsigned int *)0x0) {
        if (DAT_0061a50c[1] != 0) {
          in_r12 = DAT_00589190;
        }
        if (DAT_0061a50c[1] != 0 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x105,*DAT_0061a50c);
        }
        in_r12 = DAT_0058918c;
        if (DAT_0058918c == (romwright_code *)0x0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = (*DAT_0058918c)(0x10000,0x105,*puVar1,0x101c0);
        }
        puVar1[3] = 0;
        puVar1[8] = 0;
        puVar1[4] = 0;
        puVar1[10] = 0;
        puVar1[9] = 0;
        puVar1[0xd] = 0;
        puVar1[0xc] = 0;
        puVar1[1] = temp_v0;
        puVar1[2] = 0x10000;
        puVar1[6] = temp_v0 + 0x10000;
        puVar1[7] = 0x10;
        FUN_002e6354(temp_v0 + 0x10000,0x1c0);
        DAT_005b40e0 = puVar1[1];
        DAT_005b40e4 = puVar1[2] + DAT_005b40e0;
      }
      if (DAT_0061a50c != (unsigned int *)0x0) {
        DAT_0061a50c[0xb] = 0x300;
      }
      temp_v0 = FUN_0017cdb4();
      if ((temp_v0 == 0) && (temp_v0 = vldtr_initializeStateValidator(temp_v9[0]), -1 < temp_v0)) {
        temp_v3 = 2;
        DAT_005891a0 = DAT_005b40e0 - DAT_0061a50c[1];
        DAT_0061a50c[3] = DAT_005891a0;
        FUN_00170050();
        temp_v0 = FUN_001702e0();
        DAT_0061a484 = FUN_00170344();
        FUN_001702f8(&LAB_00161c5c,0);
        FUN_001702f8(&LAB_00161c60,1);
        FUN_001702f8(sys_PDC0Callback,2);
        FUN_001702f8(sys_PDC1Callback,3);
        FUN_001702f8(&LAB_00161c58,4);
        FUN_001702f8(&LAB_00161b8c,5);
        FUN_001702f8(&LAB_0017e4d4,6);
        if (temp_v0 != 0) {
          temp_v9[0] = 0;
          FUN_00170158(&LAB_00401000,temp_v9,4);
          temp_v9[0] = 0x12345678;
          FUN_00170158(&LAB_00401080,temp_v9,4);
          temp_v9[0] = -0x10;
          FUN_00170158(&LAB_004010c0,temp_v9,4);
          temp_v9[0] = 1;
          FUN_00170158(&LAB_004010d0,temp_v9,4);
          temp_v9[0] = 0x1c2;
          FUN_00170158(&LAB_00400400,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_00170158(&LAB_00400404,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_00170158(&LAB_00400408,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_00170158(&LAB_0040040c,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_00400410,temp_v9,4);
          temp_v9[0] = 0xcf;
          FUN_00170158(&LAB_00400414,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_00170158(&LAB_00400418,temp_v9,4);
          temp_v9[0] = 0x1c501c1;
          FUN_00170158(&LAB_0040041c,temp_v9,4);
          temp_v9[0] = 0x10000;
          FUN_00170158(&LAB_00400420,temp_v9,4);
          temp_v9[0] = 0x19d;
          FUN_00170158(&LAB_00400424,temp_v9,4);
          temp_v9[0] = 2;
          FUN_00170158(&LAB_00400428,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_00170158(&LAB_0040042c,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_00170158(&LAB_00400430,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_00170158(&LAB_00400434,temp_v9,4);
          temp_v9[0] = 1;
          FUN_00170158(&LAB_00400438,temp_v9,4);
          temp_v9[0] = 2;
          FUN_00170158(&LAB_0040043c,temp_v9,4);
          temp_v9[0] = 0x1960192;
          FUN_00170158(&LAB_00400440,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_00400444,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_00400448,temp_v9,4);
          temp_v9[0] = 0x19000f0;
          FUN_00170158(&LAB_0040045c,temp_v9,4);
          temp_v9[0] = 0x1c100d1;
          FUN_00170158(&LAB_00400460,temp_v9,4);
          temp_v9[0] = 0x1920002;
          FUN_00170158(&LAB_00400464,temp_v9,4);
          temp_v9[0] = 0x80340;
          FUN_00170158(&LAB_00400470,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_0040049c,temp_v9,4);
          temp_v9[0] = 0x1c2;
          FUN_00170158(&LAB_00400500,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_00170158(&LAB_00400504,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_00170158(&LAB_00400508,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_00170158(&LAB_0040050c,temp_v9,4);
          temp_v9[0] = 0xcd;
          FUN_00170158(&LAB_00400510,temp_v9,4);
          temp_v9[0] = 0xcf;
          FUN_00170158(&LAB_00400514,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_00170158(&LAB_00400518,temp_v9,4);
          temp_v9[0] = 0x1c501c1;
          FUN_00170158(&LAB_0040051c,temp_v9,4);
          temp_v9[0] = 0x10000;
          FUN_00170158(&LAB_00400520,temp_v9,4);
          temp_v9[0] = 0x19d;
          FUN_00170158(&LAB_00400524,temp_v9,4);
          temp_v9[0] = 0x52;
          FUN_00170158(&LAB_00400528,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_00170158(&LAB_0040052c,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_00170158(&LAB_00400530,temp_v9,4);
          temp_v9[0] = 0x4f;
          FUN_00170158(&LAB_00400534,temp_v9,4);
          temp_v9[0] = 0x50;
          FUN_00170158(&LAB_00400538,temp_v9,4);
          temp_v9[0] = 0x52;
          FUN_00170158(&LAB_0040053c,temp_v9,4);
          temp_v9[0] = 0x1980194;
          FUN_00170158(&LAB_00400540,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_00400544,temp_v9,4);
          temp_v9[0] = 0x11;
          FUN_00170158(&LAB_00400548,temp_v9,4);
          temp_v9[0] = 0x14000f0;
          FUN_00170158(&LAB_0040055c,temp_v9,4);
          temp_v9[0] = 0x1c100d1;
          FUN_00170158(&LAB_00400560,temp_v9,4);
          temp_v9[0] = 0x1920052;
          FUN_00170158(FUN_00400564,temp_v9,4);
          temp_v9[0] = 0x80300;
          FUN_00170158(&LAB_00400570,temp_v9,4);
          temp_v9[0] = 0;
          FUN_00170158(&LAB_0040059c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_00400468,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_0040046c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_00400568,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_0040056c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_00400494,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_00170158(&LAB_00400498,temp_v9,4);
          temp_v9[0] = 1;
          FUN_00170158(&LAB_00400478,temp_v9,4);
          temp_v9[0] = 1;
          FUN_00170158(&LAB_00400578,temp_v9,4);
          temp_v9[1] = 0xff00;
          temp_v9[0] = 0;
          FUN_001702ac(&LAB_00400c18,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x70100;
          FUN_00170158(&LAB_00400004,temp_v9);
          temp_v9[0] = 0;
          temp_v9[1] = 0xff;
          FUN_001702ac(&LAB_0040001c,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0;
          temp_v9[1] = 0xff;
          FUN_001702ac(&LAB_0040002c,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x22221200;
          FUN_00170158(&LAB_00400050,temp_v9,4);
          temp_v9[0] = 0xff2;
          temp_v9[1] = 0xffff;
          FUN_001702ac(&LAB_00400054,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x10501;
          FUN_00170158(&LAB_00400474,temp_v9,4);
          temp_v9[0] = 0x10501;
          FUN_00170158(&LAB_00400574,temp_v9,4);
          FUN_0017dd84();
          puVar1 = DAT_0061a50c;
          puVar7 = (unsigned char *)(DAT_0061a50c[6] + DAT_0061a50c[8] * 0x1c);
          *puVar7 = 3;
          *(unsigned int *)(puVar7 + 0x14) = (*(unsigned int *)(puVar7 + 0x14) & 0xfffffff8) | 4;
          temp_v4 = nngxGetVramEndAddr(0x30000);
          *(int *)(puVar7 + 4) = temp_v4 - 0x7fff;
          if ((DAT_0058918c == (romwright_code *)0x0) ||
             (in_r12 = DAT_0058918c, temp_v3 = (*DAT_0058918c)(0x10000,0x100,0,0x8010), temp_v3 == 0)) {
            FUN_001612f4(1,temp_v9 + 2);
            return 0;
          }
          *(unsigned int *)(puVar7 + 8) = temp_v3;
          if ((temp_v3 & 0xf) != 0) {
            *(unsigned int *)(puVar7 + 8) = temp_v3 + (0x10 - (temp_v3 & 0xf));
          }
          *(unsigned short *)(puVar7 + 0xc) = 0x80;
          *(unsigned short *)(puVar7 + 0xe) = 0x80;
          *(unsigned short *)(puVar7 + 0x10) = 0x80;
          *(unsigned short *)(puVar7 + 0x12) = 0x80;
          *(unsigned int *)(puVar7 + 0x14) = (*(unsigned int *)(puVar7 + 0x14) & 0xfffff007) | 0x20;
          puVar1[8] = puVar1[8] + 1;
        }
        else {
          FUN_0017dd84();
        }
        if ((DAT_0061a50c != (unsigned int *)0x0) && (DAT_0061a481 == '\0')) {
          DAT_0061a510 = DAT_0061a50c;
          DAT_0061a482 = 1;
          if (((int)DAT_0061a50c[10] < (int)DAT_0061a50c[8]) &&
             (DAT_0061a481 = '\x01', DAT_0061a50c[0xb] == 0x300)) {
            FUN_0018b600();
            FUN_001963e0();
            FUN_0018b610();
          }
        }
        temp_v7 = 0;
        if (DAT_0061a5ec != 0 || DAT_0061a5e8 != 0) {
          temp_v7 = FUN_001623d0();
        }
        do {
          if (DAT_0061a481 == '\0') {
LAB_0014a6cc:
            if (temp_v0 != 0) {
              in_r12 = DAT_00589190;
            }
            if (temp_v0 != 0 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0,temp_v3);
            }
            puVar1 = DAT_0061a510;
            if (DAT_0061a510 != (unsigned int *)0x0) {
              FUN_0018b600();
              if (DAT_0061a481 == '\0') {
                DAT_0061a482 = 0;
              }
              else {
                *(unsigned char *)(puVar1[6] + (puVar1[9] * 0x1c - 0x1a)) = 1;
                DAT_0061a488 = 1;
              }
              FUN_0018b610();
            }
            FUN_0017cff0(0);
            FUN_001612f4(1,temp_v9 + 2);
            DAT_0061a480 = 1;
            return 1;
          }
          if (DAT_0061a5e8 != 0 || DAT_0061a5ec != 0) {
            temp_v8 = FUN_001623d0();
            temp_v4 = (int)((unsigned long long)temp_v8 >> 0x20) -
                    ((int)((unsigned long long)temp_v7 >> 0x20) + (unsigned int)((unsigned int)temp_v8 < (unsigned int)temp_v7));
            temp_v6 = DAT_0061a5e8 < (unsigned int)temp_v8 - (unsigned int)temp_v7;
            if ((int)(DAT_0061a5ec - (temp_v4 + (unsigned int)temp_v6)) < 0 !=
                (SBORROW4(DAT_0061a5ec,temp_v4) != SBORROW4(DAT_0061a5ec - temp_v4,(unsigned int)temp_v6))) {
              if (DAT_0061a5e0 != (romwright_code *)0x0) {
                (*DAT_0061a5e0)();
              }
              goto LAB_0014a6cc;
            }
          }
          FUN_00170184();
        } while( 1 );
      }
    }
  }
  FUN_001612f4(1,temp_v9 + 2);
  return 0;
}
