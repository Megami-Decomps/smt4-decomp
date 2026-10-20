/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015519c` (_code @ 0x15519c, 0x6a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(...);
int FUN_00165778(...);
int FUN_0016631c(...);
int efctSetSpeed(void);
int FUN_00167860(...);
int FUN_00168470(...);
int FUN_001689e8(...);
int FUN_0016c560(...);
int FUN_001835b4(...);
int FUN_0018408c(...);
int FUN_001879d0(int);
int camSetMatrixA(int, unsigned char [84]);
int mtx44Copy(...);
int FUN_0019a0fc(unsigned char [84], unsigned char [84], int *);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 17 slot(s), 68 byte(s) */
typedef struct {
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
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} void_stack;

extern int g_menuState; /* 0x57f56c */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_00165778. */
/* Supplied declaration required: FUN_0016631c. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_00167860. */
/* Supplied declaration required: FUN_00168470. */
/* Supplied declaration required: FUN_001689e8. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: camSetMatrixA. */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */


unsigned int FUN_0015519c(void)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  int unaff_r8;
  unsigned int in_fpscr;
  float temp_v7;
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
  unsigned int uStack_7c;
  unsigned char temp_v24 [84];
  
  temp_v0 = g_menuState;
  if (*(int *)(g_menuState + 8) != 0) {
    FUN_00157558(g_renderCtx);
    temp_v6 = g_renderCtx;
    temp_v1 = FUN_001692ac(1,0);
    piVar7 = (int *)(temp_v6 + 0x1258);
    temp_v3 = *piVar7;
    temp_v4 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 + 1;
    piVar7[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v6 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x1274))();
      *(unsigned char *)(temp_v6 + 0x1270) = 0;
    }
    temp_v7 = 0.29f;
    FUN_001879d0(g_renderCtx);
    efctSetSpeed();
    temp_v8 = *(unsigned int *)(temp_v0 + 0x60);
    temp_v2 = FUN_0018aeb8();
    mtx44Copy(temp_v24,temp_v2);
    temp_v2 = FUN_0018aeb8();
    mtx44Copy(&temp_v9,temp_v2);
    temp_v6 = 0;
    if (*(int *)(temp_v0 + 0x14) == 5) {
      temp_v6 = -0x3c;
    }
    if (*(char *)(temp_v0 + 0x12) == '\0') {
      unaff_r8 = FUN_001834a4(8,0xdc);
    }
    if (*(char *)(temp_v0 + 0x12) == '\x01') {
      unaff_r8 = FUN_001834a4(8,0xdd);
    }
    temp_v2 = 0;
    temp_v10 = 0;
    temp_v9 = 0x3f800000;
    temp_v12 = VectorSignedToFloat((int)*(short *)(unaff_r8 + 8) +
                                   (int)temp_v7 + (int)**(short **)(unaff_r8 + 0xc) / 2,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v16 = VectorSignedToFloat((int)*(short *)(unaff_r8 + 10) +
                                   (int)(*(short **)(unaff_r8 + 0xc))[1] / 2,
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = 0;
    temp_v13 = 0;
    temp_v14 = 0x3f800000;
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0x3f800000;
    temp_v20 = 0;
    temp_v23 = 0;
    uStack_7c = 0x3f800000;
    temp_v21 = 0;
    temp_v22 = 0;
    FUN_0019a0fc(temp_v24,temp_v24,&temp_v9);
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v15 = 0;
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v23 = 0;
    uStack_7c = 0x3f800000;
    temp_v20 = 0;
    temp_v21 = 0;
    temp_v22 = 0;
    temp_v9 = temp_v8;
    temp_v14 = temp_v8;
    temp_v19 = temp_v8;
    FUN_0019a0fc(temp_v24,temp_v24,&temp_v9);
    temp_v1 = FUN_001834a4(8,0x15);
    temp_v10 = 0;
    temp_v12 = VectorSignedToFloat(-((int)**(short **)(temp_v1 + 0xc) / 2 + 4),
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = 0x3f800000;
    temp_v16 = VectorSignedToFloat(-((int)(*(short **)(temp_v1 + 0xc))[1] / 2 + 4),
                                   (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = 0;
    temp_v13 = 0;
    temp_v14 = 0x3f800000;
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v18 = 0;
    temp_v19 = 0x3f800000;
    temp_v23 = 0;
    uStack_7c = 0x3f800000;
    temp_v21 = 0;
    temp_v22 = 0;
    temp_v20 = temp_v2;
    FUN_0019a0fc(temp_v24,temp_v24,&temp_v9);
    camSetMatrixA(g_renderCtx,temp_v24);
    if (*(int *)(temp_v0 + 8) == 2) {
      efctSetSpeed();
    }
    temp_v3 = g_renderCtx;
    if ((*(char *)(temp_v0 + 0x2b1) != '\0') && (*(int *)(temp_v0 + 0x2b4) >= 0)) {
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      FUN_00164b5c(2,8,0x19,0,0,0x65);
      temp_v3 = g_renderCtx;
      temp_v4 = FUN_00169294(6,7,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      efctSetSpeed();
      temp_v2 = 0x18;
      temp_v3 = 0;
    }
    else {
      temp_v4 = FUN_00169294(6,1,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      FUN_00164b5c(2,8,3,0,temp_v6,0x65);
      temp_v3 = g_renderCtx;
      temp_v4 = FUN_00169294(6,7,0);
      piVar7 = (int *)(temp_v3 + 0x12b8);
      temp_v5 = piVar7[*piVar7 + 2];
      piVar7[*piVar7 + 2] = temp_v4;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v5 != temp_v4) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      efctSetSpeed();
      temp_v2 = 2;
      temp_v3 = temp_v6;
    }
    FUN_00164b5c(2,8,temp_v2,0,temp_v3,0x6a);
    if (*(char *)(temp_v0 + 0x10) != '\0') {
      if (*(char *)(temp_v0 + 0x12) == '\0') {
        temp_v1 = FUN_001834a4(8,0xdc);
      }
      if (*(char *)(temp_v0 + 0x12) == '\x01') {
        temp_v1 = FUN_001834a4(8,0xdd);
      }
      if (*(int *)(temp_v0 + 0x14) != 2) {
        if (*(int *)(temp_v0 + 0x14) != 6) {
          temp_v3 = temp_v0 + 0x26c;
          FUN_0018408c(temp_v3,4);
          temp_v1 = (**(short **)(temp_v1 + 0xc) - temp_v3) / 2;
          VectorSignedToFloat(temp_v6 + 6,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(4,0xffffffff,temp_v0 + 0x26c,temp_v6 + 6);
          if (*(int *)(temp_v0 + 0x14) == 1) {
            FUN_001835b4(2,8,0xdf,temp_v1 - 0xd,7,0x6f);
            FUN_001835b4(2,8,0xde,temp_v1 - 0xd,7,0x74);
          }
          if (*(int *)(temp_v0 + 0x14) == 4) {
            FUN_00167860((int)*(short *)(temp_v0 + 0x18),temp_v1 - 0xd,8,0x79);
          }
          if (*(int *)(temp_v0 + 0x14) == 3) {
            FUN_001689e8((int)*(short *)(temp_v0 + 0x18),temp_v1 - 0xd,8,0x79,0);
          }
          if (*(int *)(temp_v0 + 0x14) == 5) {
            FUN_00168470(*(unsigned short *)(temp_v0 + 0x18),temp_v1 - 0xd,temp_v6 + 8,0x79);
          }
        }
        else {
          FUN_00165778(temp_v0,temp_v1);
        }
      }
      else {
        FUN_0016631c(temp_v0,temp_v1);
      }
    }
    FUN_0016c560(g_renderCtx);
    efctSetSpeed();
    temp_v0 = g_renderCtx;
    piVar7 = (int *)(g_renderCtx + 0x1258);
    temp_v6 = *piVar7;
    temp_v1 = piVar7[temp_v6 + 2];
    *piVar7 = temp_v6 - 1;
    if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v1 != piVar7[temp_v6 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
