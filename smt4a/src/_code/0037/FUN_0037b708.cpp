/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b708` (_code @ 0x37b708, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019c364(unsigned int);
int FUN_00237210(unsigned int);
int FUN_003b5fc8(unsigned int);
int rt_memcpy_w(unsigned int, unsigned int *, int);

extern unsigned int *DAT_0057f118; /* 0x57f118 */

/* Supplied declaration required: FUN_001631d0. */
extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_003b5fc8. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0037b708(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_0057f118;
  temp_v0 = FUN_001801a4();
  rt_memcpy_w(temp_v0,puVar1 + 0x5b,0xe);
  FUN_0019a5a0(puVar1[0x14]);
  FUN_0019a5a0(puVar1[0x15]);
  FUN_0019a5a0(puVar1[0x16]);
  FUN_00237210(puVar1[0x17]);
  FUN_0019c364(puVar1[0x13]);
  FUN_003b5fc8(puVar1[3]);
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f118 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
