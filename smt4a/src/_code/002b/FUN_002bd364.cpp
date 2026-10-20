/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd364` (_code @ 0x2bd364, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_001919a4(void);
int FUN_002e3328(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_001919a4. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_002bd364(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_001919a4();
    FUN_002e3328(*(unsigned int *)(temp_v0 + 0x1c));
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  jyoucyuGetTableEntry(0);
  return;
}

} /* extern "C" */
