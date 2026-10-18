/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e643c` (_code @ 0x2e643c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0064be80; /* 0x64be80 */

/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e63a8. */


unsigned int FUN_002e643c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  puVar3 = &DAT_0064be80;
  do {
    temp_v0 = *(unsigned int *)(puVar3 + 0x4c);
    if ((temp_v0 & 1) == 0) {
      FUN_002e63a8(param_1,param_2,puVar3);
      return param_1;
    }
    if (temp_v0 >> 1 == 0) {
      puVar2 = (unsigned char *)0x50;
      FUN_002e3d04();
      if (puVar2 == (unsigned char *)0x0) {
        return 0;
      }
      *(unsigned int *)(puVar3 + 0x4c) = *(unsigned int *)(puVar3 + 0x4c) | ((unsigned int)puVar2 & 0xfffffffe) | 1;
      FUN_002e6354(puVar2,0x50);
      puVar3 = puVar2;
      FUN_002e63a8(param_1,param_2,puVar3);
      return param_1;
    }
    puVar3 = (unsigned char *)(temp_v0 & 0xfffffffe);
  } while( 1 );
}
