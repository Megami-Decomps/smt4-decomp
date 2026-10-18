/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001432cc` (_code @ 0x1432cc, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned short DAT_006474a0; /* 0x6474a0 */
extern unsigned short DAT_006474a2; /* 0x6474a2 */
extern unsigned char DAT_006474a4; /* 0x6474a4 */
extern unsigned int DAT_006474a8; /* 0x6474a8 */

/* Supplied declaration required: FUN_0013eb10. */
/* Supplied declaration required: FUN_0013f53c. */
/* Supplied declaration required: FUN_00146eb0. */
/* Supplied declaration required: FUN_002e6354. */


unsigned int FUN_001432cc(void)

{
/* irregular: 4 native warning(s); review required */
  FUN_00146eb0();
  FUN_0013eb10();
  FUN_0013f53c();
  FUN_002e6354(&DAT_006474a0,0x70);
  DAT_006474a0 = 0;
  DAT_006474a2 = 0x40;
  DAT_006474a4 = 1;
  DAT_006474a8 = 1;
  return 1;
}
