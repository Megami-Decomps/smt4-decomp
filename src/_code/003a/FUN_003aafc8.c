/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aafc8` (_code @ 0x3aafc8, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002c1abc. */
/* Supplied declaration required: FUN_002c1b64. */


void FUN_003aafc8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  FUN_002bef14();
  *(unsigned int *)(param_1 + 0x594) = 0x1f;
  temp_v0 = param_1 + *(int *)(param_1 + 0x14) * 8;
  pcVar2 = *(romwright_code **)(temp_v0 + 0xa688);
  if ((pcVar2 != (romwright_code *)0x0) ||
     (((*(unsigned int *)(temp_v0 + 0xa68c) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0xa68c) != 0)))) {
    if ((*(unsigned int *)(temp_v0 + 0xa68c) & 1) != 0) {
      pcVar2 = *(romwright_code **)(pcVar2 + *(int *)(param_1 + ((int)*(unsigned int *)(temp_v0 + 0xa68c) >> 1)));
    }
    (*pcVar2)();
  }
  FUN_002c1b64(DAT_0044ea00);
  FUN_002c1abc(DAT_0044ea00);
  return;
}
