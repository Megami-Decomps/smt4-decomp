/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae088` (_code @ 0x3ae088, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);

extern int DAT_005806d4; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_002b5cb4. */


unsigned char FUN_003ae088(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = DAT_005806d4;
  temp_v4 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = temp_v0 + temp_v3 * 0x188;
    temp_v5 = *(char *)(temp_v1 + 0x34) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v1 + 0xb8);
    }
    if (temp_v5 && temp_v2 != 2) {
      temp_v2 = *(int *)(g_lmapScene + 0x1c);
      FUN_002b5cb4();
      if (temp_v2 < 0x43480001) {
        temp_v4 = temp_v4 + 1;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x28);
  return temp_v4 >= 2;
}

} /* extern "C" */
