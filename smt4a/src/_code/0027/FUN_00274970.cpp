/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274970` (_code @ 0x274970, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern int DAT_0058103c; /* 0x58103c */


void FUN_00274970(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0058103c;
  if (DAT_0058103c == 0) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x194;
    if ((*(char *)(temp_v2 + 0x1dc) != '\0') && (*(int *)(temp_v2 + 500) == param_1)) {
      *(unsigned int *)(temp_v2 + 0x1e0) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
