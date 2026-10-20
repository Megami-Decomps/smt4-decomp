/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e8194` (_code @ 0x3e8194, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char * FUN_003e8194(short *param_1,unsigned int param_2)

{
  short temp_v0;
  unsigned char *pbVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = *param_1;
  puVar4 = (unsigned int *)((int)param_1 + *(int *)(param_1 + 2));
  if (temp_v0 == 0x6000) {
    pbVar2 = (unsigned char *)(puVar4[1] + (int)puVar4);
  }
  else {
    if (temp_v0 != 0x6001) {
      if (temp_v0 != 0x6002) {
        return (unsigned char *)0x0;
      }
      temp_v1 = (unsigned int)(unsigned char)*puVar4;
      temp_v4 = param_2 <= temp_v1;
      temp_v3 = temp_v1 == param_2;
      if (!temp_v4 || temp_v3) {
        temp_v4 = *(unsigned char *)((int)puVar4 + 1) <= param_2;
        temp_v3 = param_2 == *(unsigned char *)((int)puVar4 + 1);
      }
      if (!temp_v4 || temp_v3) {
        temp_v1 = puVar4[(param_2 - temp_v1) * 2 + 2];
        return (unsigned char *)(temp_v1 + (int)puVar4);
      }
    }
    else {
      temp_v2 = *puVar4;
      temp_v1 = 0;
      if (temp_v1 < temp_v2) {
        do {
          if (param_2 <= *(unsigned char *)((int)puVar4 + temp_v1 + 4)) {
            temp_v1 = *(unsigned int *)((int)puVar4 + ((temp_v2 + 3) & 0xfffffffc) + temp_v1 * 8 + 8);
            return (unsigned char *)(temp_v1 + (int)puVar4);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v2);
      }
    }
    pbVar2 = (unsigned char *)0x0;
  }
  return pbVar2;
}

} /* extern "C" */
