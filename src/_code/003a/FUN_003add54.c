/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003add54` (_code @ 0x3add54, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int DAT_00439ca8; /* 0x439ca8 */


unsigned int FUN_003add54(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if ((DAT_00439ca8 != 0) &&
     (temp_v0 = DAT_00439ca8 + param_2 * 0x400, *(char *)(temp_v0 + 0x8348) == '\0')) {
    if (*(char *)(temp_v0 + 0x832c) != '\0') {
      return 1;
    }
    temp_v2 = (unsigned int)*(char *)(DAT_00439ca8 + param_2 + 0xd5fc);
    if ((int)temp_v2 < 1) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = temp_v2 & 1;
      temp_v0 = 0;
      if (temp_v1 != 0) {
        do {
          if (*(char *)(DAT_00439ca8 + param_2 * 0xc0 + temp_v0 * 0x18 + 0xc9f8) != '\0') {
            return 1;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (int)temp_v1);
      }
    }
    if ((int)temp_v1 < (int)temp_v2) {
      do {
        temp_v0 = DAT_00439ca8 + param_2 * 0xc0 + temp_v1 * 0x18;
        if (*(char *)(temp_v0 + 0xc9f8) != '\0') {
          return 1;
        }
        if (*(char *)(temp_v0 + 0xca10) != '\0') {
          return 1;
        }
        temp_v1 = temp_v1 + 2;
      } while ((int)temp_v1 < (int)temp_v2);
    }
  }
  return 0;
}
