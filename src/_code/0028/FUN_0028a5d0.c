/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a5d0` (_code @ 0x28a5d0, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026c480. */
/* Supplied declaration required: FUN_002935ec. */
/* Supplied declaration required: FUN_002bdac0. */


void FUN_0028a5d0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  
  temp_v0 = DAT_0043dcf0;
  if (DAT_0043dcf0 != 0) {
    *(unsigned char *)(DAT_0043dcf0 + 0x34) = 0;
    if (param_1 != 0) {
      unaff_r4 = 0;
    }
    *(unsigned char *)(temp_v0 + 0x35) = 0;
    if (param_1 != 0) {
      do {
        FUN_002bdac0(temp_v0 + unaff_r4 * 0x8c + 0x298,4,0);
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 < 4);
      if (*(char *)(temp_v0 + 0x42) != '\0') {
        FUN_002bdac0(temp_v0 + 0x4c8,6,0);
      }
      else {
        FUN_002bdac0(temp_v0 + 0x4c8,4,0);
      }
    }
    if (*(unsigned char *)(temp_v0 + 0x66c) >= 2) {
      FUN_0026c480();
    }
    FUN_002935ec(0,1);
    return;
  }
  return;
}
