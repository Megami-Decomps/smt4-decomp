/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126edc` (_code @ 0x126edc, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004e64c0; /* 0x4e64c0 */

extern int *FUN_002b5f84(void);
/* Supplied declaration required: FUN_002bcf58. */


void FUN_00126edc(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [152];
  
  piVar1 = (int *)FUN_002b5f84();
  *piVar1 = *piVar1 + 1;
  FUN_002bcf58(&DAT_004e64c0,temp_v0,0x9c);
                    /* WARNING: Treating indirect jump as return */
  return;
}
