/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229ffc` (_code @ 0x229ffc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00203a5c(void);


unsigned int FUN_00229ffc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00203a5c();
  if ((*(short *)(temp_v0 + 0x10) == -1) || (*(short *)(temp_v0 + 0x12) < *(short *)(temp_v0 + 0x10))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
