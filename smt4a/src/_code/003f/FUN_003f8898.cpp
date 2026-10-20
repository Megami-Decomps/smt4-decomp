/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8898` (_code @ 0x3f8898, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(unsigned int, int, int);

extern unsigned int uRam005e2608; /* 0x5e2608 */

/* Supplied declaration required: FUN_0013c174. */


unsigned int FUN_003f8898(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  int temp_v3;
  char temp_v4;
  char cStack_69;
  unsigned char temp_v5 [84];
  
  temp_v1 = '\0';
  temp_v3 = 0x28;
  pcVar4 = &cStack_69;
  do {
    temp_v4 = temp_v1 + '\x01';
    pcVar4[1] = temp_v1;
    temp_v3 = temp_v3 - 1;
    temp_v1 = temp_v1 + '\x02';
    pcVar4 = pcVar4 + 2;
    *pcVar4 = temp_v4;
  } while (temp_v3 != 0);
  temp_v3 = 0;
  do {
    temp_v0 = (unsigned int)temp_v5[temp_v3] * 0x10;
    if ((*(int *)(temp_v0 + 0x5e2218) == 0) && (*(char *)(temp_v0 + 0x5e2220) != '\0')) {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x5e2214);
      if (temp_v5[temp_v3] != 0x3f) {
        FUN_0013c174(temp_v2,temp_v0 + 0x5e221c,0);
        *(unsigned int *)(temp_v0 + 0x5e2218) = temp_v2;
      }
      else {
        FUN_0013c174(temp_v2,0x5e260c,1);
        uRam005e2608 = temp_v2;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x50);
  return 1;
}

} /* extern "C" */
