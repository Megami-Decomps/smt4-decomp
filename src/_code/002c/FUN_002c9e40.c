/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9e40` (_code @ 0x2c9e40, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0019faa0. */
/* Supplied declaration required: FUN_0024dcec. */
/* Supplied declaration required: FUN_0024dcfc. */
/* Supplied declaration required: FUN_00263588. */
/* Supplied declaration required: FUN_00263c80. */
/* Supplied declaration required: FUN_0029c2cc. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002c9e40(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c08f0();
  temp_v0 = DAT_004342c8;
  if (DAT_004342c8 != 0) {
    FUN_0024dcfc(*(unsigned int *)(DAT_004342c8 + 0x2c));
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
    FUN_0024dcec(0);
    if (*(int *)(temp_v0 + 0x730) != 0) {
      FUN_0029c2cc(*(int *)(temp_v0 + 0x730),0);
      FUN_00263588(*(unsigned int *)(temp_v0 + 0x730));
      *(unsigned int *)(temp_v0 + 0x730) = 0;
      *(unsigned int *)(temp_v0 + 0x734) = 0;
    }
    FUN_00263c80(temp_v0 + 0x58);
    FUN_0019faa0(0,1);
    FUN_002c415c(DAT_004342c8);
    DAT_004342c8 = 0;
  }
  FUN_002c43b4(*(unsigned int *)(temp_v1 + 0x44),0);
  return;
}
