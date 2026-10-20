/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2adc` (_code @ 0x1e2adc, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(void);

extern int DAT_00447a48; /* 0x447a48 */

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_001e2adc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0x17;
  do {
    if (*(int *)(DAT_00447a48 + temp_v3 * 0x28 + 0x34) != 0) {
      asdMdlManagerDestroy();
      *(unsigned int *)(DAT_00447a48 + temp_v3 * 0x28 + 0x34) = 0;
    }
    temp_v0 = DAT_00447a48;
    temp_v3 = temp_v3 - 1;
  } while (-1 < temp_v3);
  temp_v1 = 0;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(temp_v0 + temp_v1 * 0x28 + 0x1c) = 0;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(temp_v0 + temp_v2 * 0x28 + 0x1c) = 0;
  } while (temp_v3 < 0x18);
  return;
}

} /* extern "C" */
