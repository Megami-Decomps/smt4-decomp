/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b89fc` (_code @ 0x2b89fc, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044db8c; /* 0x44db8c */

/* Supplied declaration required: FUN_002a72fc. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002b2530(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_002b89fc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_0044db8c;
  if (DAT_0044db8c != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2530(*DAT_0044db8c);
    puVar2 = DAT_0044db8c;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if (DAT_0044db8c != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0044db8c + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_002a72fc();
        FUN_002b2520(puVar2[7]);
        puVar2[7] = 0;
      }
      FUN_002c4360(DAT_0044db8c);
      DAT_0044db8c = (unsigned int *)0x0;
    }
  }
  return 0;
}
