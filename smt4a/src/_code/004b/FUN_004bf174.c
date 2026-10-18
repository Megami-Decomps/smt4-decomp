/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bf174` (_code @ 0x4bf174, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
extern int FUN_00187168(void);
extern int FUN_0022e714(void);
extern int FUN_0023b3b8(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */
extern int FUN_0035db94(void);
extern int FUN_0037df48(void);
/* Supplied declaration required: FUN_0037e0d0. */
/* Supplied declaration required: FUN_003e4d68. */
/* Supplied declaration required: FUN_004be990. */


void FUN_004bf174(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0037df48();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_1 + 0x2f4) + temp_v0;
    if (temp_v0 >= *(int *)(param_1 + 0x324)) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = *(int *)(param_1 + 0x324) - 1;
    }
    FUN_0031d1b4(param_1 + 0x260,temp_v0 % 4);
    FUN_0031d1d8(param_1 + 0x260,(int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) >> 2);
    *(int *)(param_1 + 0x2f4) = temp_v0;
    *(int *)(param_1 + 0x32c) = temp_v0;
    FUN_0023b45c(0);
  }
  else {
    temp_v0 = FUN_0022e714();
    if (temp_v0 == 0) {
      FUN_003e4d68(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
      temp_v0 = FUN_00187168();
      if (temp_v0 != 0) {
        temp_v1 = FUN_003e4d68(*(unsigned int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) & 0xffff);
        FUN_0037e0d0(temp_v1,0);
        FUN_002a7324(1);
      }
    }
  }
  temp_v0 = FUN_0023b3b8();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0x344) = 3;
    *(unsigned int *)(param_1 + 8) = 2;
    *(unsigned int *)(param_1 + 0xc) = 3;
    if ((*(char *)(param_1 + 4) == '\x02') && (0 < *(int *)(param_1 + 0x324))) {
      FUN_001681cc(0xf0);
      FUN_00183f58(5,1,1);
    }
    else {
      if (*(int *)(param_1 + *(int *)(param_1 + 0x32c) * 4 + 0x2c4) ==
          *(int *)(param_1 + *(int *)(param_1 + 0x328) * 4 + 0x2c4)) {
        temp_v1 = 0x11b;
      }
      else {
        temp_v1 = 0xf0;
      }
      FUN_001681cc(temp_v1);
    }
    temp_v0 = FUN_0035db94();
    if (temp_v0 < 0) {
      FUN_004be990(param_1,1,0xffffffff,0);
      return;
    }
    temp_v0 = FUN_0035db94();
    if (0 < temp_v0) {
      FUN_004be990(param_1,0,0xffffffff);
      return;
    }
  }
  return;
}
