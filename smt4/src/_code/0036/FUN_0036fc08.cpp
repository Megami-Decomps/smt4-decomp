/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036fc08` (_code @ 0x36fc08, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0036e8e4(int *, unsigned int);
int nw_gfx_res_ResVertexAttribute_Setup(int *);

typedef struct fn_0036fc08_arg1 fn_0036fc08_arg1;
struct fn_0036fc08_arg1 {
    unsigned char pad_0x0[0x2c];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0036e8e4. */
/* Supplied declaration required: nw_gfx_res_ResVertexAttribute_Setup. */


void FUN_0036fc08(unsigned int param_1,fn_0036fc08_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = param_2->field_0x2c;
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      if (param_2->field_0x30 != 0) {
        temp_v0 = (int)&param_2->field_0x30 + param_2->field_0x30;
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v0 = *piVar2;
      if (temp_v0 != 0) {
        temp_v0 = (int)piVar2 + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      if (*(int *)(temp_v0 + 0x10) != 0) {
        piVar2 = (int *)(*(int *)(temp_v0 + 0x10) + temp_v0 + 0x10);
      }
      else {
        piVar2 = (int *)0x0;
      }
      piVar3 = piVar2 + *(int *)(temp_v0 + 0xc);
      for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
        if (*piVar2 != 0) {
          temp_v3 = *piVar2 + (int)piVar2;
        }
        else {
          temp_v3 = 0;
        }
        FUN_0036e8e4(&temp_v3,param_1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  temp_v2 = param_2->field_0x38;
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      if (param_2->field_0x3c != 0) {
        temp_v0 = (int)&param_2->field_0x3c + param_2->field_0x3c;
      }
      else {
        temp_v0 = 0;
      }
      piVar2 = (int *)(temp_v0 + temp_v1 * 4);
      temp_v3 = *piVar2;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar2 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      nw_gfx_res_ResVertexAttribute_Setup(&temp_v3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  return;
}

} /* extern "C" */
