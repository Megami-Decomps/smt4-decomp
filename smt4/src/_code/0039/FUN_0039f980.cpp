/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f980` (_code @ 0x39f980, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230fe4(int, double, int, int, int, int, int, int, int);
int recordCompareKind(...);
int FUN_00231bcc(...);
int FUN_003c2e5c(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00230fe4. */
/* Supplied declaration required: recordCompareKind. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: FUN_003c2e5c. */


void FUN_0039f980(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  int uStack_20;
  int temp_v4;
  int uStack_18;
  
  temp_v0 = recordCompareKind();
  FUN_00231bcc(*(unsigned int *)(param_1 + 100),*(unsigned int *)(temp_v0 * 4 + 0x44cf78),0,0,param_2,1);
  if ((*(unsigned short *)(param_1 + 4) & 1) != 0) {
    temp_v0 = recordCompareKind(param_1);
    FUN_00231bcc(*(unsigned int *)(param_1 + 100),*(int *)(temp_v0 * 4 + 0x44cf78) + 2,0,0,param_2,1);
  }
  temp_v0 = recordCompareKind(param_1);
  FUN_00231bcc(*(unsigned int *)(param_1 + 100),*(unsigned int *)(temp_v0 * 4 + 0x44cf84),0,0,param_2,1);
  if ((*(unsigned short *)(param_1 + 4) & 2) != 0) {
    temp_v0 = recordCompareKind(param_1);
    FUN_00231bcc(*(unsigned int *)(param_1 + 100),*(int *)(temp_v0 * 4 + 0x44cf84) + 2,0,0,param_2,1);
  }
  temp_v0 = recordCompareKind(param_1);
  FUN_00231bcc(*(unsigned int *)(param_1 + 100),*(unsigned int *)(temp_v0 * 4 + 0x44cf90),0,0,param_2,1);
  FUN_003c2e5c(param_1,&temp_v3,&uStack_20,&temp_v4,&uStack_18);
  temp_v0 = recordCompareKind(param_1);
  temp_v0 = *(int *)(temp_v0 * 4 + 0x44cf90) + 1;
  if ((*(unsigned short *)(param_1 + 4) & 0x150) != 0) {
    temp_v0 = recordCompareKind(param_1,*(unsigned short *)(param_1 + 4),temp_v0);
    temp_v0 = *(int *)(temp_v0 * 4 + 0x44cf90) + 2;
  }
  temp_v1 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  pfVar2 = *(float **)(param_1 + 100);
  temp_v2 = (float)VectorSignedToFloat(uStack_20,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00230fe4(2,pfVar2[4],temp_v0,(int)(*pfVar2 + pfVar2[2] + temp_v1),
               (int)(pfVar2[1] + pfVar2[3] + temp_v2),temp_v4,uStack_18,param_2,1);
  return;
}

} /* extern "C" */
