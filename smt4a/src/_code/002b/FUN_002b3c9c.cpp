/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3c9c` (_code @ 0x2b3c9c, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c410(int);
int FUN_0016c4b8(int, unsigned int);
int FUN_0016c560(int);
int FUN_002b358c(unsigned int);
int FUN_002ff8e8(unsigned int);
int camSetMatrixB(int, int *);
int FUN_00409c60(int, unsigned int, unsigned int, unsigned int);
int FUN_00412e44(unsigned int);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_002b358c. */
/* Supplied declaration required: FUN_002ff8e8. */
/* Supplied declaration required: camSetMatrixB. */
/* Supplied declaration required: FUN_00409c60. */
/* Supplied declaration required: FUN_00412e44. */


void FUN_002b3c9c(unsigned short *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int in_fpscr;
  int temp_v4;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v5;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v6;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int temp_v7;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v8;
  
  temp_v0 = g_renderCtx;
  if ((*param_1 & 0x100) != 0) {
    temp_v1 = FUN_001692ac(5,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (!(*(char *)(temp_v0 + 0x1270) == '\0' && temp_v3 == temp_v1)) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  else {
    temp_v1 = FUN_001692ac(1,0);
    piVar5 = (int *)(temp_v0 + 0x1258);
    temp_v2 = *piVar5;
    temp_v3 = piVar5[temp_v2 + 2];
    *piVar5 = temp_v2 + 1;
    piVar5[temp_v2 + 3] = temp_v1;
    if (!(*(char *)(temp_v0 + 0x1270) == '\0' && temp_v3 == temp_v1)) {
      (**(romwright_code **)(temp_v0 + 0x1274))();
      *(unsigned char *)(temp_v0 + 0x1270) = 0;
    }
  }
  if ((*param_1 & 0x200) != 0) {
    FUN_002b358c(*(unsigned int *)(param_1 + 6));
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) == '\0' && temp_v2 == piVar5[temp_v1 + 1]) {
      return;
    }
  }
  else {
    FUN_0016c4b8(g_renderCtx,*(unsigned int *)(param_1 + 2));
    temp_v4 = *(unsigned int *)(param_1 + 8);
    uStack_54 = *(unsigned int *)(param_1 + 10);
    uStack_50 = *(unsigned int *)(param_1 + 0xc);
    uStack_48 = *(unsigned int *)(param_1 + 0x10);
    uStack_44 = *(unsigned int *)(param_1 + 0x12);
    uStack_40 = *(unsigned int *)(param_1 + 0x14);
    uStack_38 = *(unsigned int *)(param_1 + 0x18);
    uStack_34 = *(unsigned int *)(param_1 + 0x1a);
    uStack_30 = *(unsigned int *)(param_1 + 0x1c);
    uStack_28 = *(unsigned int *)(param_1 + 0x20);
    uStack_24 = *(unsigned int *)(param_1 + 0x22);
    uStack_20 = *(unsigned int *)(param_1 + 0x24);
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0x3f800000;
    camSetMatrixB(g_renderCtx,&temp_v4);
    VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)param_1 + 0x53),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_1[0x29],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)param_1 + 0x51),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_1[0x28],(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00409c60(g_renderCtx,(unsigned int)(unsigned char)param_1[0x29],(unsigned int)*(unsigned char *)((int)param_1 + 0x51),
                 (unsigned int)(unsigned char)param_1[0x28]);
    FUN_002ff8e8(param_2);
    if (*(int *)(param_1 + 0x2a) != 0) {
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
    }
    FUN_00412e44(*(unsigned int *)(param_1 + 4));
    FUN_0016c410(g_renderCtx);
    FUN_0016c560(g_renderCtx);
    temp_v0 = g_renderCtx;
    piVar5 = (int *)(g_renderCtx + 0x1258);
    temp_v1 = *piVar5;
    temp_v2 = piVar5[temp_v1 + 2];
    *piVar5 = temp_v1 - 1;
    if (*(char *)(temp_v0 + 0x1270) == '\0' && temp_v2 == piVar5[temp_v1 + 1]) {
      return;
    }
  }
  (*(romwright_code *)piVar5[7])();
  *(unsigned char *)(piVar5 + 6) = 0;
  return;
}

} /* extern "C" */
