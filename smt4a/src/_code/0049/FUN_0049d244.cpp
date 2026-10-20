/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049d244` (_code @ 0x49d244, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(...);
int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_001879d0(unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_0049d244(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  unsigned long long temp_v5;
  
  temp_v4 = 0.25f;
  temp_v5 = 0x3e80000000000000;
  FUN_001879d0(g_renderCtx);
  if (*(char *)(param_1 + 4) == '\b' || *(char *)(param_1 + 4) == '\t') {
    efctSetSpeed();
    temp_v3 = (float)((unsigned long long)temp_v5 >> 0x20);
    FUN_001879d0(g_renderCtx);
    FUN_001835b4(2,0x33,0x2e,(int)temp_v3,0,0x65);
    efctSetSpeed();
  }
  efctSetSpeed();
  temp_v2 = 0;
  do {
    FUN_001835b4(2,0x33,temp_v2,(int)temp_v4 + param_2,param_3,0x65);
    temp_v3 = (float)((unsigned long long)temp_v5 >> 0x20);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  psVar2 = *(short **)(param_1 + 0x84);
  temp_v0 = 0;
  if (psVar2 != (short *)0x0) {
    temp_v0 = *psVar2;
  }
  if (psVar2 == (short *)0x0 || temp_v0 == 0) {
    return;
  }
  temp_v4 = temp_v3;
  FUN_001879d0(g_renderCtx);
  FUN_001835b4(2,0x33,3,param_2 + (int)temp_v3,param_3,0x65);
  temp_v2 = FUN_001834a4(0x33,4);
  FUN_001879d0(g_renderCtx);
  temp_v1 = (int)*(short *)(temp_v2 + 8) + (int)temp_v4 + param_2;
  VectorSignedToFloat(0x96,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xffffffff,*(int *)(param_1 + 0x84) + 4,temp_v1);
  return;
}

} /* extern "C" */
