/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1810` (_code @ 0x1a1810, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_001afa44(void);


void FUN_001a1810(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001afa44();
  if (*(char *)(temp_v0 + 0x30) == '\0') {
    *(unsigned char *)(temp_v0 + 8) = param_1;
  }
  return;
}
