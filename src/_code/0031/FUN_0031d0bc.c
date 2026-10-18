/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d0bc` (_code @ 0x31d0bc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0031d0bc_arg0 fn_0031d0bc_arg0;
struct fn_0031d0bc_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x4c];
    void *field_0x50; /* +0x50 */
    float field_0x54; /* +0x54 */
    float field_0x58; /* +0x58 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0024c3c8(unsigned short);
/* Supplied declaration required: FUN_002694f8. */


void FUN_0031d0bc(fn_0031d0bc_arg0 *param_1,unsigned short param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  float temp_v2;
  
  temp_v0 = FUN_0024c3c8(param_2);
  temp_v1 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1->field_0x54 = temp_v1 * 0.5f * 0.0625f;
  param_1->field_0x58 = temp_v2 * 0.5f * 0.0625f;
  *(int *)(*(int *)((int)param_1->field_0x50 + 0xc) + 0xb4) = temp_v0;
  FUN_002694f8();
  return;
}
