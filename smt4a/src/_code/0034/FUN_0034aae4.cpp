/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034aae4` (_code @ 0x34aae4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(unsigned int);
int FUN_001add24(int);
int FUN_0023b4b4(int);
int FUN_002e132c(int);

extern unsigned int *DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_0023b4b4. */
/* Supplied declaration required: FUN_002e132c. */


void FUN_0034aae4(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f28c;
  if (puVar1 != (unsigned int *)0x0) {
    for (temp_v0 = 0; temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x351); temp_v0 = temp_v0 + 1) {
      FUN_001641c4();
    }
    FUN_0019c364(puVar1[0x23f]);
    FUN_0019a5a0(puVar1[0x23e]);
    FUN_0019a5a0(puVar1[0x23d]);
    if (puVar1[0x240] != 0) {
      FUN_0019c364(puVar1[0x242]);
      FUN_0019a5a0(puVar1[0x240]);
      FUN_0019a5a0(puVar1[0x241]);
    }
    FUN_0019a7f4(0x1e,0);
    FUN_002e132c(0x1e);
    FUN_001add24(0x34);
    FUN_0023b4b4(1);
    FUN_001631d0(*puVar1,0);
    FUN_0019a5a0(puVar1);
    DAT_0057f28c = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
