/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010550c` (_code @ 0x10550c, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002eba2c(unsigned int **, unsigned int *);


unsigned int FUN_0010550c(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  
  temp_v1 = *(unsigned int **)(param_1 + 0x14);
  do {
    temp_v1 = (unsigned int *)*temp_v1;
    temp_v2 = *(unsigned int *)(param_1 + 0x14);
    temp_v0 = FUN_002eba2c(&temp_v1,(unsigned int *)&temp_v2);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = (**(romwright_code **)(*(int *)temp_v1[2] + 0x1c))((int *)temp_v1[2],param_2);
  } while (temp_v0 == 0);
  return temp_v1[2];
}

} /* extern "C" */
