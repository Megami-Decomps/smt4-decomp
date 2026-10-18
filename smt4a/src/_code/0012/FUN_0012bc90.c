/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012bc90` (_code @ 0x12bc90, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559f04; /* 0x559f04 */
extern unsigned char DAT_0055a058; /* 0x55a058 */
extern unsigned char DAT_0055a110; /* 0x55a110 */

extern unsigned int *FUN_0011b724(void);
/* Supplied declaration required: FUN_002f74e8. */


unsigned int * FUN_0012bc90(void)

{
/* irregular: irregular input(s): in_r3; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_r3;
  
  puVar1 = (unsigned int *)FUN_0011b724();
  puVar1[4] = (unsigned int)&DAT_0055a058;
  *puVar1 = (unsigned int)&DAT_00559f04;
  puVar1[0x18] = 0x10;
  puVar1[0x17] = (unsigned int)&DAT_0055a110;
  *(unsigned char *)(puVar1 + 0x19) = 1;
  puVar1[0x1b] = 60000;
  puVar1[0x1a] = 0xa7;
  puVar1[0x1c] = 0x4000;
  puVar1[0x1d] = 0x8000;
  FUN_002f74e8(0,0x400010f,&DAT_0055a110,0x10,in_r3);
  return puVar1;
}
