/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001581dc` (_code @ 0x1581dc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c88c(unsigned int, unsigned int *);
int FUN_00178b04(int, unsigned char *, int);

extern unsigned char LAB_00158268; /* 0x158268 */

/* Supplied declaration required: FUN_0016c88c. */
/* Supplied declaration required: FUN_00178b04. */


unsigned int * FUN_001581dc(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)0x8c;
  FUN_00178b04(0x8c,&LAB_00158268,0x38);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = (unsigned int)"护A抔A";
    *(unsigned char *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
  }
  FUN_0016c88c(param_1,puVar1);
  return puVar1;
}

} /* extern "C" */
