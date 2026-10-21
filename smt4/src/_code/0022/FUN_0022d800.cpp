/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022d800` (_code @ 0x22d800, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230d84(int, int, int, int, unsigned int);
void gxSetClippedBottomScreenScissor(int, int, int, int);
int FUN_00231bcc(...);
int FUN_002bf4f0(...);
int efctSetSpeed(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_00230d84. */
/* Supplied declaration required: FUN_00231bcc. */
extern int vec2GetYInt(int);
extern int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf4f0. */
/* Supplied declaration required: efctSetSpeed. */


void FUN_0022d800(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v1 = FUN_002bf4f0(param_1 + 200,param_2 + 0x42f);
  temp_v4 = (int)*(short *)(temp_v1 + 8);
  temp_v1 = (int)*(short *)(temp_v1 + 10);
  efctSetSpeed();
  FUN_00230d84(param_1 + 200,0x426,temp_v4,temp_v1,param_3);
  FUN_00230d84(param_1 + 200,0x427,temp_v4,temp_v1,param_3);
  FUN_00230d84(param_1 + 200,0x428,temp_v4,temp_v1,param_3);
  efctSetSpeed();
  FUN_00231bcc(param_1 + 200,0x429,temp_v4,temp_v1,param_3,1);
  if (param_4 != 0) {
    FUN_00231bcc(param_1 + 200,0x42b,temp_v4,temp_v1,param_3,1);
  }
  else {
    FUN_00231bcc(param_1 + 200,0x42a,temp_v4,temp_v1,param_3,1);
  }
  temp_v2 = FUN_002bf4f0(param_1 + 200,0x42a);
  gxSetClippedBottomScreenScissor(*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v1,
               (int)**(short **)(temp_v2 + 0xc),(int)(*(short **)(temp_v2 + 0xc))[1]);
  temp_v2 = FUN_002bf4f0(param_1 + 200,0x42c);
  temp_v3 = vec2GetXInt(param_1 + 0x2a0);
  temp_v0 = *(unsigned short *)(temp_v2 + 4);
  temp_v2 = vec2GetYInt(param_1 + 0x2a0);
  FUN_00231bcc(param_1 + 200,0x42c,(temp_v3 + temp_v4) - (temp_v0 & 0xffff7fff),temp_v2 + temp_v1,param_3,1);
  temp_v1 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x130c);
  temp_v4 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = 0;
  if (*(char *)(temp_v1 + 0x1324) != '\0' || temp_v4 != 0) {
    (**(romwright_code **)(temp_v1 + 0x1328))();
    *(unsigned char *)(temp_v1 + 0x1324) = 0;
  }
  return;
}

} /* extern "C" */
