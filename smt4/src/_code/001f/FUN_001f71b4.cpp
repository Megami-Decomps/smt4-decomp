/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f71b4` (_code @ 0x1f71b4, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002570a8(void);
int FUN_00257108(void);
int FUN_0025715c(void);
int FUN_00269334(unsigned int);
int FUN_002c2264(unsigned int);
int FUN_002c2318(unsigned int);
int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002570a8. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_00269334. */
/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c2318. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_001f71b4(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1[0xe] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    if (temp_v1 != 0) {
      do {
        FUN_002c2318(*(unsigned int *)(param_1[0xd] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v1);
    }
    FUN_002c415c(param_1[0xe]);
  }
  if (param_1[0x10] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    if (temp_v1 != 0) {
      do {
        FUN_002c2264(*(unsigned int *)(param_1[0xf] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v1);
    }
    FUN_002c415c(param_1[0x10]);
  }
  if (param_1[0x11] != 0) {
    FUN_0025715c();
  }
  if (param_1[0x12] != 0) {
    FUN_00257108();
  }
  if ((*(unsigned char *)((int)param_1 + 0xe) & 1) != 0) {
    FUN_00269334(param_1[0x13]);
  }
  if (param_1[0x14] != 0) {
    FUN_002570a8();
  }
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
