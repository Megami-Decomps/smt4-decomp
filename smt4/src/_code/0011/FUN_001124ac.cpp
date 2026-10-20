/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001124ac` (_code @ 0x1124ac, 0xca4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122224(void);
int FUN_00123254(...);
int FUN_001299f8(void);
int FUN_00129b00(void);
int FUN_00129d00(...);
int FUN_00129d4c(...);
int nngxLockEnter(void);
int nngxLockLeave(void);
int FUN_002ba2b8(void);
int FUN_002ba51c(...);
int FUN_002bdb48(void);
int nngxBindCmdlist(...);
int nngxGetError(void);
int memClear(...);
int SBORROW4(...);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00123ab0; /* 0x123ab0 */
extern int sys_PDC0Callback(...); /* 0x123af0 */
extern int sys_PDC1Callback(...); /* 0x123b34 */
extern unsigned char LAB_00123b7c; /* 0x123b7c */
extern unsigned char LAB_00123b80; /* 0x123b80 */
extern unsigned char LAB_00123b84; /* 0x123b84 */
extern unsigned char LAB_002b39ec; /* 0x2b39ec */
extern unsigned char DAT_00400004; /* 0x400004 */
extern unsigned char DAT_0040001c; /* 0x40001c */
extern unsigned char DAT_0040002c; /* 0x40002c */
extern unsigned char DAT_00400050; /* 0x400050 */
extern unsigned char DAT_00400054; /* 0x400054 */
extern unsigned char DAT_00400400; /* 0x400400 */
extern unsigned char DAT_00400404; /* 0x400404 */
extern unsigned char DAT_00400408; /* 0x400408 */
extern unsigned char DAT_0040040c; /* 0x40040c */
extern unsigned char DAT_00400410; /* 0x400410 */
extern unsigned char DAT_00400414; /* 0x400414 */
extern unsigned char DAT_00400418; /* 0x400418 */
extern unsigned char DAT_0040041c; /* 0x40041c */
extern unsigned char DAT_00400420; /* 0x400420 */
extern unsigned char DAT_00400424; /* 0x400424 */
extern unsigned char DAT_00400440; /* 0x400440 */
extern unsigned char DAT_0040045c; /* 0x40045c */
extern unsigned char DAT_00400460; /* 0x400460 */
extern unsigned char DAT_00400464; /* 0x400464 */
extern unsigned char DAT_00400494; /* 0x400494 */
extern unsigned char DAT_00400498; /* 0x400498 */
extern unsigned char DAT_0040049c; /* 0x40049c */
extern unsigned char DAT_00400500; /* 0x400500 */
extern unsigned char DAT_00400504; /* 0x400504 */
extern unsigned char DAT_00400508; /* 0x400508 */
extern unsigned char DAT_0040056c; /* 0x40056c */
extern unsigned char DAT_00400570; /* 0x400570 */
extern unsigned char DAT_00400574; /* 0x400574 */
extern unsigned char DAT_00400578; /* 0x400578 */
extern unsigned char DAT_0040059c; /* 0x40059c */
extern unsigned char DAT_00400c18; /* 0x400c18 */
extern unsigned char DAT_00401000; /* 0x401000 */
extern unsigned char DAT_00401080; /* 0x401080 */
extern unsigned char DAT_004010c0; /* 0x4010c0 */
extern unsigned char DAT_004010d0; /* 0x4010d0 */
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern unsigned int DAT_0044e338; /* 0x44e338 */
extern unsigned int DAT_0044e33c; /* 0x44e33c */
extern int DAT_0044e340; /* 0x44e340 */
extern int DAT_0044e344; /* 0x44e344 */
extern int g_commandBufferCursor; /* 0x4652a0 */
extern int g_commandBufferEnd; /* 0x4652a4 */
extern unsigned int g_asdGfxContext; /* 0x4c6290 */
extern unsigned int DAT_004c6294; /* 0x4c6294 */
extern unsigned int DAT_004c6298; /* 0x4c6298 */
extern unsigned int DAT_004c629c; /* 0x4c629c */
extern signed char DAT_004c62a0; /* 0x4c62a0 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned int DAT_004c62a4; /* 0x4c62a4 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */
extern unsigned int *DAT_004c6330; /* 0x4c6330 */
extern unsigned int DAT_004c63f4; /* 0x4c63f4 */
extern romwright_code *DAT_004c6400; /* 0x4c6400 */
extern unsigned int DAT_004c6408; /* 0x4c6408 */
extern int DAT_004c640c; /* 0x4c640c */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001221e0(int);
/* Supplied declaration required: FUN_00122224. */
extern int FUN_00122a6c(void);
extern int FUN_00122f04(int);
extern int FUN_001230b8(int);
/* Supplied declaration required: FUN_00123254. */
extern unsigned long long FUN_0012419c(void);
/* Supplied declaration required: FUN_001299f8. */
/* Supplied declaration required: FUN_00129b00. */
/* Supplied declaration required: FUN_00129d00. */
extern int FUN_00129d34(void);
/* Supplied declaration required: FUN_00129d4c. */
extern unsigned int FUN_00129d98(void);
/* Supplied declaration required: nngxLockEnter. */
/* Supplied declaration required: nngxLockLeave. */
/* Supplied declaration required: FUN_002ba2b8. */
/* Supplied declaration required: FUN_002ba51c. */
/* Supplied declaration required: FUN_002bdb48. */
/* Supplied declaration required: nngxBindCmdlist. */
/* Supplied declaration required: nngxGetError. */
/* Supplied declaration required: memClear. */
extern int nngxGetVramEndAddr(unsigned int);
extern int vldtr_initializeStateValidator(int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_001124ac(romwright_code *param_1,romwright_code *param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_r12; 18 native warning(s); review required */
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
  if ((param_1 == (romwright_code *)0x0 || param_2 == (romwright_code *)0x0) || (DAT_004c62a0 != '\0')) {
    return 0;
  }
  memClear(&g_asdGfxContext,0x180);
  g_asdGfxContext = 0xf0;
  DAT_004c6294 = 0xf0;
  DAT_004c6298 = 400;
  DAT_004c629c = 0x140;
  DAT_0044e33c = 1;
  DAT_0044e338 = 1;
  DAT_004c63f4 = 0x700;
  DAT_0044e330 = param_1;
  DAT_0044e334 = param_2;
  DAT_0044e340 = (*param_1)(0x10000,0x100,0,0x30fc);
  if (DAT_0044e340 != 0) {
    temp_v9[0] = DAT_0044e340 + 0x30ec;
    temp_v1 = DAT_0044e340 + 0x868;
    temp_v2 = DAT_0044e340 + 0x878;
    temp_v4 = DAT_0044e340 + 0x10cc;
    temp_v5 = DAT_0044e340 + 0x2840;
    temp_v0 = FUN_00122a6c();
    if ((((-1 < temp_v0) && (temp_v0 = FUN_001221e0(temp_v1), -1 < temp_v0)) &&
        (temp_v0 = FUN_001230b8(temp_v2), -1 < temp_v0)) &&
       ((FUN_00122224(), -1 < temp_v4 && (temp_v0 = FUN_00122f04(temp_v5), -1 < temp_v0)))) {
      nngxGetError();
      nngxBindCmdlist(temp_v9[2]);
      puVar1 = DAT_004c632c;
      if (DAT_004c632c != (unsigned int *)0x0) {
        if (DAT_004c632c[1] != 0) {
          in_r12 = DAT_0044e334;
        }
        if (DAT_004c632c[1] != 0 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x105,*DAT_004c632c);
        }
        in_r12 = DAT_0044e330;
        if (DAT_0044e330 == (romwright_code *)0x0) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = (*DAT_0044e330)(0x10000,0x105,*puVar1,0x101c0);
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
        memClear(temp_v0 + 0x10000,0x1c0);
        g_commandBufferCursor = puVar1[1];
        g_commandBufferEnd = puVar1[2] + g_commandBufferCursor;
      }
      if (DAT_004c632c != (unsigned int *)0x0) {
        DAT_004c632c[0xb] = 0x300;
      }
      temp_v0 = nngxGetError();
      if ((temp_v0 == 0) && (temp_v0 = vldtr_initializeStateValidator(temp_v9[0]), -1 < temp_v0)) {
        temp_v3 = 2;
        DAT_0044e344 = g_commandBufferCursor - DAT_004c632c[1];
        DAT_004c632c[3] = DAT_0044e344;
        FUN_001299f8();
        temp_v0 = FUN_00129d34();
        DAT_004c62a4 = FUN_00129d98();
        FUN_00129d4c(&LAB_00123b80,0);
        FUN_00129d4c(&LAB_00123b84,1);
        FUN_00129d4c(sys_PDC0Callback,2);
        FUN_00129d4c(sys_PDC1Callback,3);
        FUN_00129d4c(&LAB_00123b7c,4);
        FUN_00129d4c(&LAB_00123ab0,5);
        FUN_00129d4c(&LAB_002b39ec,6);
        if (temp_v0 != 0) {
          temp_v9[0] = 0;
          FUN_002ba51c(&DAT_00401000,temp_v9,4);
          temp_v9[0] = 0x12345678;
          FUN_002ba51c(&DAT_00401080,temp_v9,4);
          temp_v9[0] = -0x10;
          FUN_002ba51c(&DAT_004010c0,temp_v9,4);
          temp_v9[0] = 1;
          FUN_002ba51c(&DAT_004010d0,temp_v9,4);
          temp_v9[0] = 0x1c2;
          FUN_002ba51c(&DAT_00400400,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_002ba51c(&DAT_00400404,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_002ba51c(&DAT_00400408,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_002ba51c(&DAT_0040040c,temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c(&DAT_00400410,temp_v9,4);
          temp_v9[0] = 0xcf;
          FUN_002ba51c(&DAT_00400414,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_002ba51c(&DAT_00400418,temp_v9,4);
          temp_v9[0] = 0x1c501c1;
          FUN_002ba51c(&DAT_0040041c,temp_v9,4);
          temp_v9[0] = 0x10000;
          FUN_002ba51c(&DAT_00400420,temp_v9,4);
          temp_v9[0] = 0x19d;
          FUN_002ba51c(&DAT_00400424,temp_v9,4);
          temp_v9[0] = 2;
          FUN_002ba51c("commonDw",temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_002ba51c((char *)0x40042c,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_002ba51c((char *)0x400430,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_002ba51c("commonUp",temp_v9,4);
          temp_v9[0] = 1;
          FUN_002ba51c((char *)0x400438,temp_v9,4);
          temp_v9[0] = 2;
          FUN_002ba51c((char *)0x40043c,temp_v9,4);
          temp_v9[0] = 0x1960192;
          FUN_002ba51c(&DAT_00400440,temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c("battle/AI/%s.bf",temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c((char *)0x400448,temp_v9,4);
          temp_v9[0] = 0x19000f0;
          FUN_002ba51c(&DAT_0040045c,temp_v9,4);
          temp_v9[0] = 0x1c100d1;
          FUN_002ba51c(&DAT_00400460,temp_v9,4);
          temp_v9[0] = 0x1920002;
          FUN_002ba51c(&DAT_00400464,temp_v9,4);
          temp_v9[0] = 0x80340;
          FUN_002ba51c((char *)0x400470,temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c(&DAT_0040049c,temp_v9,4);
          temp_v9[0] = 0x1c2;
          FUN_002ba51c(&DAT_00400500,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_002ba51c(&DAT_00400504,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_002ba51c(&DAT_00400508,temp_v9,4);
          temp_v9[0] = 0x1c1;
          FUN_002ba51c("btl Result Menu",temp_v9,4);
          temp_v9[0] = 0xcd;
          FUN_002ba51c((char *)0x400510,temp_v9,4);
          temp_v9[0] = 0xcf;
          FUN_002ba51c((char *)0x400514,temp_v9,4);
          temp_v9[0] = 0xd1;
          FUN_002ba51c((char *)0x400518,temp_v9,4);
          temp_v9[0] = 0x1c501c1;
          FUN_002ba51c("btl Panel Menu",temp_v9,4);
          temp_v9[0] = 0x10000;
          FUN_002ba51c((char *)0x400520,temp_v9,4);
          temp_v9[0] = 0x19d;
          FUN_002ba51c((char *)0x400524,temp_v9,4);
          temp_v9[0] = 0x52;
          FUN_002ba51c((char *)0x400528,temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_002ba51c("btl Talk Menu",temp_v9,4);
          temp_v9[0] = 0x192;
          FUN_002ba51c((char *)0x400530,temp_v9,4);
          temp_v9[0] = 0x4f;
          FUN_002ba51c((char *)0x400534,temp_v9,4);
          temp_v9[0] = 0x50;
          FUN_002ba51c((char *)0x400538,temp_v9,4);
          temp_v9[0] = 0x52;
          FUN_002ba51c("btl Bad Menu",temp_v9,4);
          temp_v9[0] = 0x1980194;
          FUN_002ba51c((char *)0x400540,temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c((char *)0x400544,temp_v9,4);
          temp_v9[0] = 0x11;
          FUN_002ba51c((char *)0x400548,temp_v9,4);
          temp_v9[0] = 0x14000f0;
          FUN_002ba51c("btl Camera Menu",temp_v9,4);
          temp_v9[0] = 0x1c100d1;
          FUN_002ba51c((char *)0x400560,temp_v9,4);
          temp_v9[0] = 0x1920052;
          FUN_002ba51c((char *)0x400564,temp_v9,4);
          temp_v9[0] = 0x80300;
          FUN_002ba51c(&DAT_00400570,temp_v9,4);
          temp_v9[0] = 0;
          FUN_002ba51c(&DAT_0040059c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c("battle/army_summon/army_summon.bccam",temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c((char *)0x40046c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c((char *)0x400568,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c(&DAT_0040056c,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c(&DAT_00400494,temp_v9,4);
          temp_v9[0] = 0x18300000;
          FUN_002ba51c(&DAT_00400498,temp_v9,4);
          temp_v9[0] = 1;
          FUN_002ba51c((char *)0x400478,temp_v9,4);
          temp_v9[0] = 1;
          FUN_002ba51c(&DAT_00400578,temp_v9,4);
          temp_v9[1] = 0xff00;
          temp_v9[0] = 0;
          FUN_00129d00(&DAT_00400c18,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x70100;
          FUN_002ba51c(&DAT_00400004,temp_v9);
          temp_v9[0] = 0;
          temp_v9[1] = 0xff;
          FUN_00129d00(&DAT_0040001c,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0;
          temp_v9[1] = 0xff;
          FUN_00129d00(&DAT_0040002c,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x22221200;
          FUN_002ba51c(&DAT_00400050,temp_v9,4);
          temp_v9[0] = 0xff2;
          temp_v9[1] = 0xffff;
          FUN_00129d00(&DAT_00400054,temp_v9,temp_v9 + 1,4);
          temp_v9[0] = 0x10501;
          FUN_002ba51c((char *)0x400474,temp_v9,4);
          temp_v9[0] = 0x10501;
          FUN_002ba51c(&DAT_00400574,temp_v9,4);
          FUN_002bdb48();
          puVar1 = DAT_004c632c;
          puVar7 = (unsigned char *)(DAT_004c632c[6] + DAT_004c632c[8] * 0x1c);
          *puVar7 = 3;
          *(unsigned int *)(puVar7 + 0x14) = (*(unsigned int *)(puVar7 + 0x14) & 0xfffffff8) | 4;
          temp_v4 = nngxGetVramEndAddr(0x30000);
          *(int *)(puVar7 + 4) = temp_v4 - 0x7fff;
          if ((DAT_0044e330 == (romwright_code *)0x0) ||
             (in_r12 = DAT_0044e330, temp_v3 = (*DAT_0044e330)(0x10000,0x100,0,0x8010), temp_v3 == 0)) {
            FUN_00123254(1,temp_v9 + 2);
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
          FUN_002bdb48();
        }
        if ((DAT_004c632c != (unsigned int *)0x0) && (DAT_004c62a1 == '\0')) {
          DAT_004c6330 = DAT_004c632c;
          DAT_004c62a2 = 1;
          if (((int)DAT_004c632c[10] < (int)DAT_004c632c[8]) &&
             (DAT_004c62a1 = '\x01', DAT_004c632c[0xb] == 0x300)) {
            nngxLockEnter();
            FUN_002ba2b8();
            nngxLockLeave();
          }
        }
        temp_v7 = 0;
        if (DAT_004c640c != 0 || DAT_004c6408 != 0) {
          temp_v7 = FUN_0012419c();
        }
        do {
          if (DAT_004c62a1 == '\0') {
LAB_00113098:
            if (temp_v0 != 0) {
              in_r12 = DAT_0044e334;
            }
            if (temp_v0 != 0 && in_r12 != (romwright_code *)0x0) {
              (*in_r12)(0x10000,0x100,0,temp_v3);
            }
            puVar1 = DAT_004c6330;
            if (DAT_004c6330 != (unsigned int *)0x0) {
              nngxLockEnter();
              if (DAT_004c62a1 == '\0') {
                DAT_004c62a2 = 0;
              }
              else {
                *(unsigned char *)(puVar1[6] + (puVar1[9] * 0x1c - 0x1a)) = 1;
                DAT_004c62a8 = 1;
              }
              nngxLockLeave();
            }
            nngxBindCmdlist(0);
            FUN_00123254(1,temp_v9 + 2);
            DAT_004c62a0 = 1;
            return 1;
          }
          if (DAT_004c6408 != 0 || DAT_004c640c != 0) {
            temp_v8 = FUN_0012419c();
            temp_v4 = (int)((unsigned long long)temp_v8 >> 0x20) -
                    ((int)((unsigned long long)temp_v7 >> 0x20) + (unsigned int)((unsigned int)temp_v8 < (unsigned int)temp_v7));
            temp_v6 = DAT_004c6408 < (unsigned int)temp_v8 - (unsigned int)temp_v7;
            if ((int)(DAT_004c640c - (temp_v4 + (unsigned int)temp_v6)) < 0 !=
                (SBORROW4(DAT_004c640c,temp_v4) != SBORROW4(DAT_004c640c - temp_v4,(unsigned int)temp_v6))) {
              if (DAT_004c6400 != (romwright_code *)0x0) {
                (*DAT_004c6400)();
              }
              goto LAB_00113098;
            }
          }
          FUN_00129b00();
        } while( 1 );
      }
    }
  }
  FUN_00123254(1,temp_v9 + 2);
  return 0;
}

} /* extern "C" */
