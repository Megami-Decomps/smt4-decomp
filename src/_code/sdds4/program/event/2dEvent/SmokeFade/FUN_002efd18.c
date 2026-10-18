/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efd18` (_code @ 0x2efd18, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

extern int FUN_0024bd24(unsigned int);
extern int FUN_002a63f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002efd18(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0043df28;
  FUN_002c4360(DAT_0043df28[2]);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df48) != '\0') {
      temp_v0 = FUN_002a63f8((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_002aeb2c((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df48) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df49) != '\0') {
      temp_v0 = FUN_0024bd24((&DAT_0043df40)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_002aea7c((&DAT_0043df40)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df49) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043df28 = (unsigned int *)0x0;
  return;
}
