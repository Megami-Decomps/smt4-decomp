/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395e74` (_code @ 0x395e74, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c222c(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c222c. */
extern int FUN_003955e4(void);
extern int FUN_0039580c(void);
extern int FUN_00395e44(void);


void FUN_00395e74(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        temp_v0 = *(int *)(param_1 + 0x68);
        *(int *)(temp_v0 + 0xc) = param_1;
        return;
      }
      temp_v1 = 0x10;
      FUN_002c222c();
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_003955e4();
      }
    }
    else {
      temp_v1 = 0x1c;
      FUN_002c222c();
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_00395e44();
      }
    }
  }
  else {
    temp_v1 = 0x24;
    FUN_002c222c();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_0039580c();
    }
  }
  *(int *)(param_1 + 0x68) = temp_v0;
  *(int *)(temp_v0 + 0xc) = param_1;
  return;
}

} /* extern "C" */
