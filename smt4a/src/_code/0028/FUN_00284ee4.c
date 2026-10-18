/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284ee4` (_code @ 0x284ee4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: FUN_00230ac0. */
/* Supplied declaration required: FUN_0023fc38. */


void FUN_00284ee4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f268;
  if (DAT_0057f268 != 0) {
    *(unsigned char *)(DAT_0057f268 + 0x34) = 0;
    *(unsigned char *)(temp_v0 + 0x35) = 0;
    if (param_1 != 0) {
      FUN_00230ac0(4,0xffffffff,0,*(char *)(temp_v0 + 0x42) != '\0');
    }
    if (*(unsigned char *)(temp_v0 + 0x9b4) >= 2) {
      FUN_0023fc38();
    }
    FUN_0020b718(0,1);
    return;
  }
  return;
}
