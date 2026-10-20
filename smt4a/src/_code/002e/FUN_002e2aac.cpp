/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2aac` (_code @ 0x2e2aac, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_002309dc(void);
int FUN_002e26a4(void);
int FUN_00330b74(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_0037dab0(void);
int FUN_003a76b8(void);
int FUN_003b6dc4(void);

extern unsigned int *DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002309dc. */
/* Supplied declaration required: FUN_002e26a4. */
/* Supplied declaration required: FUN_00330b74. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0037dab0. */
/* Supplied declaration required: FUN_003a76b8. */
/* Supplied declaration required: FUN_003b6dc4. */


void FUN_002e2aac(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f108;
  FUN_003b6dc4();
  FUN_003a76b8();
  FUN_00330b74();
  FUN_002309dc();
  FUN_0037dab0();
  FUN_0035b304();
  FUN_0037b450();
  FUN_002e26a4();
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f108 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
