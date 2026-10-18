/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dcb94` (_code @ 0x3dcb94, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
    unsigned int sp94; /* 0x94: local_94 */
} param_1_stack;

/* Supplied declaration required: FUN_002bcd68. */


unsigned int FUN_003dcb94(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  while ((FUN_002bcd68(temp_v1,param_1 + temp_v0 * 0x8c + 0x2bc4,0x8c), (temp_v3 & 1) == 0 ||
         (temp_v2 != 0))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 2) {
      return 1;
    }
  }
  return 0;
}
