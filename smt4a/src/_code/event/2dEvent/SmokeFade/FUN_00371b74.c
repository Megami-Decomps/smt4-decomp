/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371b74` (_code @ 0x371b74, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f47c; /* 0x57f47c */
extern unsigned int DAT_0057f480; /* 0x57f480 */
extern unsigned int DAT_0057f484; /* 0x57f484 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_002e132c. */
extern int FUN_00341940(unsigned int);


void FUN_00371b74(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0057f47c;
  FUN_0019a5a0(DAT_0057f47c[2]);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f488) != '\0') {
      temp_v0 = FUN_0018206c((&DAT_0057f480)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_0019a7f4((&DAT_0057f480)[temp_v1 * 3],(&DAT_0057f484)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f488) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x57f489) != '\0') {
      temp_v0 = FUN_00341940((&DAT_0057f480)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_002e132c((&DAT_0057f480)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x57f489) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f47c = (unsigned int *)0x0;
  return;
}
