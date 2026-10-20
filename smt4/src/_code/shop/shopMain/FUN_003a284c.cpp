/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a284c` (_code @ 0x3a284c, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022fa2c(int);
int FUN_0022faf8(void);
int FUN_0022fb64(int);
int FUN_0022fbc0(void);
int FUN_0022fcb8(int, int);
int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00233240(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0022fa2c. */
/* Supplied declaration required: FUN_0022faf8. */
extern int FUN_0022fb04(void);
extern int FUN_0022fb34(void);
/* Supplied declaration required: FUN_0022fb64. */
/* Supplied declaration required: FUN_0022fbc0. */
/* Supplied declaration required: FUN_0022fcb8. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_00256510(void);
extern int FUN_002762e0(void);
extern int FUN_0029d65c(int);


void FUN_003a284c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_0022fbc0();
  FUN_0022fb64(param_1);
  temp_v0 = FUN_0022fb34();
  if ((temp_v0 != 0) || (temp_v0 = FUN_0029d65c((int)*(short *)(param_1 + 0x15d4c)), temp_v0 == 6)) {
    *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e020);
    FUN_0022fcb8(param_1,1);
    FUN_0022faf8();
    return;
  }
  temp_v0 = FUN_0022fb04();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0029d65c((int)*(short *)(param_1 + 0x15d4e)), temp_v0 != 6)) {
    temp_v0 = FUN_002762e0();
    if (temp_v0 != 0) {
      FUN_00233240(param_1 + 0x3a8,1);
      FUN_00232848();
      *(unsigned int *)(param_1 + 4) = 0x11;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    else {
      temp_v0 = FUN_00256510();
      if (temp_v0 != 0) {
        FUN_002328b4();
        FUN_0022fa2c(param_1);
        return;
      }
    }
    return;
  }
  *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e024);
  FUN_0022fcb8(param_1,1);
  FUN_0022faf8();
  return;
}

} /* extern "C" */
