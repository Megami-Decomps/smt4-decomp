/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002008b4` (_code @ 0x2008b4, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043e170; /* 0x43e170 */

/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_002008b4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = DAT_0043e170;
  temp_v1 = 0;
  if (DAT_0043e170 != (unsigned int *)0x0) {
    temp_v0 = FUN_002c1f28();
    puVar2 = DAT_0043e170;
    if (temp_v0 != 0) {
      FUN_002c45b8(*DAT_0043e170,0);
      FUN_002c4360(puVar2);
      DAT_0043e170 = (unsigned int *)0x0;
      return 1;
    }
    temp_v0 = puVar1[2];
    if (temp_v0 != 3) {
      if (puVar1[3] != 3) {
        if (temp_v0 != 4) {
          if (DAT_0043e170[2] == 2) {
            DAT_0043e170[2] = 3;
          }
          else {
            DAT_0043e170[3] = 3;
          }
          FUN_002bf030(puVar2 + 0xe,1);
          FUN_002bf9e8(0x1000181);
          return 0;
        }
      }
      else if (temp_v0 != 4) {
        return 0;
      }
      FUN_002c45b8(*DAT_0043e170,0);
      FUN_002c4360(puVar2);
      temp_v1 = 1;
      DAT_0043e170 = (unsigned int *)0x0;
    }
  }
  else {
    temp_v0 = FUN_002c1f28();
    if (temp_v0 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
