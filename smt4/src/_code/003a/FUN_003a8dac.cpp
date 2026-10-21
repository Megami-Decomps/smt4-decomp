/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8dac` (_code @ 0x3a8dac, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00233240(...);
int FUN_0029d684(int);
int FUN_0029defc(int, int);
int FUN_0029dfc0(int);
int buttonHelpSetPreset(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int utilityReturnSuccess(int);
/* Supplied declaration required: FUN_00233240. */
extern int FUN_0023360c(int *);
extern int FUN_00287758(void);
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029defc. */
/* Supplied declaration required: FUN_0029dfc0. */
extern int FUN_0029e0f8(void);
/* Supplied declaration required: buttonHelpSetPreset. */


void FUN_003a8dac(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if (temp_v0 == 0) {
    return;
  }
  temp_v0 = utilityReturnSuccess((int)param_1 + 0x96);
  if (temp_v0 != 0) {
    return;
  }
  if (((char)param_1[0x169] == '\x01') && (temp_v0 = FUN_00287758(), temp_v0 == 0)) {
    return;
  }
  param_1[5] = 1;
  param_1[6] = 0;
  FUN_00233240(param_1 + 0x37);
  FUN_00233240(param_1 + 0x37,1);
  if ((char)param_1[0x169] == '\0') {
    temp_v1 = 0x2e;
    buttonHelpSetPreset(temp_v1);
  }
  else if ((char)param_1[0x169] == '\x01') {
    temp_v1 = 0x46;
    buttonHelpSetPreset(temp_v1);
  }
  if ((short)param_1[0x16a] != 0) {
    temp_v0 = FUN_0023360c(param_1 + 8);
    temp_v2 = (short)param_1[temp_v0 * 8 + 0x16b];
    temp_v0 = FUN_0023360c(param_1 + 8);
    if ((char)param_1[temp_v0 * 8 + 0x171] == '\0') {
      temp_v2 = 0;
    }
    temp_v0 = FUN_0029e0f8();
    if ((temp_v0 == 0) || ((short)param_1[0x296c] == temp_v2)) {
      return;
    }
    *(short *)(param_1 + 0x296c) = temp_v2;
    if (temp_v2 != 0) {
      FUN_0029defc((int)temp_v2,1);
      FUN_0029d684(1);
      return;
    }
  }
  FUN_0029dfc0(0);
  return;
}

} /* extern "C" */
