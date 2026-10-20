/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b01c` (_code @ 0x14b01c, 0x63c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00153f64(...);
int FUN_00157558(int);
int FUN_0016242c(...);
int FUN_0016c4b8(...);
int FUN_0016c560(int);
int camSetMatrixA(int, unsigned char [108]);
int mtx44Copy(unsigned char [108], unsigned int *);
int FUN_0019e3d0(...);
int FUN_001a9698(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern int g_frameTex; /* 0x57f65c */
extern int DAT_0057f660; /* 0x57f660 */
extern int DAT_0057f664; /* 0x57f664 */
extern unsigned int DAT_0057f668; /* 0x57f668 */
extern int DAT_0057f66c; /* 0x57f66c */
extern int DAT_0057f670; /* 0x57f670 */
extern int DAT_0057f674; /* 0x57f674 */
extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
extern unsigned int DAT_0064c084; /* 0x64c084 */
extern float DAT_0064c088; /* 0x64c088 */
extern float DAT_0064c08c; /* 0x64c08c */
extern float DAT_0064c090; /* 0x64c090 */
extern float DAT_0064c094; /* 0x64c094 */
extern unsigned int DAT_0064c098; /* 0x64c098 */
extern float DAT_0064c09c; /* 0x64c09c */
extern float DAT_0064c0a0; /* 0x64c0a0 */
extern float DAT_0064c0a4; /* 0x64c0a4 */
extern float DAT_0064c0a8; /* 0x64c0a8 */
extern unsigned int DAT_0064c0ac; /* 0x64c0ac */
extern float DAT_0064c0b0; /* 0x64c0b0 */
extern float DAT_0064c0b4; /* 0x64c0b4 */
extern float DAT_0064c0b8; /* 0x64c0b8 */
extern float DAT_0064c0bc; /* 0x64c0bc */
extern unsigned int DAT_0064c0c0; /* 0x64c0c0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00153f64. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_0016242c. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: camSetMatrixA. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001a9698. */
extern int __cxa_guard_acquire(unsigned int *);


void FUN_0014b01c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [108];
  
  temp_v3 = g_frameTex;
  if (g_frameTex == 0) {
    return;
  }
  temp_v6 = 0.0f;
  if (0 < *(int *)(g_frameTex + 0x14)) {
    temp_v4 = *(int *)(g_frameTex + 0x14) * -0x12 + 0xff;
    if ((int)temp_v4 < 0) {
      temp_v4 = 0;
    }
    if (param_1 != 0) {
      DAT_0057f660 = DAT_0057f660 - 0x10;
      if (DAT_0057f660 < 0) {
        DAT_0057f660 = 0;
      }
      DAT_0057f664 = DAT_0057f664 - 0x10;
      if (DAT_0057f664 < 0) {
        DAT_0057f664 = 0;
      }
      DAT_0057f668 = DAT_0057f668 - 10;
      if ((int)DAT_0057f668 < 0) {
        DAT_0057f668 = 0;
      }
      DAT_0057f66c = DAT_0057f66c - 10;
      if (DAT_0057f66c < 0) {
        DAT_0057f66c = 0;
      }
      DAT_0057f670 = DAT_0057f670 - 4;
      if ((int)DAT_0057f670 < 0) {
        DAT_0057f670 = 0;
      }
      DAT_0057f674 = DAT_0057f674 - 8;
      if (DAT_0057f674 < 0) {
        DAT_0057f674 = 0;
      }
    }
  }
  else {
    temp_v0 = *(int *)(g_frameTex + 0x10);
    if (temp_v0 < 10) {
      DAT_0057f660 = 0;
    }
    else {
      DAT_0057f660 = (temp_v0 - 10) * 3;
      if (DAT_0057f660 >= 0x100) {
        DAT_0057f660 = 0xff;
      }
    }
    if (temp_v0 < 0x14) {
      DAT_0057f664 = 0;
    }
    else {
      DAT_0057f664 = temp_v0 * 8 - 0xa0;
      if (DAT_0057f664 >= 0x100) {
        DAT_0057f664 = 0xff;
      }
    }
    if (temp_v0 < 6) {
      DAT_0057f668 = 0;
    }
    else {
      DAT_0057f668 = (temp_v0 - 6) * 7;
      if ((int)DAT_0057f668 >= 0x100) {
        DAT_0057f668 = 0xff;
      }
    }
    DAT_0057f66c = temp_v0 * 5;
    if (DAT_0057f66c >= 0x100) {
      DAT_0057f66c = 0xff;
    }
    temp_v5 = temp_v6;
    if (temp_v0 < 8) {
      DAT_0057f670 = 0;
    }
    else {
      DAT_0057f670 = 0x40;
      if (temp_v0 - 8 < 0x28) {
        VectorSignedToFloat(temp_v0 - 8,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0016242c();
        DAT_0057f670 = (unsigned int)temp_v6;
      }
    }
    temp_v3 = *(int *)(temp_v3 + 0x10);
    temp_v6 = temp_v5;
    if (temp_v3 >= 0x19) {
      DAT_0057f674 = 0x30;
      if (temp_v3 < 0x3c) {
        VectorSignedToFloat(temp_v3 - 0x19,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_0016242c(temp_v3 - 0x19);
        DAT_0057f674 = (int)temp_v5;
        if (DAT_0057f674 < 0) {
          DAT_0057f674 = 0;
        }
      }
    }
    else {
      DAT_0057f674 = 0;
    }
    temp_v4 = 0xff;
  }
  temp_v3 = g_renderCtx;
  temp_v0 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v3 + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  temp_v3 = g_renderCtx;
  temp_v0 = packNibblesAndByte(6,7,0);
  piVar5 = (int *)(temp_v3 + 0x12b8);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  FUN_00157558(g_renderCtx);
  temp_v3 = g_frameTex;
  temp_v7 = 0x3f800000;
  FUN_001a9698();
  if ((param_1 == 0) && (*(char *)(temp_v3 + 0x1418) != '\0')) {
    temp_v3 = *(int *)(temp_v3 + 8);
  }
  else {
    temp_v3 = *(int *)(temp_v3 + 4);
  }
  *(unsigned int *)(temp_v3 + 0x3c) = 1;
  VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v3 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v3 + 0x40) = 1;
  FUN_0016c4b8(g_renderCtx);
  FUN_0019e3d0(temp_v4 | 0xffffff00);
  temp_v3 = g_renderCtx;
  temp_v0 = packNibblesAndByte(6,1,0);
  piVar5 = (int *)(temp_v3 + 0x12b8);
  temp_v1 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  temp_v4 = DAT_0057f668 | 0xffffff00;
  temp_v3 = FUN_00153f64(3,2);
  *(unsigned int *)(temp_v3 + 0x38) = 2;
  FUN_0016c4b8(g_renderCtx,temp_v3);
  FUN_0019e3d0(temp_v4);
  if (((DAT_005c4c30 & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&DAT_005c4c30), temp_v3 != 0)) {
    DAT_0064c084 = temp_v7;
    DAT_0064c088 = temp_v6;
    DAT_0064c08c = temp_v6;
    DAT_0064c090 = temp_v6;
    DAT_0064c094 = temp_v6;
    DAT_0064c098 = temp_v7;
    DAT_0064c09c = temp_v6;
    DAT_0064c0a0 = temp_v6;
    DAT_0064c0a4 = temp_v6;
    DAT_0064c0a8 = temp_v6;
    DAT_0064c0ac = temp_v7;
    DAT_0064c0b0 = temp_v6;
    DAT_0064c0b4 = temp_v6;
    DAT_0064c0b8 = temp_v6;
    DAT_0064c0bc = temp_v6;
    DAT_0064c0c0 = temp_v7;
  }
  mtx44Copy(temp_v8,&DAT_0064c084);
  camSetMatrixA(g_renderCtx,temp_v8);
  temp_v3 = FUN_00153f64(3);
  *(unsigned int *)(temp_v3 + 0x38) = 2;
  FUN_0016c4b8(g_renderCtx,temp_v3);
  temp_v4 = DAT_0057f670 | 0xffffff00;
  FUN_0019e3d0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v6,0x40700000,0x40c80000,0x40700000);
  FUN_0016c560(g_renderCtx);
  temp_v3 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x12b8);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x12d4))();
    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
  }
  temp_v3 = g_renderCtx;
  piVar5 = (int *)(g_renderCtx + 0x1258);
  temp_v0 = *piVar5;
  temp_v1 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
