/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bee88` (_code @ 0x4bee88, 0x2dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00157558(...);
int FUN_00162790(...);
int efctSetSpeed(...);
int renderCtxResetColorScale(...);
int FUN_0016c560(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_0018408c(...);
int FUN_004bde34(...);
int FUN_004be36c(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: renderCtxResetColorScale. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_004bde34. */
/* Supplied declaration required: FUN_004be36c. */


void FUN_004bee88(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  int *piVar5;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned char temp_v4 [76];
  
  FUN_00157558(g_renderCtx);
  temp_v3 = g_renderCtx;
  temp_v0 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v3 + 0x1258);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 + 1;
  piVar5[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x1274))(temp_v0);
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  temp_v0 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + temp_v3 * 4 + 0x2c4) & 0xffff);
    if ((temp_v1 != 0) && ((*(unsigned int *)(temp_v1 + 0x130) & 1) != 0)) {
      temp_v2 = FUN_001834a4(0x11,temp_v0 + 0xae);
      FUN_004bde34(param_1,temp_v1,temp_v3,*(short *)(temp_v2 + 8) + param_2,
                   *(short *)(temp_v2 + 10) + param_3);
      temp_v0 = temp_v0 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xc);
  if (temp_v0 >= 1) {
    FUN_004be36c(param_1,param_2,param_3);
  }
  else {
    efctSetSpeed();
    temp_v3 = 0;
    do {
      FUN_001835b4(2,0x11,temp_v3 + 0xbe,0,0,0x6f);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
    temp_v3 = FUN_001834a4(0x11,0xc4);
    FUN_00100388(temp_v4,
                 "碂辂閂䂁蒂辂䂁躂辂钂䂁袂膂隂薂䂁膂躂馂䂁邂膂銂钂躂薂銂鎂䒁"
                );
    puVar3 = temp_v4;
    FUN_0018408c(puVar3,3);
    temp_v0 = param_2 + (int)*(short *)(temp_v3 + 8) +
                      ((int)**(short **)(temp_v3 + 0xc) - (int)puVar3) / 2;
    VectorSignedToFloat(*(short *)(temp_v3 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xffffffff,temp_v4,temp_v0);
    efctSetSpeed();
  }
  efctSetSpeed();
  temp_v3 = 0;
  do {
    FUN_001835b4(2,0x11,temp_v3 + 0x81,param_2,param_3,0x97);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  FUN_001835b4(2,0x11,0xad,param_2,param_3,0x97);
  if (-1 < *(int *)(param_1 + 0x328)) {
    temp_v3 = FUN_001834a4(0x11,*(int *)(param_1 + 0x328) + 0xae);
    FUN_001835b4(2,0x11,0xab,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x97);
    efctSetSpeed();
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
  FUN_0016c560(g_renderCtx);
  renderCtxResetColorScale(g_renderCtx);
  return;
}

} /* extern "C" */
