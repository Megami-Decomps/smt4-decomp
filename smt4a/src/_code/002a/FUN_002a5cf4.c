/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5cf4` (_code @ 0x2a5cf4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00230ac0. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_0038b548. */


void FUN_002a5cf4(void)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  temp_v1 = DAT_0057f268;
  if (DAT_0057f268 != 0) {
    temp_v0 = *(char *)(DAT_0057f268 + 0x9b4);
    if ((temp_v0 != '\f' && temp_v0 != '\x04') &&
       ((temp_v0 != '\x0f' && temp_v0 != '\x11') && temp_v0 != '\x13')) {
      FUN_00230ac0(7,0xffffffff,0);
    }
    FUN_003344b4(0);
    temp_v0 = *(char *)(temp_v1 + 0x9b4);
    if ((temp_v0 != '\x01' && temp_v0 != '\x06') && (temp_v0 != '\a' && temp_v0 != '\x12')) {
      FUN_0022e774();
    }
    FUN_0038b548(1);
    FUN_0020b718(0x17,1);
    return;
  }
  return;
}
