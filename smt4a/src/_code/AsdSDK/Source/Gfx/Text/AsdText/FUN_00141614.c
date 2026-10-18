/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141614` (_code @ 0x141614, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern unsigned char DAT_0063af98; /* 0x63af98 */
extern unsigned char DAT_0063afa8; /* 0x63afa8 */


void FUN_00141614(unsigned short param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x636f68) == 0) {
      *(unsigned int *)(temp_v0 * 4 + 0x636f68) = param_3;
      *(unsigned short *)(&DAT_0063af98 + temp_v0 * 2) = param_1;
      *(unsigned int *)(&DAT_0063afa8 + temp_v0 * 4) = param_2;
      return;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  return;
}
