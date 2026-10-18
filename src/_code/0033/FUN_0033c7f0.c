/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c7f0` (_code @ 0x33c7f0, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0019f990; /* 0x19f990 */

/* Supplied declaration required: FUN_002b67c0. */


unsigned int FUN_0033c7f0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 < 0x43) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) != 0) {
      return 1;
    }
    if (*(char *)(temp_v0 + 0x493838) == '\0') {
      FUN_002b67c0(*(unsigned int *)(temp_v0 + 0x49382c),temp_v0 + 0x493830,0,&LAB_0019f990,
                   (unsigned int *)(temp_v0 + 0x49382c));
      return 1;
    }
  }
  return 0;
}
