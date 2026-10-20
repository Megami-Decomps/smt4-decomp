/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2480` (_code @ 0x3d2480, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mtx44Copy(unsigned char [64], unsigned int);
int FUN_0019a0fc(unsigned char [64], unsigned char [64], unsigned char [64]);
int FUN_001a1c28(unsigned char [64]);
int FUN_0043b5b4(int *, unsigned char [64]);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_001a1c28. */
/* Supplied declaration required: FUN_0043b5b4. */


void FUN_003d2480(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  unsigned char temp_v1 [64];
  unsigned char temp_v2 [64];
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [64];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int uStack_2c;
  
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(temp_v1,temp_v0);
  temp_v5 = *param_2;
  temp_v6 = param_2[1];
  temp_v7 = param_2[2];
  uStack_2c = 0x3f800000;
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v2);
  FUN_0019a0fc(temp_v1,temp_v1,temp_v2);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v3);
  FUN_0019a0fc(temp_v1,temp_v1,temp_v3);
  VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v4);
  FUN_0019a0fc(temp_v1,temp_v1,temp_v4);
  FUN_0043b5b4(&temp_v5,temp_v1);
  *param_1 = temp_v5;
  param_1[1] = temp_v6;
  param_1[2] = temp_v7;
  return;
}

} /* extern "C" */
