/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ca8c` (_code @ 0x26ca8c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0028c0a8. */
/* Supplied declaration required: FUN_0028c0b8. */
/* Supplied declaration required: FUN_0028c0ec. */
extern int FUN_0028c124(int);


void FUN_0026ca8c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00439ca8;
  temp_v1 = FUN_0028c124(DAT_00439ca8 + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x2200;
    FUN_0028c0ec();
    if (temp_v1 != 0) {
      FUN_0028c0b8(temp_v0 + 8);
      FUN_0028c0a8(temp_v0 + 0x2200);
      return;
    }
  }
  return;
}
