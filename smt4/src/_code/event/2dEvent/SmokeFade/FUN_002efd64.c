/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efd64` (_code @ 0x2efd64, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

extern int FUN_0024bb10(unsigned int);
extern int FUN_002a60b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002efd64(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_0043df28;
  FUN_002c415c(DAT_0043df28[2]);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df48) != '\0') {
      temp_v0 = FUN_002a60b4((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_002ae898((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df48) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v1 = 0;
  do {
    if (*(char *)(temp_v1 * 0xc + 0x43df49) != '\0') {
      temp_v0 = FUN_0024bb10((&DAT_0043df40)[temp_v1 * 3]);
      if (temp_v0 != 0) {
        FUN_002ae7e8((&DAT_0043df40)[temp_v1 * 3]);
      }
      *(unsigned char *)(temp_v1 * 0xc + 0x43df49) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043df28 = (unsigned int *)0x0;
  return;
}
