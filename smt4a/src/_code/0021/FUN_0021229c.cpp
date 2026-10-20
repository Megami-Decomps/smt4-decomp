/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021229c` (_code @ 0x21229c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00181ae0(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_005b3bc8; /* 0x5b3bc8 */

/* Supplied declaration required: FUN_00181ae0. */
extern unsigned int FUN_002e3390(unsigned int);


void FUN_0021229c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002e3390(param_2);
  FUN_00181ae0(param_1,DAT_005b3bc8,param_2,temp_v0);
  return;
}

} /* extern "C" */
