/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1378` (_code @ 0x2d1378, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002d1378_arg0 fn_002d1378_arg0;
struct fn_002d1378_arg0 {
    unsigned char pad_0x0[0xc0];
    int field_0xc0; /* +0xc0 */
    unsigned char pad_0xc4[0x4];
    float field_0xc8; /* +0xc8 */
    unsigned char pad_0xcc[0x4];
    float field_0xd0; /* +0xd0 */
    float field_0xd4; /* +0xd4 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002c32a0. */


int FUN_002d1378(fn_002d1378_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  int temp_v3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v4;
  
  temp_v3 = param_1->field_0xc0;
  temp_v0 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,temp_v3 * 0x34,0x10,1);
  if (0 < temp_v3) {
    in_s0 = 0.0f;
  }
  temp_v1 = 0;
  if (0 < temp_v3) {
    do {
      pfVar4 = (float *)(temp_v0 + temp_v1 * 0x34);
      temp_v2 = temp_v1 + 1;
      pfVar4[1] = in_s0;
      *pfVar4 = in_s0;
      temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      pfVar4[4] = param_1->field_0xd0;
      pfVar4[5] = param_1->field_0xd4;
      *pfVar4 = -(param_1->field_0xc8 * temp_v4);
      temp_v1 = temp_v2;
    } while (temp_v2 < temp_v3);
  }
  return temp_v0;
}
