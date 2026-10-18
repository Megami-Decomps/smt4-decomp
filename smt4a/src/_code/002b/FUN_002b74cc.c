/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b74cc` (_code @ 0x2b74cc, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00580c8c; /* 0x580c8c */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: FUN_00182540. */


void FUN_002b74cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  if ((DAT_00580c8c != 0) && (DAT_005f161f == '\0')) {
    temp_v2 = 0;
    do {
      temp_v0 = DAT_00580c8c + temp_v2 * 100;
      temp_v1 = temp_v0 + 0xc;
      temp_v3 = *(int *)(temp_v0 + 0x68) != 0;
      if (temp_v3) {
        temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0x6c);
      }
      if (temp_v3 && temp_v1 != 0) {
        FUN_00182540();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10);
  }
  return;
}
