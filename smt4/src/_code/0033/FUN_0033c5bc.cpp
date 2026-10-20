/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c5bc` (_code @ 0x33c5bc, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b6480(unsigned int, int, int, unsigned char *, unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0019fa94; /* 0x19fa94 */

/* Supplied declaration required: FUN_002b6480. */


unsigned int FUN_0033c5bc(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1 < 0x43) {
    temp_v0 = param_1 * 0x10;
    if (*(int *)(temp_v0 + 0x493830) != 0) {
      return 1;
    }
    if (*(char *)(temp_v0 + 0x493838) == '\0') {
      FUN_002b6480(*(unsigned int *)(temp_v0 + 0x49382c),temp_v0 + 0x493830,0,&LAB_0019fa94,
                   (unsigned int *)(temp_v0 + 0x49382c));
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
