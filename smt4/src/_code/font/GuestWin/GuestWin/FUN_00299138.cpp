/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299138` (_code @ 0x299138, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e110; /* 0x43e110 */

extern int FUN_002b6b20(void);
/* Supplied declaration required: FUN_002bee58. */


void FUN_00299138(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002b6b20();
  temp_v0 = DAT_0043e110;
  if (*(short *)(temp_v1 + 0x46) != 0) {
    *(unsigned int *)(DAT_0043e110 + 8) = 1;
    FUN_002bee58(temp_v0 + 0x30,0);
    return;
  }
  return;
}

} /* extern "C" */
