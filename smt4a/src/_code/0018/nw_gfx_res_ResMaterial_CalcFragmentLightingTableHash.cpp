/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResMaterial_CalcFragmentLightingTableHash` (_code @ 0x18d6f4, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int nw_gfx_res_ResLookupTable_Dereference(unsigned int **);


void nw_gfx_res_ResMaterial_CalcFragmentLightingTableHash(int *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *unaff_r5;
  unsigned int *puVar5;
  unsigned int *temp_v4;
  
  puVar5 = (unsigned int *)0x0;
  temp_v1 = *(int *)(*param_1 + 0x288);
  if (temp_v1 != 0) {
    temp_v1 = *param_1 + 0x288 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  temp_v2 = *(int *)(temp_v1 + 0x28);
  if (temp_v2 != 0) {
    unaff_r5 = (int *)(temp_v2 + temp_v1 + 0x28);
  }
  if (temp_v2 == 0) {
    unaff_r5 = (int *)0x0;
  }
  temp_v1 = unaff_r5[3];
  temp_v3 = *(unsigned int *)(*param_1 + 0x2c4);
  if (temp_v1 != 0) {
    temp_v2 = (int)unaff_r5 + temp_v1 + 0xc;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    if (temp_v1 != 0) {
      temp_v1 = (int)unaff_r5 + temp_v1 + 0xc;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
    }
    if ((temp_v4 != (unsigned int *)0x0) && ((*temp_v4 & 0x40000000) == 0)) {
      temp_v4 = (unsigned int *)0x0;
    }
    if (temp_v4 != (unsigned int *)0x0) {
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ temp_v0;
    }
  }
  temp_v1 = unaff_r5[4];
  if (temp_v1 != 0) {
    temp_v2 = (int)unaff_r5 + temp_v1 + 0x10;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    if (temp_v1 != 0) {
      temp_v1 = (int)unaff_r5 + temp_v1 + 0x10;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
    }
    if ((temp_v4 != (unsigned int *)0x0) && ((*temp_v4 & 0x40000000) == 0)) {
      temp_v4 = (unsigned int *)0x0;
    }
    if (temp_v4 != (unsigned int *)0x0) {
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ ((temp_v0 >> 0x1c) | (temp_v0 << 4));
    }
  }
  if (*unaff_r5 != 0) {
    temp_v1 = *unaff_r5 + (int)unaff_r5;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    if (*unaff_r5 != 0) {
      temp_v1 = *unaff_r5 + (int)unaff_r5;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
    }
    if ((temp_v4 != (unsigned int *)0x0) && ((*temp_v4 & 0x40000000) == 0)) {
      temp_v4 = (unsigned int *)0x0;
    }
    if (temp_v4 != (unsigned int *)0x0) {
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ ((temp_v0 >> 0x18) | (temp_v0 << 8));
    }
  }
  temp_v1 = unaff_r5[1];
  if (temp_v1 != 0) {
    temp_v2 = (int)unaff_r5 + temp_v1 + 4;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    if (temp_v1 != 0) {
      temp_v1 = (int)unaff_r5 + temp_v1 + 4;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
    }
    if ((temp_v4 != (unsigned int *)0x0) && ((*temp_v4 & 0x40000000) == 0)) {
      temp_v4 = (unsigned int *)0x0;
    }
    if (temp_v4 != (unsigned int *)0x0) {
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ ((temp_v0 >> 0x14) | (temp_v0 << 0xc));
    }
  }
  temp_v1 = unaff_r5[2];
  if (temp_v1 != 0) {
    temp_v2 = (int)unaff_r5 + temp_v1 + 8;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    if (temp_v1 != 0) {
      temp_v1 = (int)unaff_r5 + temp_v1 + 8;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int *)(temp_v1 + 8 + temp_v2);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
    }
    if ((temp_v4 != (unsigned int *)0x0) && ((*temp_v4 & 0x40000000) == 0)) {
      temp_v4 = (unsigned int *)0x0;
    }
    if (temp_v4 != (unsigned int *)0x0) {
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ ((temp_v0 >> 0x10) | (temp_v0 << 0x10));
    }
  }
  temp_v1 = unaff_r5[5];
  if (temp_v1 != 0) {
    temp_v2 = (int)unaff_r5 + temp_v1 + 0x14;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    if (temp_v1 != 0) {
      temp_v1 = (int)unaff_r5 + temp_v1 + 0x14;
    }
    else {
      temp_v1 = 0;
    }
    temp_v2 = *(int *)(temp_v1 + 8);
    if (temp_v2 != 0) {
      puVar5 = (unsigned int *)(temp_v2 + temp_v1 + 8);
    }
    if ((puVar5 != (unsigned int *)0x0) && ((*puVar5 & 0x40000000) == 0)) {
      puVar5 = (unsigned int *)0x0;
    }
    if (puVar5 != (unsigned int *)0x0) {
      temp_v4 = puVar5;
      temp_v0 = nw_gfx_res_ResLookupTable_Dereference(&temp_v4);
      temp_v3 = temp_v3 ^ ((temp_v0 >> 0xc) | (temp_v0 << 0x14));
    }
  }
  *(unsigned int *)(*param_1 + 0x2c0) = temp_v3;
  return;
}

} /* extern "C" */
