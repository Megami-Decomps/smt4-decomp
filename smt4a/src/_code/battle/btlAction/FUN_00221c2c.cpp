/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221c2c` (_code @ 0x221c2c, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00571138; /* 0x571138 */

/* Supplied declaration required: FUN_00163060. */


void FUN_00221c2c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_00571138 + 0x4)) == 0) {
    temp_v0 = 0x100;
    FUN_00163060(0x100,0x100,0,0xdbf4,1);
    (*(int *)((unsigned char *)&DAT_00571138 + 0x4)) = temp_v0;
  }
  return;
}

} /* extern "C" */
