/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359b3c` (_code @ 0x359b3c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00473848; /* 0x473848 */
extern int DAT_0047384c; /* 0x47384c */

/* Supplied declaration required: FUN_003595c4. */
/* Supplied declaration required: FUN_00359a3c. */


void FUN_00359b3c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  if (DAT_0047384c != 0) {
    FUN_00359a3c();
  }
  else {
    temp_v0 = DAT_00473848 == 0;
    if (!temp_v0) {
      FUN_003595c4(param_1);
    }
    if (!temp_v0) {
      return;
    }
  }
  return;
}
