/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResLight_Setup` (_code @ 0x120864, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_res_SetupReferenceLut(unsigned int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int FUN_002b50e4(unsigned int **);
/* Supplied declaration required: nw_gfx_res_SetupReferenceLut. */


unsigned int nw_gfx_res_ResLight_Setup
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *temp_v4;
  
  temp_v3 = 0;
  puVar6 = (unsigned int *)*param_1;
  if ((puVar6 != (unsigned int *)0x0) && ((~*puVar6 & 0x400000a2) != 0)) {
    puVar6 = (unsigned int *)0x0;
  }
  if (puVar6 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
    if (puVar6[0x46] != 0) {
      puVar1 = (unsigned int *)((int)puVar6 + puVar6[0x46] + 0x118);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    temp_v4 = param_4;
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    temp_v1 = puVar6[0x46];
    if (temp_v1 != 0) {
      temp_v0 = (int)puVar6 + temp_v1 + 0x118;
    }
    else {
      temp_v0 = 0;
    }
    if ((temp_v0 != 0) && (-1 < (int)puVar1)) {
      if (temp_v1 != 0) {
        temp_v4 = (unsigned int *)((int)puVar6 + temp_v1 + 0x118);
      }
      else {
        temp_v4 = (unsigned int *)0x0;
      }
      temp_v3 = FUN_002b50e4(&temp_v4);
    }
    temp_v1 = puVar6[0x47];
    temp_v3 = temp_v3 | (unsigned int)puVar1;
    if (temp_v1 != 0) {
      temp_v0 = (int)puVar6 + temp_v1 + 0x11c;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      if (temp_v1 != 0) {
        temp_v0 = (int)puVar6 + temp_v1 + 0x11c;
      }
      else {
        temp_v0 = 0;
      }
      temp_v2 = *(int *)(temp_v0 + 8);
      if (temp_v2 != 0) {
        puVar7 = (unsigned int *)(temp_v2 + temp_v0 + 8);
      }
      if (puVar7 == (unsigned int *)0x0) {
        temp_v3 = temp_v3 | 8;
      }
      else {
        puVar6 = (unsigned int *)0x0;
        if ((*puVar7 & 0x40000000) != 0) {
          puVar6 = puVar7;
        }
        temp_v4 = puVar7;
        nw_gfx_res_SetupReferenceLut(puVar6,param_3);
        if (-1 < (int)puVar6) {
          temp_v1 = FUN_002b50e4(&temp_v4);
          temp_v3 = temp_v3 | temp_v1;
        }
        temp_v3 = temp_v3 | (unsigned int)puVar6;
      }
    }
  }
  return temp_v3;
}

} /* extern "C" */
