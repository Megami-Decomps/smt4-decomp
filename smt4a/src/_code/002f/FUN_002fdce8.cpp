/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdce8` (_code @ 0x2fdce8, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int);
int FUN_002ea43c(int);
int FUN_002f3dc4(void);
int FUN_002f3dde(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */


void FUN_002fdce8(int param_1,int *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0xd0));
  if (temp_v0 != 0) {
    if (*param_2 >= 0) {
      FUN_002f3dc4();
    }
    else {
      FUN_002f3dde();
    }
  }
  else {
    FUN_002e9f00(param_1 + 0x70,4);
  }
  FUN_002ea43c(param_1);
  return;
}

} /* extern "C" */
