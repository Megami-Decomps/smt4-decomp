/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fe15c` (_code @ 0x1fe15c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6fb8(void);
int FUN_002b2368(unsigned int);
int FUN_002c564c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002a6fb8. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c564c. */


void FUN_001fe15c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v0 + 0x18) = 1;
  if (*(int *)(temp_v0 + 0x1c) != 0) {
    FUN_002a6fb8();
    FUN_002b2368(*(unsigned int *)(temp_v0 + 0x1c));
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  FUN_002c564c(0);
  return;
}

} /* extern "C" */
