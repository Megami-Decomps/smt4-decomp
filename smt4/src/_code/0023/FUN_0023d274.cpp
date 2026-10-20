/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d274` (_code @ 0x23d274, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int FUN_0023d274(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  
  puVar3 = *(unsigned short **)(param_1 + 0x24);
  temp_v0 = (unsigned int)*puVar3;
  temp_v1 = (temp_v0 - 1) + (unsigned int)puVar3[1];
  if ((int)temp_v0 <= temp_v1) {
    while (*(int *)(*(int *)(param_1 + 0x30) + temp_v0 * 0xc) < param_2) {
      temp_v0 = temp_v0 + 1;
      if (temp_v1 < (int)temp_v0) {
        return temp_v0;
      }
    }
    if ((*(int *)(*(int *)(param_1 + 0x30) + temp_v0 * 0xc) != param_2) && (*puVar3 != temp_v0)) {
      temp_v0 = temp_v0 - 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
