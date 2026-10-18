/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_CreateCallbacks` (_code @ 0x4536d8, 0x28c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004536d8_arg0 fn_004536d8_arg0;
struct fn_004536d8_arg0 {
    unsigned char pad_0x0[0x158];
    undefined4 field_0x158; /* +0x158 */
    void *field_0x15c; /* +0x15c */
    unsigned char pad_0x160[0xb8];
    void *field_0x218; /* +0x218 */
};

typedef int romwright_code();

unsigned int nw_gfx_Model_CreateCallbacks(fn_004536d8_arg0 *param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  puVar5 = (unsigned int *)0x0;
  if (*(char *)param_1->field_0x218 != '\0') {
    temp_v2 = *(unsigned int *)((int)param_1->field_0x218 + 4);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))();
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)0x0;
      }
      else {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v2 << 2,4);
        if (temp_v0 != 0) {
          *puVar1 = (unsigned int)param_2;
          puVar1[2] = temp_v0;
          puVar1[1] = (unsigned int)param_2;
          puVar1[3] = temp_v0;
          puVar1[4] = temp_v2 & 0x3fffffff;
        }
        else {
          (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
          puVar1 = (unsigned int *)0x0;
        }
      }
      param_1->field_0x158 = puVar1;
      temp_v2 = *(unsigned int *)((int)param_1->field_0x218 + 4);
      puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
      if (puVar1 != (unsigned int *)0x0) {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v2 << 2,4);
        if (temp_v0 != 0) {
          *puVar1 = (unsigned int)param_2;
          puVar1[2] = temp_v0;
          puVar1[1] = (unsigned int)param_2;
          puVar1[3] = temp_v0;
          puVar1[4] = temp_v2 & 0x3fffffff;
          puVar5 = puVar1;
        }
        else {
          (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
        }
      }
      param_1->field_0x15c = puVar5;
      if (param_1->field_0x158 == 0 || puVar5 == (unsigned int *)0x0) {
        temp_v3 = 0x80000000;
      }
      return temp_v3;
    }
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = (unsigned int)param_2;
      puVar1[1] = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
    }
    param_1->field_0x158 = puVar1;
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      param_1->field_0x15c = puVar5;
      if (param_1->field_0x158 == 0 || puVar5 == (unsigned int *)0x0) {
        temp_v3 = 0x80000000;
      }
      return temp_v3;
    }
    *puVar1 = (unsigned int)param_2;
    puVar1[2] = 0;
    puVar1[1] = (unsigned int)param_2;
    puVar1[3] = 0;
    puVar5 = puVar1 + 1;
    puVar1[4] = puVar1[4] & 0xc0000000;
    temp_v1 = 0;
    puVar5[3] = temp_v1;
    puVar5 = puVar1;
  }
  else {
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = (unsigned int)param_2;
      puVar1[1] = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0x40000000;
    }
    param_1->field_0x158 = puVar1;
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 != (unsigned int *)0x0) {
      puVar5 = puVar1 + 1;
      *puVar1 = (unsigned int)param_2;
      *puVar5 = (unsigned int)param_2;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = puVar1[4] & 0xc0000000;
      temp_v1 = 0x40000000;
      puVar5[3] = temp_v1;
      puVar5 = puVar1;
    }
  }
  param_1->field_0x15c = puVar5;
  if (param_1->field_0x158 == 0 || puVar5 == (unsigned int *)0x0) {
    temp_v3 = 0x80000000;
  }
  return temp_v3;
}
