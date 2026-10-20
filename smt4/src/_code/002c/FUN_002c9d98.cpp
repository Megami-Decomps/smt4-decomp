/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9d98` (_code @ 0x2c9d98, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: jyoucyuGetTableEntry. */


void FUN_002c9d98(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *(unsigned char *)(temp_v0 + 0xc) = 1;
  param_1[1] = -1;
  if (*(int **)(temp_v0 + 0x18) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v0 + 0x18) + 0x10))();
    if (*(int **)(temp_v0 + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x18) + 4))();
    }
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  jyoucyuGetTableEntry(0);
  return;
}

} /* extern "C" */
