/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe278` (_code @ 0x2fe278, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_002ee978(unsigned int *);
extern int FUN_002ee988(unsigned int **, unsigned int *);


unsigned int * FUN_002fe278(int param_1,int param_2)

{
  int temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  
  temp_v1 = *(unsigned int **)(param_1 + 0x14);
  do {
    temp_v1 = (unsigned int *)*temp_v1;
    temp_v2 = *(unsigned int *)(param_1 + 0x14);
    temp_v0 = FUN_002ee988(&temp_v1,(unsigned int *)&temp_v2);
    if (temp_v0 == 0) {
      return (unsigned int *)0x0;
    }
    temp_v0 = FUN_002ee978(temp_v1 + 3);
  } while (temp_v0 != param_2);
  return temp_v1 + 2;
}
