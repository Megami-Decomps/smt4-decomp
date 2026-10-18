/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d5a4` (_code @ 0x26d5a4, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026d654. */
/* Supplied declaration required: FUN_00293348. */
/* Supplied declaration required: FUN_00298d28. */
/* Supplied declaration required: FUN_0029ca58. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0026d5a4(void)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_0043dcf0;
  if (DAT_0043dcf0 == 0) {
    return;
  }
  temp_v0 = *(char *)(DAT_0043dcf0 + 0x66c);
  if ((temp_v0 != '\f' && temp_v0 != '\x04') && (temp_v0 != '\x0f')) {
    temp_v2 = 0;
    do {
      FUN_002bd8e8(temp_v1 + temp_v2 * 0x8c + 0x298,7,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    FUN_002bd8e8(temp_v1 + 0x4c8,7,0);
  }
  FUN_00298d28(0);
  temp_v0 = *(char *)(temp_v1 + 0x66c);
  if ((temp_v0 != '\x01' && temp_v0 != '\x06') && (temp_v0 != '\a')) {
    FUN_0029ca58();
  }
  FUN_0026d654(1);
  FUN_00293348(0x15,1);
  return;
}
