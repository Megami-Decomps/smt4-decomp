/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d830` (_code @ 0x27d830, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0049f9c8; /* 0x49f9c8 */

extern int FUN_00287b10(int);
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002d298c. */


void FUN_0027d830(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c2b1c();
  if (DAT_0049f9c8 == '\0') {
    return;
  }
  temp_v1 = (int)*(short *)(temp_v0 + 0x2a);
  temp_v0 = FUN_00287b10(temp_v1);
  if (*(short *)(temp_v0 + 0x14) != 0) {
    FUN_002d298c(temp_v1);
    return;
  }
  FUN_002d298c(temp_v1,0xff);
  return;
}
