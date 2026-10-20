/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4f04` (_code @ 0x3e4f04, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e5170(int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_003e5170. */


void FUN_003e4f04(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0xffffffff;
  temp_v1 = 0;
  while( 1 ) {
    if ((temp_v1 & 0xffff) >= 0xc) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = FUN_001ab888();
      temp_v0 = temp_v0 + (temp_v1 & 0xffff) * 0x134 + 0x1ddc;
    }
    if (*(unsigned short *)(temp_v0 + 300) == param_1) break;
    if (((int)temp_v2 < 0) && (*(unsigned short *)(temp_v0 + 300) == 0)) {
      temp_v2 = temp_v1;
    }
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v1 >= 0xc) {
      if ((int)temp_v2 < 0) {
        return;
      }
      if ((temp_v2 & 0xffff) >= 0xc) {
        temp_v0 = 0;
      }
      else {
        temp_v0 = FUN_001ab888();
        temp_v0 = temp_v0 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
      }
      *(short *)(temp_v0 + 300) = (short)param_1;
      *(unsigned int *)(temp_v0 + 0x130) = *(unsigned int *)(temp_v0 + 0x130) | 1;
      *(short *)(temp_v0 + 0x12e) = (short)temp_v2;
      FUN_003e5170(temp_v0,param_2);
      return;
    }
  }
  *(unsigned int *)(temp_v0 + 0x130) = *(unsigned int *)(temp_v0 + 0x130) | 1;
  FUN_003e5170(temp_v0,param_2);
  return;
}

} /* extern "C" */
