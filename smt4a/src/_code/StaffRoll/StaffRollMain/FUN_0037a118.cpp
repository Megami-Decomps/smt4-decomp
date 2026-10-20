/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a118` (_code @ 0x37a118, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_0019a7f4(int, int);
int FUN_00212204(int);
int FUN_002e132c(int);
int FUN_003d2d6c(int);

extern unsigned int *DAT_0056fcc8; /* 0x56fcc8 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_00212204. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_003d2d6c. */


void FUN_0037a118(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0056fcc8;
  *(unsigned char *)((int)DAT_0056fcc8 + 5) = 1;
  if (*(char *)(puVar1 + 1) != '\0') {
    FUN_00212204(0);
    FUN_00212204(1);
  }
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x29,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  FUN_002e132c(0x29);
  FUN_003d2d6c(0xf);
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0056fcc8 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
