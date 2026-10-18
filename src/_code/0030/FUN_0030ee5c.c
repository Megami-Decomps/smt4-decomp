/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ee5c` (_code @ 0x30ee5c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0030ee5c_arg0 fn_0030ee5c_arg0;
struct fn_0030ee5c_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4c];
    void *field_0x50; /* +0x50 */
    float field_0x54; /* +0x54 */
    float field_0x58; /* +0x58 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00269758. */
/* Supplied declaration required: FUN_0028cabc. */
/* Supplied declaration required: FUN_002c0a6c. */


void FUN_0030ee5c(fn_0030ee5c_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  
  FUN_0028cabc();
  temp_v0 = (float)VectorSignedToFloat(*(unsigned int *)(param_2 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat(*(unsigned int *)(param_2 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1->field_0x54 = temp_v0 * 0.5f * 0.0625f;
  param_1->field_0x58 = temp_v1 * 0.5f * 0.0625f;
  *(int *)(*(int *)((int)param_1->field_0x50 + 0xc) + 0xb4) = param_2;
  FUN_00269758(param_2);
  FUN_002c0a6c(param_2);
  return;
}
