/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291644` (_code @ 0x291644, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);
int aeabi_uidivmod(unsigned int);

typedef struct fn_00291644_arg0 fn_00291644_arg0;
struct fn_00291644_arg0 {
    unsigned char pad_0x0[0x4];
    uint field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00291644(fn_00291644_arg0 *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar2;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  
  temp_v4 = 0xffffffff;
  temp_v3 = param_1->field_0x4;
  if (temp_v3 == 1) {
    temp_v5 = 0;
  }
  else {
    if ((param_1->field_0x8 & 1) != 0) {
      aeabi_uidivmod(param_2);
      param_2 = temp_v0;
    }
    else if ((*(unsigned int *)(param_1 + 1) <= param_2) &&
            (temp_v4 = temp_v3 - 1, param_2 = 0, temp_v5 = temp_v4, temp_v3 != 0)) goto LAB_002916e0;
    piVar2 = (int *)param_1->field_0x10;
    temp_v2 = 0;
    temp_v1 = 0;
    temp_v5 = temp_v4;
    if (temp_v3 != 0) {
      do {
        temp_v5 = temp_v1;
        if (param_2 <= (unsigned int)(temp_v2 + *piVar2)) break;
        temp_v1 = temp_v1 + 1;
        temp_v2 = temp_v2 + *piVar2 + 1;
        piVar2 = piVar2 + 4;
        temp_v5 = temp_v4;
      } while (temp_v1 < temp_v3);
    }
  }
LAB_002916e0:
  temp_v6 = 0x3f800000;
  *param_3 = 0x3f800000;
  if ((param_1->field_0x8 & 4) != 0) {
    temp_v6 = 0x40000000;
  }
  param_3[1] = temp_v6;
  temp_v2 = *(int *)(param_1->field_0x14 + temp_v5 * 4);
  param_3[4] = temp_v2;
  temp_v6 = VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_3[2] = temp_v6;
  temp_v6 = VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  param_3[3] = temp_v6;
  return;
}

} /* extern "C" */
