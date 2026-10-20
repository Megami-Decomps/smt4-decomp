/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233890` (_code @ 0x233890, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00289c98(int);
int FUN_00290d5c(int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int soundChannelStopAll(int);
int FUN_0029c3c0(int, int, int);
int FUN_002a87e8(void);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_00289c98. */
/* Supplied declaration required: FUN_00290d5c. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_002a87e8. */


void FUN_00233890(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  
  if (param_1[2] != 0) {
    if ((param_1[2] == 1) && (temp_v0 = FUN_002896bc(), temp_v0 != 0)) {
      param_1[1] = 0x10;
      param_1[2] = 0;
      if ((int *)param_1[0x82] != (int *)0x0) {
        (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
        param_1[0x82] = 0;
      }
    }
    return;
  }
  soundChannelStopAll(0xf);
  FUN_0029c3c0(0,10,0xff);
  FUN_0029c3c0(1,10,0xff);
  param_1[2] = 1;
  FUN_00290d5c(0,0xffffffff,0,param_4,unaff_r4,unaff_r5,unaff_r6);
  if ((*param_1 & 0x100000) != 0) {
    *param_1 = *param_1 & 0xffefffff;
    FUN_00289c98(0);
    temp_v0 = 0;
    do {
      FUN_002a87e8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    return;
  }
  return;
}

} /* extern "C" */
