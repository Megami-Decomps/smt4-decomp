/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267bf0` (_code @ 0x267bf0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(unsigned int);
int FUN_001add24(int);

extern unsigned char DAT_00588c40; /* 0x588c40 */

/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */


void FUN_00267bf0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588c40 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) != 0) {
    FUN_0019c364(*(unsigned int *)((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) + 0x43a0));
    FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x439c));
    FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x43a4));
    FUN_001695a0();
    FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0x43a8));
    FUN_001add24(0x14);
    FUN_001add24(0x25);
    temp_v0 = 0;
    do {
      FUN_0019a7f4(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    FUN_0019a5a0((*(int *)((unsigned char *)&DAT_00588c40 + 0x4)));
    (*(int *)((unsigned char *)&DAT_00588c40 + 0x4)) = 0;
  }
  return;
}

} /* extern "C" */
