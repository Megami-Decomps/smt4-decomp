/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0d64` (_code @ 0x1d0d64, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


void FUN_001d0d64(int param_1,int param_2)

{
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    do {
      temp_v0 = temp_v1 * 0xd + param_2;
      temp_v2 = param_1 + temp_v1 * 0x24;
      puVar2 = (unsigned char *)(temp_v0 + 0x34);
      *(unsigned char *)(temp_v2 + 0x2075) = *puVar2;
      *(unsigned char *)(temp_v2 + 0x2076) = *(unsigned char *)(temp_v0 + 0x35);
      *(unsigned char *)(temp_v2 + 0x2077) = *(unsigned char *)(temp_v0 + 0x36);
      *(unsigned char *)(temp_v2 + 0x2078) = *(unsigned char *)(temp_v0 + 0x38);
      *(unsigned char *)(temp_v2 + 0x2079) = *(unsigned char *)(temp_v0 + 0x39);
      *(unsigned char *)(temp_v2 + 0x207a) = *(unsigned char *)(temp_v0 + 0x3a);
      *(unsigned char *)(temp_v2 + 0x207b) = *(unsigned char *)(temp_v0 + 0x3b);
      *(unsigned char *)(temp_v2 + 0x207c) = *(unsigned char *)(temp_v0 + 0x3c);
      *(unsigned char *)(temp_v2 + 0x207d) = *(unsigned char *)(temp_v0 + 0x3d);
      *(unsigned char *)(temp_v2 + 0x207e) = *(unsigned char *)(temp_v0 + 0x37);
      *(unsigned char *)(temp_v2 + 0x2074) = *(unsigned char *)(temp_v0 + 0x3e);
      temp_v4 = 0;
      if ((*(unsigned char *)(temp_v0 + 0x3e) != 0) && (temp_v4 = *(unsigned char *)(temp_v0 + 0x3e) & 1, temp_v4 == 1)) {
        *(unsigned int *)(temp_v2 + 0x206c) = param_1 + (unsigned int)*(unsigned char *)(temp_v0 + 0x3f) * 0x3c8 + 0x228;
      }
      if (temp_v4 < *(unsigned char *)(temp_v0 + 0x3e)) {
        do {
          temp_v3 = temp_v2 + temp_v4 * 4;
          temp_v5 = temp_v4 + 2;
          *(unsigned int *)(temp_v3 + 0x206c) = param_1 + (unsigned int)(unsigned char)puVar2[temp_v4 + 0xb] * 0x3c8 + 0x228;
          *(unsigned int *)(temp_v3 + 0x2070) = param_1 + (unsigned int)(unsigned char)puVar2[temp_v4 + 0xc] * 0x3c8 + 0x228;
          temp_v4 = temp_v5;
        } while ((int)temp_v5 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x3e));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned int *)(param_1 + 0x224));
  }
  return;
}

} /* extern "C" */
