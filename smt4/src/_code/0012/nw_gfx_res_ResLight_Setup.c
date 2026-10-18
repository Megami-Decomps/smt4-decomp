/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResLight_Setup` (_code @ 0x120864, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int FUN_002b50e4(unsigned int **);
extern unsigned int nw_gfx_res_SetupReferenceLut(unsigned int *, unsigned int);


unsigned int nw_gfx_res_ResLight_Setup
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *temp_v5;
  
  temp_v4 = 0;
  puVar7 = (unsigned int *)*param_1;
  if ((puVar7 != (unsigned int *)0x0) && ((~*puVar7 & 0x400000a2) != 0)) {
    puVar7 = (unsigned int *)0x0;
  }
  if (puVar7 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x0;
    if (puVar7[0x46] != 0) {
      puVar1 = (unsigned int *)((int)puVar7 + puVar7[0x46] + 0x118);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v5 = param_4;
    temp_v0 = nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    temp_v2 = puVar7[0x46];
    if (temp_v2 != 0) {
      temp_v1 = (int)puVar7 + temp_v2 + 0x118;
    }
    else {
      temp_v1 = 0;
    }
    if ((temp_v1 != 0) && (-1 < (int)temp_v0)) {
      if (temp_v2 != 0) {
        temp_v5 = (unsigned int *)((int)puVar7 + temp_v2 + 0x118);
      }
      else {
        temp_v5 = (unsigned int *)0x0;
      }
      temp_v4 = FUN_002b50e4(&temp_v5);
    }
    temp_v2 = puVar7[0x47];
    temp_v4 = temp_v4 | temp_v0;
    if (temp_v2 != 0) {
      temp_v1 = (int)puVar7 + temp_v2 + 0x11c;
    }
    else {
      temp_v1 = 0;
    }
    if (temp_v1 != 0) {
      if (temp_v2 != 0) {
        temp_v1 = (int)puVar7 + temp_v2 + 0x11c;
      }
      else {
        temp_v1 = 0;
      }
      temp_v3 = *(int *)(temp_v1 + 8);
      if (temp_v3 != 0) {
        puVar8 = (unsigned int *)(temp_v3 + temp_v1 + 8);
      }
      if (puVar8 == (unsigned int *)0x0) {
        temp_v4 = temp_v4 | 8;
      }
      else {
        puVar7 = (unsigned int *)0x0;
        if ((*puVar8 & 0x40000000) != 0) {
          puVar7 = puVar8;
        }
        temp_v5 = puVar8;
        temp_v0 = nw_gfx_res_SetupReferenceLut(puVar7,param_3);
        if (-1 < (int)temp_v0) {
          temp_v2 = FUN_002b50e4(&temp_v5);
          temp_v4 = temp_v4 | temp_v2;
        }
        temp_v4 = temp_v4 | temp_v0;
      }
    }
  }
  return temp_v4;
}
