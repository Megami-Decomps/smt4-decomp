/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_CreateCallbacks` (_code @ 0x375f20, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00375f20_arg0 fn_00375f20_arg0;
struct fn_00375f20_arg0 {
    unsigned char pad_0x0[0x34];
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    byte field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    uint field_0x40; /* +0x40 */
};

typedef int romwright_code(...);

unsigned int nw_gfx_SceneNode_CreateCallbacks(fn_00375f20_arg0 *param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  
  temp_v3 = 0;
  puVar6 = (unsigned int *)0x0;
  if (param_1->field_0x3c != 0) {
    temp_v2 = param_1->field_0x40;
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))();
      if (puVar1 != (unsigned int *)0x0) {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v2 << 2,4);
        if (temp_v0 != 0) {
          *puVar1 = (unsigned int)param_2;
          puVar1[2] = temp_v0;
          puVar1[1] = (unsigned int)param_2;
          puVar1[3] = temp_v0;
          puVar1[4] = temp_v2 & 0x3fffffff;
          puVar6 = puVar1;
        }
        else {
          (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
        }
      }
      if (puVar6 == (unsigned int *)0x0) {
        temp_v3 = 0x80000000;
      }
      param_1->field_0x34 = puVar6;
      return temp_v3;
    }
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      if (puVar6 == (unsigned int *)0x0) {
        temp_v3 = 0x80000000;
      }
      param_1->field_0x34 = puVar6;
      return temp_v3;
    }
    *puVar1 = (unsigned int)param_2;
    puVar1[2] = 0;
    puVar1[1] = (unsigned int)param_2;
    puVar1[3] = 0;
    puVar6 = puVar1 + 1;
    puVar1[4] = puVar1[4] & 0xc0000000;
    temp_v1 = 0;
    puVar6[3] = temp_v1;
    puVar6 = puVar1;
  }
  else {
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 != (unsigned int *)0x0) {
      puVar6 = puVar1 + 1;
      *puVar1 = (unsigned int)param_2;
      *puVar6 = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = puVar1[4] & 0xc0000000;
      temp_v1 = 0x40000000;
      puVar6[3] = temp_v1;
      puVar6 = puVar1;
    }
  }
  if (puVar6 == (unsigned int *)0x0) {
    temp_v3 = 0x80000000;
  }
  param_1->field_0x34 = puVar6;
  return temp_v3;
}

} /* extern "C" */
