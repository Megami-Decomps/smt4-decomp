/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002306ec` (_code @ 0x2306ec, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bdb2c. */


unsigned int FUN_002306ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e190;
  if (param_1 != 0) {
    *(unsigned char *)(DAT_0043e190 + 0x82) = 1;
    FUN_002bdb2c(temp_v0 + 0x7e0,0xe,0,temp_v0 + 0xa4,0xb);
    FUN_002bdac0(temp_v0 + 0x7e0,8,0);
  }
  else {
    *(unsigned char *)(DAT_0043e190 + 0x82) = 2;
    FUN_002bdb2c(temp_v0 + 0x7e0,0xe,0,temp_v0 + 0xa4,0xb);
    FUN_002bdac0(temp_v0 + 0x7e0,9,0);
  }
  return 1;
}
