/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3390` (_code @ 0x2e3390, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int UnsignedSaturate(int, int);

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


int FUN_002e3390(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  char *pcVar5;
  char *pcVar6;
  int temp_v4;
  unsigned int temp_v5;
  
  pcVar5 = param_1;
  while (((unsigned int)pcVar5 & 3) != 0) {
    pcVar6 = pcVar5 + 1;
    temp_v0 = *pcVar5;
    pcVar5 = pcVar6;
    if (temp_v0 == '\0') {
      return (int)pcVar6 - (int)(param_1 + 1);
    }
  }
  do {
    pcVar6 = pcVar5 + 4;
    temp_v5 = *(unsigned int *)pcVar5;
    temp_v0 = UnsignedSaturate('\x01' - (char)temp_v5,0x10);
    temp_v1 = UnsignedSaturate('\x01' - (char)((unsigned int)temp_v5 >> 8),0x10);
    temp_v2 = UnsignedSaturate('\x01' - (char)((unsigned int)temp_v5 >> 0x10),0x10);
    temp_v3 = UnsignedSaturate('\x01' - (char)((unsigned int)temp_v5 >> 0x18),0x10);
    pcVar5 = pcVar6;
  } while ((((temp_v3 & 0xff) == 0 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0');
  temp_v4 = (int)pcVar6 - (int)(param_1 + 1);
  if (temp_v0 != '\0') {
    return temp_v4 - 3;
  }
  if ((temp_v1 & 0xff) != 0) {
    return temp_v4 - 2;
  }
  if ((temp_v2 & 0xff) != 0 || temp_v1 != 0) {
    temp_v4 = temp_v4 - 1;
  }
  return temp_v4;
}

} /* extern "C" */
