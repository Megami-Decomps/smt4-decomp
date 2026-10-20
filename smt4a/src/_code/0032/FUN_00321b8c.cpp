/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321b8c` (_code @ 0x321b8c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_00321a98(int *, int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_0019c6bc(int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_00321a98. */
extern int FUN_003a6868(int);


void FUN_00321b8c(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  short temp_v3;
  short temp_v4;
  
  temp_v0 = FUN_0019c6bc(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    temp_v4 = 0;
  }
  else {
    temp_v0 = FUN_003a6868(*param_1);
    temp_v1 = *param_1;
    FUN_001aba54();
    temp_v4 = *(short *)(temp_v1 + 0x2c);
  }
  temp_v1 = FUN_0019c6bc(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
    temp_v3 = 0;
  }
  else {
    temp_v1 = FUN_003a6868(*param_2);
    temp_v2 = *param_2;
    FUN_001aba54();
    temp_v3 = *(short *)(temp_v2 + 0x2c);
  }
  if (temp_v0 != temp_v1 || temp_v3 != temp_v4) {
    return;
  }
  FUN_00321a98(param_1,param_2);
  return;
}

} /* extern "C" */
