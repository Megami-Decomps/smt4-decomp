/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleInitializerInternal` (_code @ 0x14938c, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleInitializerInternal
               (int *param_1,unsigned int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = *(int *)*param_2;
  temp_v0 = 0;
  if (temp_v2 != 0x1000000) {
    if (0x1000000 >= temp_v2) {
      if (temp_v2 == 0x100000) {
        temp_v0 = 0x24;
      }
      else if (temp_v2 < 0x100001) {
        if (temp_v2 != -0x80000000) {
          if (temp_v2 == 0) {
            temp_v0 = 0xc;
          }
          else if (temp_v2 == 0x80000) {
            temp_v0 = 0x10;
          }
        }
        else {
          temp_v0 = 0x1c;
        }
      }
      else if (temp_v2 != 0x200000) {
        if (temp_v2 != 0x400000) {
          if (temp_v2 == 0x800000) {
            temp_v0 = 0x10;
          }
        }
        else {
          temp_v0 = 0x14;
        }
      }
      else {
        temp_v0 = 0x1c;
      }
    }
    else if (temp_v2 != 0x10000000) {
      if (temp_v2 < 0x10000001) {
        if (temp_v2 != 0x2000000) {
          if (temp_v2 == 0x4000000) {
            temp_v0 = 0x18;
          }
          else if (temp_v2 == 0x8000000) {
            temp_v0 = 0x10;
          }
        }
        else {
          temp_v0 = 0x14;
        }
      }
      else if (temp_v2 != 0x20000000) {
        if (temp_v2 == 0x40000000) {
          temp_v0 = 0x20;
        }
      }
      else {
        temp_v0 = 0x10;
      }
    }
    else {
      temp_v0 = 0x10;
    }
  }
  else {
    temp_v0 = 0x14;
  }
  temp_v3 = param_1[1];
  param_1[1] = 4;
  temp_v1 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v1 = param_1[2];
  }
  param_1[2] = temp_v1;
  *param_1 = temp_v0 + ((*param_1 + 3U) & 0xfffffffc);
  param_1[1] = temp_v3;
  temp_v1 = param_1[2];
  if ((unsigned int)param_1[2] < temp_v3) {
    temp_v1 = temp_v3;
  }
  param_1[2] = temp_v1;
  return;
}
