/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047314c` (_code @ 0x47314c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00237210(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00237210. */


void FUN_0047314c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00163e40(param_1[1]);
  if (temp_v0 != 0) {
    if (param_1[0x107] != 0) {
      FUN_00237210();
      param_1[0x107] = 0;
    }
    *param_1 = *param_1 & 0xffffffcf;
    FUN_001631d0(param_1[1],0);
    return;
  }
  return;
}

} /* extern "C" */
