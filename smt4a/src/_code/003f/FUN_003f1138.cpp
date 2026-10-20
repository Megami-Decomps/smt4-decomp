/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f1138` (_code @ 0x3f1138, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */


int FUN_003f1138(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = 4;
  do {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408);
    if ((puVar2[1] & DAT_0057397c) == 0 && (*puVar2 & DAT_00573978) == 0) {
      return *(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408;
    }
    temp_v0 = (int)(short)((short)temp_v0 + 1);
  } while (temp_v0 < 0x36);
  return 0;
}

} /* extern "C" */
