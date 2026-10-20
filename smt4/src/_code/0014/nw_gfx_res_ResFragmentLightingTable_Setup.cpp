/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResFragmentLightingTable_Setup` (_code @ 0x14b1d8, 0x3d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_res_SetupReferenceLut(unsigned int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int FUN_002b50e4(int *);
/* Supplied declaration required: nw_gfx_res_SetupReferenceLut. */


unsigned int nw_gfx_res_ResFragmentLightingTable_Setup
               (int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v1 = *(int *)(*param_1 + 0xc);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0xc + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v5 = param_4;
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 0xc);
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + 0xc + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)(*param_1 + 0xc);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0xc + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = *(int *)(temp_v1 + 8);
      if (temp_v5 != 0) {
        temp_v5 = temp_v1 + 8 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v3 = FUN_002b50e4(&temp_v5);
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  temp_v1 = *(int *)(*param_1 + 0x10);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0x10 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 0x10);
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + 0x10 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)(*param_1 + 0x10);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x10 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = *(int *)(temp_v1 + 8);
      if (temp_v5 != 0) {
        temp_v5 = temp_v1 + 8 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v0 = FUN_002b50e4(&temp_v5);
      temp_v3 = temp_v3 | temp_v0;
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  temp_v1 = *(int *)*param_1;
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)*param_1;
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)*param_1;
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = *(int *)(temp_v1 + 8);
      if (temp_v5 != 0) {
        temp_v5 = temp_v1 + 8 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v0 = FUN_002b50e4(&temp_v5);
      temp_v3 = temp_v3 | temp_v0;
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  temp_v1 = *(int *)(*param_1 + 4);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 4 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 4);
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + 4 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)(*param_1 + 4);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 4 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = *(int *)(temp_v1 + 8);
      if (temp_v5 != 0) {
        temp_v5 = temp_v1 + 8 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v0 = FUN_002b50e4(&temp_v5);
      temp_v3 = temp_v3 | temp_v0;
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  temp_v1 = *(int *)(*param_1 + 8);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 8 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 8);
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + 8 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)(*param_1 + 8);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 8 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v5 = *(int *)(temp_v1 + 8);
      if (temp_v5 != 0) {
        temp_v5 = temp_v1 + 8 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      temp_v0 = FUN_002b50e4(&temp_v5);
      temp_v3 = temp_v3 | temp_v0;
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  temp_v1 = *(int *)(*param_1 + 0x14);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0x14 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v1 = *(int *)(*param_1 + 0x14);
    if (temp_v1 != 0) {
      temp_v1 = *param_1 + 0x14 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar1 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    nw_gfx_res_SetupReferenceLut(puVar1,param_3);
    if (-1 < (int)puVar1) {
      temp_v1 = *(int *)(*param_1 + 0x14);
      if (temp_v1 != 0) {
        temp_v1 = *param_1 + 0x14 + temp_v1;
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = *(int *)(temp_v1 + 8);
      if (temp_v2 != 0) {
        temp_v4 = temp_v2 + temp_v1 + 8;
      }
      temp_v5 = temp_v4;
      temp_v0 = FUN_002b50e4(&temp_v5);
      temp_v3 = temp_v3 | temp_v0;
    }
    temp_v3 = temp_v3 | (unsigned int)puVar1;
  }
  return temp_v3;
}

} /* extern "C" */
