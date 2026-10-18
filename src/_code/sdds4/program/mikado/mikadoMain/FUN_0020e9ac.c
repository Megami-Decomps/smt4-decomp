/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020e9ac` (_code @ 0x20e9ac, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044cfd4; /* 0x44cfd4 */

extern int FUN_00263e60(int);
/* Supplied declaration required: FUN_002a7b7c. */
/* Supplied declaration required: FUN_002b2520. */
extern int FUN_002b2530(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_0020e9ac(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_0044cfd4;
  if (DAT_0044cfd4 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2530(*DAT_0044cfd4);
    puVar2 = DAT_0044cfd4;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_0044cfd4 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0044cfd4 + 1) = 1;
      if (puVar2[2] != 0) {
        FUN_002a7b7c();
        if (puVar2[2] != 0) {
          temp_v0 = FUN_00263e60(puVar2[2] + 0x110);
          FUN_002b2520(temp_v0 - 0x110);
        }
        puVar2[2] = 0;
      }
      FUN_002c4360(DAT_0044cfd4);
      DAT_0044cfd4 = (unsigned int *)0x0;
    }
  }
  return 0;
}
