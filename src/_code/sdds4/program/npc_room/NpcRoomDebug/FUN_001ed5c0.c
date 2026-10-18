/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed5c0` (_code @ 0x1ed5c0, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0044d1b0; /* 0x44d1b0 */

extern int FUN_001a1558(void);
/* Supplied declaration required: FUN_0026df40. */
/* Supplied declaration required: FUN_002a0678. */
extern int FUN_002b902c(unsigned int);
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


unsigned int FUN_001ed5c0(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  puVar2 = DAT_0044d1b0;
  temp_v1 = DAT_0044d1b0[1];
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) && (DAT_0044d1b0 != (unsigned int *)0x0)) {
        FUN_002c45b8(*DAT_0044d1b0,0);
        FUN_002c4360(puVar2);
        DAT_0044d1b0 = (unsigned int *)0x0;
      }
    }
    else {
      temp_v1 = FUN_001a1558();
      if (temp_v1 != 0) {
        FUN_002a0678(0,1);
        FUN_002a0678(1);
        puVar2[1] = puVar2[1] + 1;
      }
    }
  }
  else {
    temp_v1 = FUN_002b902c(3);
    if ((temp_v1 != 0) && (*(unsigned short *)(puVar2 + 2) < 999)) {
      *(unsigned short *)(puVar2 + 2) = *(unsigned short *)(puVar2 + 2) + 1;
    }
    temp_v1 = FUN_002b902c(4);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(puVar2 + 2);
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      *(short *)(puVar2 + 2) = temp_v0 - 1;
    }
    temp_v1 = FUN_002bffbc(0);
    if (temp_v1 != 0) {
      FUN_0026df40(*(unsigned short *)(puVar2 + 2));
      puVar2[1] = puVar2[1] + 1;
    }
  }
  return 0;
}
