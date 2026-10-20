/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105542` (_code @ 0x105542, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002e92e4(unsigned int, unsigned int);
extern int FUN_002eba2c(unsigned int **, unsigned int *);


unsigned int FUN_00105542(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  
  temp_v2 = *(unsigned int **)(param_1 + 0x14);
  do {
    temp_v2 = (unsigned int *)*temp_v2;
    temp_v3 = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = FUN_002eba2c(&temp_v2,(unsigned int *)&temp_v3);
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v0 = (**(romwright_code **)(*(int *)temp_v2[2] + 0x20))();
    temp_v1 = FUN_002e92e4(temp_v0,param_2);
  } while (temp_v1 != 0);
  return temp_v2[2];
}

} /* extern "C" */
