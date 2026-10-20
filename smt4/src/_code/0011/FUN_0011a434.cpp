/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a434` (_code @ 0x11a434, 0x658 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b6b8c(...);
int FUN_002b6c34(...);
int FUN_002b6db0(...);
int FUN_002b6dd8(...);
int FUN_002b90f8(int, unsigned char [84]);
int FUN_002ba12c(int);
int FUN_002be370(...);
int FUN_002be5a4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf538(void);
int mtx44Copy(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int VectorSignedToFloat(...);
int nn_math_ARMv6_MTX44MultAsm(unsigned char [84], unsigned char [84], int *);

typedef int romwright_code(...);
/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
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
} void_stack;

extern int DAT_0043e0f8; /* 0x43e0f8 */
extern int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b6b8c. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002b6db0. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b90f8. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


unsigned int FUN_0011a434(void)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int unaff_r6;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int uStack_74;
  unsigned char temp_v24 [84];
  
  temp_v0 = DAT_0043e0f8;
  if (*(int *)(DAT_0043e0f8 + 8) != 0) {
    FUN_002c39a4(g_titleScene);
    temp_v2 = g_titleScene;
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v2 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    temp_v5 = 0.29f;
    FUN_002ba12c(g_titleScene);
    FUN_002bf538();
    temp_v8 = *(unsigned int *)(temp_v0 + 0x60);
    temp_v7 = 0x3f800000;
    temp_v6 = 0;
    if (((DAT_00476638 & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_00476638), temp_v2 != 0)) {
      DAT_004efd9c = temp_v7;
      DAT_004efda0 = temp_v6;
      DAT_004efda4 = temp_v6;
      DAT_004efda8 = temp_v6;
      DAT_004efdac = temp_v6;
      DAT_004efdb0 = temp_v7;
      DAT_004efdb4 = temp_v6;
      DAT_004efdb8 = temp_v6;
      DAT_004efdbc = temp_v6;
      DAT_004efdc0 = temp_v6;
      DAT_004efdc4 = temp_v7;
      DAT_004efdc8 = temp_v6;
      DAT_004efdcc = temp_v6;
      DAT_004efdd0 = temp_v6;
      DAT_004efdd4 = temp_v6;
      DAT_004efdd8 = temp_v7;
    }
    mtx44Copy(temp_v24,&DAT_004efd9c);
    if (((DAT_00476638 & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_00476638), temp_v2 != 0)) {
      DAT_004efd9c = temp_v7;
      DAT_004efda0 = temp_v6;
      DAT_004efda4 = temp_v6;
      DAT_004efda8 = temp_v6;
      DAT_004efdac = temp_v6;
      DAT_004efdb0 = temp_v7;
      DAT_004efdb4 = temp_v6;
      DAT_004efdb8 = temp_v6;
      DAT_004efdbc = temp_v6;
      DAT_004efdc0 = temp_v6;
      DAT_004efdc4 = temp_v7;
      DAT_004efdc8 = temp_v6;
      DAT_004efdcc = temp_v6;
      DAT_004efdd0 = temp_v6;
      DAT_004efdd4 = temp_v6;
      DAT_004efdd8 = temp_v7;
    }
    mtx44Copy(&temp_v9,&DAT_004efd9c);
    if (*(char *)(temp_v0 + 0x12) == '\0') {
      unaff_r6 = FUN_002bf4f8(0xe,0xdc);
    }
    if (*(char *)(temp_v0 + 0x12) == '\x01') {
      unaff_r6 = FUN_002bf4f8(0xe,0xdd);
    }
    temp_v10 = 0;
    temp_v9 = 0x3f800000;
    temp_v12 = VectorSignedToFloat((int)*(short *)(unaff_r6 + 8) +
                                   (int)temp_v5 + (int)**(short **)(unaff_r6 + 0xc) / 2,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v16 = VectorSignedToFloat((int)*(short *)(unaff_r6 + 10) +
                                   (int)(*(short **)(unaff_r6 + 0xc))[1] / 2,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = 0;
    temp_v13 = 0;
    temp_v14 = 0x3f800000;
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0x3f800000;
    temp_v23 = 0;
    uStack_74 = 0x3f800000;
    temp_v21 = 0;
    temp_v22 = 0;
    temp_v20 = temp_v6;
    nn_math_ARMv6_MTX44MultAsm(temp_v24,temp_v24,&temp_v9);
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v23 = 0;
    uStack_74 = 0x3f800000;
    temp_v20 = 0;
    temp_v21 = 0;
    temp_v22 = 0;
    temp_v9 = temp_v8;
    temp_v14 = temp_v8;
    temp_v19 = temp_v8;
    nn_math_ARMv6_MTX44MultAsm(temp_v24,temp_v24,&temp_v9);
    temp_v2 = FUN_002bf4f8(0xe,0x15);
    temp_v10 = 0;
    temp_v12 = VectorSignedToFloat(-((int)**(short **)(temp_v2 + 0xc) / 2 + 4),
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = 0x3f800000;
    temp_v16 = VectorSignedToFloat(-((int)(*(short **)(temp_v2 + 0xc))[1] / 2 + 4),
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = 0;
    temp_v13 = 0;
    temp_v14 = 0x3f800000;
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0x3f800000;
    temp_v23 = 0;
    uStack_74 = 0x3f800000;
    temp_v21 = 0;
    temp_v22 = 0;
    temp_v20 = temp_v6;
    nn_math_ARMv6_MTX44MultAsm(temp_v24,temp_v24,&temp_v9);
    FUN_002b90f8(g_titleScene,temp_v24);
    if (*(int *)(temp_v0 + 8) == 2) {
      FUN_002bf538();
    }
    temp_v1 = g_titleScene;
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v1 + 0x12ac);
    temp_v4 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v3;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002bf380(2,0xe,3,0,0,0x65);
    temp_v1 = g_titleScene;
    temp_v3 = packNibblesAndByte(6,7,0);
    piVar6 = (int *)(temp_v1 + 0x12ac);
    temp_v4 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v3;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v4 != temp_v3) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002bf538();
    FUN_002bf380(2,0xe,2,0,0,0x6a);
    if (*(char *)(temp_v0 + 0x10) != '\0') {
      if (*(char *)(temp_v0 + 0x12) == '\0') {
        temp_v2 = FUN_002bf4f8(0xe,0xdc);
      }
      if (*(char *)(temp_v0 + 0x12) == '\x01') {
        temp_v2 = FUN_002bf4f8(0xe,0xdd);
      }
      temp_v1 = temp_v0 + 0x154;
      FUN_002b6dd8(temp_v1,4);
      temp_v2 = (**(short **)(temp_v2 + 0xc) - temp_v1) / 2;
      VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(4,0xff,temp_v0 + 0x154);
      if (*(int *)(temp_v0 + 0x14) == 1) {
        FUN_002bf288(2,0xe,0xdf,temp_v2 - 0xd,7,0x6f);
        FUN_002bf288(2,0xe,0xde,temp_v2 - 0xd,7,0x74);
      }
      if (*(int *)(temp_v0 + 0x14) == 4) {
        FUN_002b6db0((int)*(short *)(temp_v0 + 0x18),temp_v2 - 0xd,8,0x79);
      }
      if (*(int *)(temp_v0 + 0x14) == 2) {
        FUN_002b6c34((int)*(short *)(temp_v0 + 0x18),temp_v2 - 0xd,8,0x79,(int)*(char *)(temp_v0 + 0x11),0
                    );
      }
      if (*(int *)(temp_v0 + 0x14) == 3) {
        FUN_002be370((int)*(short *)(temp_v0 + 0x18),temp_v2 - 0xd,8,0x79,0);
      }
      if (*(int *)(temp_v0 + 0x14) == 5) {
        FUN_002b6b8c(*(unsigned short *)(temp_v0 + 0x18),temp_v2 - 0xd,8,0x79);
      }
    }
    FUN_002c198c(g_titleScene);
    FUN_002bf538();
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v2 = *piVar6;
    temp_v1 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
