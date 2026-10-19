/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124680` (_code @ 0x124680, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int *FUN_001035cc(int, unsigned int, unsigned int, unsigned int *);
extern int *FUN_0030ecc4(void);


unsigned int * FUN_00124680(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  
  temp_v1 = param_4;
  piVar1 = (int *)FUN_0030ecc4();
  if ((param_2 < piVar1[1]) && (temp_v0 = *(int *)(*piVar1 + param_2 * 8), temp_v0 != -1)) {
    temp_v1 = 0;
    puVar3 = (unsigned int *)FUN_001035cc(temp_v0,param_3,param_4,(unsigned int *)&temp_v1);
    if (puVar3 != (unsigned int *)&temp_v1) {
      return puVar3;
    }
  }
  return (unsigned int *)0x0;
}
