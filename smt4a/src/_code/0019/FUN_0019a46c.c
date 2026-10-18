/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a46c` (_code @ 0x19a46c, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


int FUN_0019a46c(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int *puVar7;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  puVar7 = (unsigned int *)((int)param_1 + (param_3 - 1));
  puVar5 = param_2;
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) != 0) {
    for (; (param_1 < puVar7 && ((char)*puVar5 != '\0')); puVar5 = (unsigned int *)((int)puVar5 + 1)) {
      *(char *)param_1 = (char)*puVar5;
      param_1 = (unsigned int *)((int)param_1 + 1);
    }
    if (param_1 <= puVar7) {
      *(char *)param_1 = '\0';
    }
    for (; (char)*puVar5 != '\0'; puVar5 = (unsigned int *)((int)puVar5 + 1)) {
    }
  }
  else {
    while( 1 ) {
      temp_v4 = *puVar5;
      temp_v6 = param_1 + 1 == puVar7;
      if (param_1 + 1 <= puVar7) {
        temp_v0 = UnsignedSaturate('\x01' - (char)temp_v4,0x10);
        temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 8),0x10);
        temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 0x10),0x10);
        temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v4 >> 0x18),0x10);
        temp_v6 = (((temp_v3 & 0xff) == 0 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0';
      }
      if (!temp_v6) break;
      puVar5 = puVar5 + 1;
      *param_1 = temp_v4;
      param_1 = param_1 + 1;
    }
    do {
      temp_v5 = *puVar5;
      temp_v0 = UnsignedSaturate('\x01' - (char)temp_v5,0x10);
      temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v5 >> 8),0x10);
      temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v5 >> 0x10),0x10);
      temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v5 >> 0x18),0x10);
      temp_v6 = (temp_v3 & 0xff) == 0;
      if (((temp_v6 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0') {
        puVar5 = puVar5 + 1;
      }
    } while (((temp_v6 && temp_v2 == 0) && temp_v1 == 0) && temp_v0 == '\0');
    for (; (char)*puVar5 != '\0'; puVar5 = (unsigned int *)((int)puVar5 + 1)) {
    }
    do {
      if (param_1 == puVar7) {
        *(char *)param_1 = '\0';
      }
      if (puVar7 <= param_1) break;
      temp_v6 = (temp_v4 & 0xff) != 0;
      temp_v5 = temp_v4;
      if (temp_v6) {
        temp_v5 = temp_v4 >> 8;
      }
      *(char *)param_1 = (char)temp_v4;
      param_1 = (unsigned int *)((int)param_1 + 1);
      temp_v4 = temp_v5;
    } while (temp_v6);
  }
  return (int)puVar5 - (int)param_2;
}
