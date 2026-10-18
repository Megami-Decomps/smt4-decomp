/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002579bc` (_code @ 0x2579bc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern int FUN_0028dccc(unsigned int);
/* Supplied declaration required: FUN_002b8454. */


void FUN_002579bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043dcf0;
  if (DAT_0043dcf0 == 0) {
    return;
  }
  *(unsigned char *)(DAT_0043dcf0 + 0x17f0) = param_1 == 0;
  if (*(char *)(temp_v0 + 0x17f0) == '\0') {
    temp_v0 = FUN_0028dccc(3);
    if (temp_v0 != 0) {
      return;
    }
    FUN_002b8454(3,3,0xb,1);
    return;
  }
  FUN_002b8454(3,0x12,0,1);
  return;
}
