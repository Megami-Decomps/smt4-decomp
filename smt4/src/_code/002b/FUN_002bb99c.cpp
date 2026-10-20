/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb99c` (_code @ 0x2bb99c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

extern unsigned char DAT_004d43e0; /* 0x4d43e0 */

/* Supplied declaration required: FUN_002c52f8. */


unsigned int FUN_002bb99c(int param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 3 unstructured edge(s); 3 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  char acStack_20 [12];
  
  temp_v4 = 0;
  do {
    temp_v2 = *(char *)(param_1 + temp_v4);
    if (temp_v2 == '\0' || temp_v2 == ':') {
      temp_v6 = 0;
      acStack_20[temp_v4] = ':';
      temp_v7 = 0;
      temp_v4 = 0;
      do {
        temp_v5 = (unsigned int)acStack_20[temp_v4];
        if (temp_v5 == 0x3a) goto LAB_002bba68;
        temp_v1 = temp_v6 >> 0x18;
        temp_v4 = temp_v4 + 1;
        temp_v6 = temp_v5 | (temp_v6 << 8);
        temp_v7 = temp_v1 | (temp_v7 << 8) | ((int)temp_v5 >> 0x1f);
        if (temp_v4 >= 8) goto LAB_002bba60;
      } while( 1 );
    }
    acStack_20[temp_v4] = temp_v2;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  FUN_002c52f8();
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4 = 0;
LAB_002bb9ec:
  temp_v5 = (unsigned int)*(char *)(temp_v4 + 0x407ecc);
  if (temp_v5 != 0x3a) {
    temp_v1 = temp_v6 >> 0x18;
    temp_v4 = temp_v4 + 1;
    temp_v6 = temp_v5 | (temp_v6 << 8);
    temp_v7 = temp_v1 | (temp_v7 << 8) | ((int)temp_v5 >> 0x1f);
    if (temp_v4 < 8) goto LAB_002bb9ec;
LAB_002bba60:
    temp_v6 = 0;
    temp_v7 = 0;
  }
LAB_002bba68:
  if (temp_v6 == 0 && temp_v7 == 0) {
    temp_v3 = 0xe0e046bc;
  }
  else {
    temp_v4 = 0;
    while( 1 ) {
      temp_v0 = temp_v4 * 0x10;
      if (*(int *)(temp_v0 + 0x4d43e8) == 0) {
        *(unsigned int *)(&DAT_004d43e0 + temp_v4 * 0x10) = temp_v6;
        *(unsigned int *)(temp_v4 * 0x10 + 0x4d43e4) = temp_v7;
        *(unsigned int *)(temp_v0 + 0x4d43e8) = param_2;
        *(unsigned char *)(temp_v0 + 0x4d43ec) = param_3;
        *(unsigned char *)(temp_v0 + 0x4d43ed) = param_4;
        return 0;
      }
      if (*(unsigned int *)(&DAT_004d43e0 + temp_v0) == temp_v6 && *(unsigned int *)(temp_v0 + 0x4d43e4) == temp_v7) break;
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 0x20) {
        return 0xd8604659;
      }
    }
    temp_v3 = 0xc82044b4;
  }
  return temp_v3;
}

} /* extern "C" */
