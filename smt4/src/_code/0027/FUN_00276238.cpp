/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276238` (_code @ 0x276238, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e128; /* 0x43e128 */
extern int DAT_00447a78; /* 0x447a78 */
extern int *DAT_00447a98; /* 0x447a98 */


/* WARNING: Removing unreachable block (ram,0x002bd91c) */

void FUN_00276238(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  piVar2 = DAT_00447a98;
  if (*DAT_00447a98 != 0) {
    *DAT_00447a98 = 0;
    piVar2[1] = 0;
  }
  temp_v0 = DAT_00447a78;
  if (*(char *)(DAT_00447a78 + 0x18) == '\0') {
    return;
  }
  *(unsigned char *)(DAT_00447a78 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  temp_v0 = DAT_0043e128;
  *(unsigned int *)(DAT_0043e128 + 8) = 5;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  temp_v1 = *(int *)(temp_v0 + 0x90);
  if (temp_v1 == 0) {
    return;
  }
  *(unsigned short *)(temp_v0 + 0x94) = 1;
  *(unsigned short *)(temp_v0 + 0x96) = 0;
  *(unsigned char *)(temp_v0 + 0xca) = 0;
  *(unsigned char *)(temp_v0 + 0xce) = 0;
  *(unsigned char *)(temp_v0 + 0x98) = 0;
  *(int *)(temp_v0 + 0x50) = (int)*(short *)(temp_v1 + 0xc) << 0xc;
  *(int *)(temp_v0 + 0x54) = (int)*(short *)(temp_v1 + 0xe) << 0xc;
  return;
}

} /* extern "C" */
