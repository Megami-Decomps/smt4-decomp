/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244ee0` (_code @ 0x244ee0, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_00244ee0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b9024();
  switch(*(unsigned char *)(param_1 + 10)) {
  case 0:
    return 0x3ef;
  case 1:
    return 0x3f0;
  case 2:
    return 1000;
  case 3:
    return 0x3e9;
  case 4:
    return 0x3ea;
  case 5:
    return 0x3eb;
  case 6:
    return 0x3ed;
  case 7:
    return 0x3ee;
  default:
    return 0;
  case 0x11:
    return 0x3ec;
  }
}
