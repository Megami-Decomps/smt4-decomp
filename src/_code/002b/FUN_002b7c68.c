/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7c68` (_code @ 0x2b7c68, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned int DAT_00464a7c; /* 0x464a7c */
extern unsigned int DAT_00464a80; /* 0x464a80 */
extern unsigned char DAT_004d9780; /* 0x4d9780 */

/* Supplied declaration required: FUN_002b2574. */
/* Supplied declaration required: FUN_002b2d6c. */
/* Supplied declaration required: FUN_002c3b48. */


void FUN_002b7c68(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_4;
  
  uStack_4 = param_4;
  FUN_002c3b48(&DAT_004d9780,0x100);
  puVar1 = &DAT_004d9780;
  FUN_002b2574(&DAT_004d9780,0x100,param_3,&uStack_4);
  if (puVar1 != (unsigned char *)0x0) {
    FUN_002b2d6c(DAT_00464a80,DAT_00464a7c,&DAT_004d9780);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}
