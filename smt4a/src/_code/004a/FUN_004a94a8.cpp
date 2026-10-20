/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a94a8` (_code @ 0x4a94a8, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int g_btlUiBlock; /* 0x57a9c8 */


unsigned int FUN_004a94a8(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if ((g_btlUiBlock != 0) &&
     (temp_v0 = g_btlUiBlock + param_2 * 0x400, *(char *)(temp_v0 + 0x79b0) == '\0')) {
    if (*(char *)(temp_v0 + 0x7994) != '\0') {
      return 1;
    }
    temp_v3 = (unsigned int)*(char *)(g_btlUiBlock + param_2 + 0xf064);
    if ((int)temp_v3 < 1) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = temp_v3 & 1;
      temp_v0 = 0;
      if (temp_v1 != 0) {
        do {
          if (*(char *)(g_btlUiBlock + param_2 * 0x300 + temp_v0 * 0x18 + 0xc060) != '\0') {
            return 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)temp_v1);
      }
    }
    if ((int)temp_v1 < (int)temp_v3) {
      do {
        temp_v0 = g_btlUiBlock + param_2 * 0x300 + temp_v1 * 0x18;
        temp_v2 = temp_v0 + 0xc000;
        temp_v4 = *(char *)(temp_v0 + 0xc060) == '\0';
        if (temp_v4) {
          temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 0xc078);
        }
        if (!temp_v4 || temp_v2 != 0) {
          return 1;
        }
        temp_v1 = temp_v1 + 2;
      } while ((int)temp_v1 < (int)temp_v3);
    }
  }
  return 0;
}

} /* extern "C" */
