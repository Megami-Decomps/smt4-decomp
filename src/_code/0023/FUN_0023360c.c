/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023360c` (_code @ 0x23360c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00240d74(char *);
extern int FUN_0029e11c(void);
extern int FUN_0029e93c(char *);
extern int FUN_0029efc0(void);


int FUN_0023360c(char *param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029efc0();
  }
  else {
    temp_v0 = FUN_0029e93c(param_1 + 0x10);
  }
  if (*param_1 != '\x01') {
    temp_v1 = FUN_0029e11c();
  }
  else {
    temp_v1 = FUN_00240d74(param_1 + 0x10);
  }
  return temp_v1 + temp_v0;
}
