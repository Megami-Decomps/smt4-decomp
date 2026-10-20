/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358fbc` (_code @ 0x358fbc, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042e67c(int, unsigned int, unsigned int);
int FUN_0042e868(unsigned int);
int FUN_0042f318(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_005b3f98; /* 0x5b3f98 */

/* Supplied declaration required: FUN_0042e67c. */
/* Supplied declaration required: FUN_0042e868. */
/* Supplied declaration required: FUN_0042f318. */


void FUN_00358fbc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005b3f98[6];
  FUN_0042e67c(temp_v0,*DAT_005b3f98,DAT_005b3f98[1]);
  if (-1 < temp_v0) {
    FUN_0042f318(DAT_005b3f98[6],1);
    FUN_0042e868(DAT_005b3f98[6]);
    return;
  }
  return;
}

} /* extern "C" */
