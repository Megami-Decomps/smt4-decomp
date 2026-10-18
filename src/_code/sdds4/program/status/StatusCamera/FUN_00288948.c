/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288948` (_code @ 0x288948, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0044e178; /* 0x44e178 */

/* Supplied declaration required: FUN_0021b9f8. */
/* Supplied declaration required: FUN_00263eac. */
/* Supplied declaration required: FUN_00276cac. */
extern int FUN_002a0dd4(void);
/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_00288948(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044e178;
  FUN_00263eac(DAT_0044e178);
  FUN_002a5058();
  FUN_002c4360(temp_v0);
  DAT_0044e178 = 0;
  temp_v1 = FUN_002a0dd4();
  if (temp_v1 != 0) {
    FUN_0021b9f8();
    FUN_00276cac();
    return;
  }
  return;
}
