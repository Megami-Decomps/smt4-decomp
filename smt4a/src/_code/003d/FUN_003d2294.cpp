/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2294` (_code @ 0x3d2294, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mtx44Copy(float *, unsigned int);
int FUN_0019a0fc(...);
int FUN_001a1c28(...);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_4: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0018aeb8(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: FUN_0019a0fc. */
/* Supplied declaration required: FUN_001a1c28. */


void FUN_003d2294(float *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  unsigned char temp_v20 [64];
  unsigned char temp_v21 [64];
  unsigned char temp_v22 [108];
  
  temp_v4 = *param_1;
  temp_v7 = param_1[1];
  temp_v5 = param_1[2];
  temp_v6 = 1.0f;
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(&temp_v8,temp_v0);
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v20);
  FUN_0019a0fc(&temp_v8,&temp_v8,temp_v20);
  temp_v1 = temp_v8 * temp_v4 + temp_v9 * temp_v7 + temp_v10 * temp_v5 + temp_v11 * temp_v6;
  temp_v2 = temp_v12 * temp_v4 + temp_v13 * temp_v7 + temp_v14 * temp_v5 + temp_v15 * temp_v6;
  temp_v3 = temp_v16 * temp_v4 + temp_v17 * temp_v7 + temp_v18 * temp_v5 + temp_v19 * temp_v6;
  temp_v4 = fStack_110 * temp_v4 + fStack_10c * temp_v7 + fStack_108 * temp_v5 + fStack_104 * temp_v6;
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(&temp_v8,temp_v0);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v21);
  FUN_0019a0fc(&temp_v8,&temp_v8,temp_v21);
  temp_v5 = temp_v8 * temp_v1 + temp_v9 * temp_v2 + temp_v10 * temp_v3 + temp_v11 * temp_v4;
  temp_v6 = temp_v12 * temp_v1 + temp_v13 * temp_v2 + temp_v14 * temp_v3 + temp_v15 * temp_v4;
  temp_v7 = temp_v16 * temp_v1 + temp_v17 * temp_v2 + temp_v18 * temp_v3 + temp_v19 * temp_v4;
  temp_v1 = fStack_110 * temp_v1 + fStack_10c * temp_v2 + fStack_108 * temp_v3 + fStack_104 * temp_v4;
  temp_v0 = FUN_0018aeb8();
  mtx44Copy(&temp_v8,temp_v0);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001a1c28(temp_v22);
  FUN_0019a0fc(&temp_v8,&temp_v8,temp_v22);
  *param_1 = temp_v8 * temp_v5 + temp_v9 * temp_v6 + temp_v10 * temp_v7 + temp_v11 * temp_v1;
  param_1[1] = temp_v12 * temp_v5 + temp_v13 * temp_v6 + temp_v14 * temp_v7 + temp_v15 * temp_v1;
  param_1[2] = temp_v16 * temp_v5 + temp_v17 * temp_v6 + temp_v18 * temp_v7 + temp_v19 * temp_v1;
  return;
}

} /* extern "C" */
