/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e074` (_code @ 0x21e074, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(void);

extern int DAT_00447e10; /* 0x447e10 */

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_0021e074(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 8;
  do {
    temp_v3 = DAT_00447e10 + temp_v2 * 0x2c;
    if (*(char *)(temp_v3 + 0x1114) != '\0') {
      *(char *)(temp_v3 + 0x1114) = '\0';
      if (*(int *)(temp_v3 + 0x1134) != 0) {
        asdMdlManagerDestroy();
        *(unsigned int *)(temp_v3 + 0x1134) = 0;
      }
    }
    temp_v2 = temp_v2 - 1;
  } while (-1 < temp_v2);
  temp_v2 = 2;
  do {
    temp_v3 = DAT_00447e10 + temp_v2 * 0x2c;
    if (*(char *)(temp_v3 + 0x12a0) != '\0') {
      *(char *)(temp_v3 + 0x12a0) = '\0';
      if (*(int *)(temp_v3 + 0x12c0) != 0) {
        asdMdlManagerDestroy();
        *(unsigned int *)(temp_v3 + 0x12c0) = 0;
      }
    }
    temp_v3 = DAT_00447e10;
    temp_v2 = temp_v2 - 1;
  } while (-1 < temp_v2);
  temp_v0 = 0;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(temp_v3 + temp_v0 * 0x44 + 0x14) = 0;
    temp_v0 = temp_v0 + 2;
    *(unsigned char *)(temp_v3 + temp_v1 * 0x44 + 0x14) = 0;
  } while (temp_v2 < 0x40);
  return;
}

} /* extern "C" */
