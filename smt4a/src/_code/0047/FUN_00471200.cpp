/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471200` (_code @ 0x471200, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00472350(unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int DAT_0057027c; /* 0x57027c */

extern int FUN_001b2bd8(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00472350. */


void FUN_00471200(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001b2bd8(param_1,0x32,0,param_3);
  if (temp_v0 != 0) {
    FUN_00472350(DAT_0057027c,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
