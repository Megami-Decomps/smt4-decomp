/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037de7c` (_code @ 0x37de7c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(...);
int FUN_0019c364(void);
int FUN_001b4a90(unsigned int *, int, unsigned int);
int FUN_00237210(unsigned int);

extern unsigned int *DAT_00588fe8; /* 0x588fe8 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0037de7c(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_00588fe8;
  temp_v0 = 0;
  if (*(char *)((int)DAT_00588fe8 + 0x59a) != '\0') {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned char *)((int)puVar1 + 0x59a));
  }
  *(unsigned char *)((int)puVar1 + 0x59a) = 0;
  FUN_001b4a90(puVar1 + 0x151,0x54,0xffffffff);
  FUN_00237210(puVar1[0x8ee]);
  puVar2 = DAT_00588fe8;
  if (DAT_00588fe8[0x95d] != 0) {
    FUN_0019c364();
    puVar2[0x95d] = 0;
  }
  if (puVar2[0x95b] != 0) {
    FUN_0019a5a0();
    puVar2[0x95b] = 0;
  }
  if (puVar2[0x95c] != 0) {
    FUN_0019a5a0();
    puVar2[0x95c] = 0;
  }
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_00588fe8 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
