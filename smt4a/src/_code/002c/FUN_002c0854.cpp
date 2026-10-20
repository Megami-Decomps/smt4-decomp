/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0854` (_code @ 0x2c0854, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(int, unsigned int);

extern int DAT_0057f134; /* 0x57f134 */

/* Supplied declaration required: FUN_00275bc8. */
extern int loadSlotIsLoaded(unsigned int);


unsigned int FUN_002c0854(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = DAT_0057f134;
  if (DAT_0057f134 != 0) {
    temp_v2 = *(int *)(DAT_0057f134 + 0x10) == 0;
    temp_v1 = 0;
    if (!temp_v2) {
      temp_v1 = *(int *)(DAT_0057f134 + 0x18);
    }
    temp_v3 = temp_v1 == 0;
    if (!temp_v2 && !temp_v3) {
      temp_v1 = *(int *)(DAT_0057f134 + 0x1c);
    }
    if (((((temp_v2 || temp_v3) || temp_v1 == 0) || (temp_v1 = loadSlotIsLoaded(0x14), temp_v1 == 0)) ||
        (temp_v1 = loadSlotIsLoaded(0x25), temp_v1 == 0)) || (temp_v1 = loadSlotIsLoaded(0x3e), temp_v1 == 0)) {
      return 0;
    }
    if (*(int *)(temp_v0 + 0x14) == 0) {
      temp_v1 = *(int *)(temp_v0 + 0x10);
      FUN_00275bc8(temp_v1,*(unsigned int *)(temp_v0 + 0x18));
      *(int *)(temp_v0 + 0x14) = temp_v1;
      *(unsigned int *)(temp_v1 + 0x108) = 0;
    }
  }
  return 1;
}

} /* extern "C" */
