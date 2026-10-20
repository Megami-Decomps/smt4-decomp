/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f394` (_code @ 0x47f394, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fb43c(int, unsigned int, int, int, int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */


unsigned int FUN_0047f394(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00180008(1);
  if (temp_v1 == 0) {
    temp_v1 = 0;
    do {
      temp_v0 = temp_v1 * 0x1c;
      if (*(unsigned short *)(temp_v0 + 0x573ce0) == param_1) {
        if ((unsigned short *)(temp_v0 + 0x573ce0) == (unsigned short *)0x0) {
          return 0;
        }
        if (*(int *)(temp_v0 + 0x573cec) != 0) {
          FUN_004fb43c(*(unsigned short *)(temp_v0 + 0x573cf0),param_2,*(int *)(temp_v0 + 0x573cec),0,1,0,0)
          ;
        }
        if (*(int *)(temp_v0 + 0x573cf4) == 0) {
          return 0;
        }
        FUN_004fb43c(*(unsigned short *)(temp_v0 + 0x573cf8),param_2,*(int *)(temp_v0 + 0x573cf4),1,1,0,0);
        return 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0xe);
  }
  return 0;
}

} /* extern "C" */
