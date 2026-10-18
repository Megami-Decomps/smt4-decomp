/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d2c4` (_code @ 0x10d2c4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} void_stack;

extern int DAT_005949dc; /* 0x5949dc */
extern unsigned char DAT_00630344; /* 0x630344 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002eda80. */


void FUN_0010d2c4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [12];
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  
  FUN_002e6e34(temp_v0,&DAT_00630344);
  if (DAT_005949dc != 0) {
    temp_v2 = *(int *)(DAT_005949dc + 0x138);
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_002eda80(temp_v3,DAT_005949dc + 0x128,&temp_v1,&temp_v2);
  }
  FUN_002e6e5c(temp_v0);
  return;
}
