/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7c2c` (_code @ 0x2b7c2c, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_00581038; /* 0x581038 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_002b7c2c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  do {
    temp_v0 = DAT_00581038 + temp_v5 * 0x54;
    pcVar2 = (char *)(temp_v0 + 0x5c);
    temp_v2 = 0;
    if (*pcVar2 != '\0') {
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x84);
    }
    if (*pcVar2 != '\0' && temp_v2 != 0) {
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0x8c);
      if (temp_v2 != 0) {
        pcVar2 = *(char **)(temp_v0 + 0x88);
      }
      if ((temp_v2 != 0 && pcVar2 != (char *)0x0) && (temp_v2 = 0, *(int *)(pcVar2 + 4) != 0)) {
        FUN_001aea28(DAT_0056fcc0);
        temp_v2 = temp_v3;
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0x10);
  temp_v5 = 0;
  do {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(DAT_00581038 + temp_v5 * 0x20 + temp_v0 * 4 + 0x20);
      if (temp_v1 != 0) {
        temp_v2 = *(unsigned int *)(temp_v1 + 4);
      }
      if (temp_v1 != 0 && temp_v2 != 0) {
        FUN_001aea28(DAT_0056fcc0);
        temp_v2 = temp_v4;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 2);
  return;
}
