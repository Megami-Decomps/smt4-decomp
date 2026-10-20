/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102a6c` (_code @ 0x102a6c, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_002e3cf8(void);


int FUN_00102a6c(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  if ((temp_v1 & 3) == 0) {
    puVar2 = (unsigned int *)FUN_002e3cf8();
    *puVar2 = 1;
    return -1;
  }
  if ((int)(temp_v1 << 0x1a) < 0) {
    temp_v0 = *(int *)(param_1 + 0x28);
  }
  else {
    temp_v0 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 0x18)) - *(int *)(param_1 + 0x10);
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    temp_v0 = temp_v0 - (unsigned int)*(unsigned char *)(param_1 + 0x45);
  }
  else if (((int)(temp_v1 << 0xc) < 0) && (0 < temp_v0)) {
    return temp_v0 - 1;
  }
  return temp_v0;
}

} /* extern "C" */
