/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae638` (_code @ 0x3ae638, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_btlUi; /* 0x439c88 */


unsigned int FUN_003ae638(unsigned int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = 0;
  if ((*(int *)((unsigned char *)&g_btlUi + 0x20)) != 0) {
    temp_v5 = (*(int *)((unsigned char *)&g_btlUi + 0x20)) + param_2 * 0xa0;
    if (*(char *)(temp_v5 + 0xbfe4) == '\0') {
      temp_v4 = (unsigned int)*(char *)((*(int *)((unsigned char *)&g_btlUi + 0x20)) + param_2 + 0xe01c);
      if ((int)temp_v4 < 1) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = temp_v4 & 1;
        temp_v2 = 0;
        if (temp_v0 != 0) {
          do {
            if (*(char *)(temp_v5 + temp_v2 * 0x14 + 0xd618) != '\0') {
              temp_v1 = 1;
              return temp_v1;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v0);
        }
      }
      while( 1 ) {
        if ((int)temp_v4 <= (int)temp_v0) {
          return 0;
        }
        temp_v2 = temp_v5 + temp_v0 * 0x14;
        temp_v3 = temp_v2 + 0xd600;
        temp_v6 = *(char *)(temp_v2 + 0xd618) == '\0';
        if (temp_v6) {
          temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 0xd62c);
        }
        if (!temp_v6 || temp_v3 != 0) break;
        temp_v0 = temp_v0 + 2;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
