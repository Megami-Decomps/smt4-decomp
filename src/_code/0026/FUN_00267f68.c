/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267f68` (_code @ 0x267f68, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00249acc. */
/* Supplied declaration required: FUN_0028c204. */
/* Supplied declaration required: FUN_0028c214. */
extern int FUN_0028c850(int);


void FUN_00267f68(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_00439ca8;
  temp_v1 = FUN_0028c850(DAT_00439ca8 + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x2200;
    FUN_00249acc();
    if (temp_v1 != 0) {
      FUN_0028c214(temp_v0 + 8);
      FUN_0028c204(temp_v0 + 0x2200);
      return;
    }
  }
  return;
}
