/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ccb4` (_code @ 0x16ccb4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(unsigned int *, unsigned char [152], int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_006428e4; /* 0x6428e4 */

extern int *FUN_0016ccfc(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0016ccb4(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0 [152];
  
  piVar1 = (int *)FUN_0016ccfc();
  *piVar1 = *piVar1 + 1;
  rt_memcpy_w(&DAT_006428e4,temp_v0,0x9c);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
