/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aeefc` (_code @ 0x1aeefc, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);

extern unsigned char DAT_0062d410; /* 0x62d410 */

/* Supplied declaration required: sysFatalBreak. */


unsigned int FUN_001aeefc(int param_1,unsigned int param_2,unsigned char param_3,unsigned char param_4)

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
        if (temp_v5 == 0x3a) goto LAB_001aefc8;
        temp_v1 = temp_v6 >> 0x18;
        temp_v4 = temp_v4 + 1;
        temp_v6 = temp_v5 | (temp_v6 << 8);
        temp_v7 = temp_v1 | (temp_v7 << 8) | ((int)temp_v5 >> 0x1f);
        if (temp_v4 >= 8) goto LAB_001aefc0;
      } while( 1 );
    }
    acStack_20[temp_v4] = temp_v2;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  sysFatalBreak();
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4 = 0;
LAB_001aef4c:
  temp_v5 = (unsigned int)*(char *)(temp_v4 + 0x536d10);
  if (temp_v5 != 0x3a) {
    temp_v1 = temp_v6 >> 0x18;
    temp_v4 = temp_v4 + 1;
    temp_v6 = temp_v5 | (temp_v6 << 8);
    temp_v7 = temp_v1 | (temp_v7 << 8) | ((int)temp_v5 >> 0x1f);
    if (temp_v4 < 8) goto LAB_001aef4c;
LAB_001aefc0:
    temp_v6 = 0;
    temp_v7 = 0;
  }
LAB_001aefc8:
  if (temp_v6 == 0 && temp_v7 == 0) {
    temp_v3 = 0xe0e046bc;
  }
  else {
    temp_v4 = 0;
    while( 1 ) {
      temp_v0 = temp_v4 * 0x10;
      if (*(int *)(temp_v0 + 0x62d418) == 0) {
        *(unsigned int *)(&DAT_0062d410 + temp_v4 * 0x10) = temp_v6;
        *(unsigned int *)(temp_v4 * 0x10 + 0x62d414) = temp_v7;
        *(unsigned int *)(temp_v0 + 0x62d418) = param_2;
        *(unsigned char *)(temp_v0 + 0x62d41c) = param_3;
        *(unsigned char *)(temp_v0 + 0x62d41d) = param_4;
        return 0;
      }
      if (*(unsigned int *)(&DAT_0062d410 + temp_v0) == temp_v6 && *(unsigned int *)(temp_v0 + 0x62d414) == temp_v7) break;
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
