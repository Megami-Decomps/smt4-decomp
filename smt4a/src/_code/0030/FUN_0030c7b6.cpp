/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c7b6` (_code @ 0x30c7b6, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e342c(int, int);
int sysMemClear(int, int);
int FUN_002f6be2(unsigned int, int *);
int FUN_002f6bf0(int);
int FUN_00310f64(int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_00310f64. */


void FUN_0030c7b6(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_4;
  sysMemClear(param_1 + 0x18,0x140);
  temp_v0 = 0;
  FUN_002f6be2(param_2,&temp_v0);
  FUN_002e342c(param_1 + 0x18,temp_v0);
  FUN_002f6bf0(temp_v0);
  FUN_00310f64(param_1);
  return;
}

} /* extern "C" */
