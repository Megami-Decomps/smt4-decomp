/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcb1c` (_code @ 0x2bcb1c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int g_asdSoundStatus; /* 0x4e3154 */
extern unsigned int DAT_004e3158; /* 0x4e3158 */


unsigned int FUN_002bcb1c(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = 0;
  if ((int)DAT_004e3158 < 1) {
    return 0;
  }
  do {
    temp_v3 = temp_v2 == 0;
    if (-1 < (int)temp_v2) {
      temp_v3 = DAT_004e3158 == temp_v2;
    }
    if (!temp_v3 && (-1 < (int)temp_v2 && (int)temp_v2 <= (int)DAT_004e3158)) {
      temp_v0 = g_asdSoundStatus;
      if (0 < (int)temp_v2) {
        if ((temp_v2 & 1) != 0) {
          temp_v0 = *(int *)(g_asdSoundStatus + 0x70);
        }
        for (temp_v1 = (int)temp_v2 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
          temp_v0 = *(int *)(*(int *)(temp_v0 + 0x70) + 0x70);
        }
      }
      if ((temp_v0 != 0) && ((*(unsigned int *)(temp_v0 + 0x90) & 2) != 0)) {
        return 1;
      }
    }
    temp_v2 = temp_v2 + 1;
    if ((int)DAT_004e3158 <= (int)temp_v2) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
