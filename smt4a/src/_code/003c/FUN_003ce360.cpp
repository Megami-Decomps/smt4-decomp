/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ce360` (_code @ 0x3ce360, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

int asdMemFree(unsigned int);

/* Supplied declaration required: asdMemFree. */


void FUN_003ce360(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x4c;
    piVar3 = (int *)(temp_v0 + 0x5702fc);
    temp_v3 = *(char *)(temp_v0 + 0x570346) != '\x01';
    temp_v1 = 1;
    if (temp_v3) {
      temp_v1 = *piVar3;
    }
    if (temp_v3 && temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0xc) = 0x2000000;
      *(unsigned int *)(*piVar3 + 0x3c) = 1;
      *(unsigned int *)(*piVar3 + 0x40) = 1;
      *(unsigned int *)(*piVar3 + 0x38) = 0;
      asdTextureSetImage((AsdTexture*)*piVar3);
      *(unsigned char *)(temp_v0 + 0x570344) = 1;
      asdMemFree(*(unsigned int *)(temp_v0 + 0x570340));
      *(unsigned int *)(temp_v0 + 0x570340) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x1a);
  return;
}

} /* extern "C" */
