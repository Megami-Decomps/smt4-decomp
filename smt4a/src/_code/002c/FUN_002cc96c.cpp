#include "romwright_types.h"

extern "C" {

int FUN_0022e774(void);
int FUN_00270104(int);
int FUN_002cb438(int, unsigned int, unsigned int);
int FUN_003343f0(int);
int FUN_0038e4cc(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_00270104. */
/* Supplied declaration required: FUN_002cb438. */
extern unsigned int FUN_002cc9e0(int, unsigned int);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0038e4cc. */


void FUN_002cc96c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0038e4cc(param_1,0);
  FUN_0022e774();
  *(unsigned int *)(param_1 + 0x4ad8) = 4;
  FUN_003343f0(0);
  if (*(int *)(param_1 + 0x3880) - 8U <= 5U) {
    FUN_00270104(param_1);
    return;
  }
  temp_v0 = FUN_002cc9e0(param_1,0);
  FUN_002cb438(param_1,temp_v0,*(unsigned int *)(param_1 + 0x3890));
  return;
}

} /* extern "C" */
