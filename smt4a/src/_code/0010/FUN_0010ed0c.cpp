/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ed0c` (_code @ 0x10ed0c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(void);

extern unsigned char LAB_0010ece5; /* 0x10ece5 */
extern unsigned char DAT_0055b11c; /* 0x55b11c */

/* Supplied declaration required: sharedRefAddRef. */
extern unsigned int *_Znwj(unsigned int);


void FUN_0010ed0c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  sharedRefAddRef();
  puVar1 = (unsigned int *)_Znwj(0x14);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[4] = param_2;
    puVar1[1] = param_1;
    *puVar1 = (unsigned int)&DAT_0055b11c;
    puVar1[3] = 0;
    puVar1[2] = (unsigned int)&LAB_0010ece5;
  }
  return;
}

} /* extern "C" */
