/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e76c` (_code @ 0x15e76c, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017fc38(int *);
int VectorSignedToFloat(unsigned int, int);

typedef struct fn_0015e76c_arg0 fn_0015e76c_arg0;
struct fn_0015e76c_arg0 {
    unsigned char pad_0x0[0x78];
    int field_0x78; /* +0x78 */
    undefined4 field_0x7c; /* +0x7c */
    int field_0x80; /* +0x80 */
    unsigned char field_0x84; /* +0x84 */
    unsigned char pad_0x85[0x1c];
    byte field_0xa1; /* +0xa1 */
    unsigned char pad_0xa2[0x1];
    undefined1 field_0xa3; /* +0xa3 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0017fc38. */


void FUN_0015e76c(fn_0015e76c_arg0 *param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_1->field_0xa1;
  if (param_2 != 0) {
    if ((temp_v0 < 2) || ((temp_v0 != 2 && (temp_v0 == 3)))) {
      FUN_0017fc38(&param_1->field_0x78);
      temp_v4 = 0;
      temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = (int)(in_s0 * temp_v3);
      temp_v1 = temp_v2;
      if (temp_v2 < 1) {
        temp_v1 = 1;
      }
      FUN_0017fc38(&param_1->field_0x78);
      param_1->field_0x78 = temp_v2;
      param_1->field_0x7c = temp_v4;
      param_1->field_0x80 = temp_v1;
      *(unsigned int *)&param_1->field_0x84 = 0;
      param_1->field_0xa1 = 1;
      param_1->field_0xa3 = 0;
    }
  }
  else if ((temp_v0 != 0) && ((temp_v0 == 1 || temp_v0 == 2) || temp_v0 == 3)) {
    FUN_0017fc38(&param_1->field_0x78);
    temp_v4 = 0x3f800000;
    temp_v3 = (float)VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (int)((1.0f - in_s0) * temp_v3);
    temp_v1 = temp_v2;
    if (temp_v2 < 1) {
      temp_v1 = 1;
    }
    FUN_0017fc38(&param_1->field_0x78);
    param_1->field_0x78 = temp_v2;
    param_1->field_0x7c = temp_v4;
    param_1->field_0x80 = temp_v1;
    *(unsigned int *)&param_1->field_0x84 = 0;
    param_1->field_0xa1 = 3;
    param_1->field_0xa3 = 1;
    return;
  }
  return;
}

} /* extern "C" */
