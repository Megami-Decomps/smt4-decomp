/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013389c` (_code @ 0x13389c, 0xbe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_00307b08(...);
int vectorCount32_00307b3c(int *);
int FUN_0030c6e4(...);
int FUN_0030d19e(...);
int vectorDestroyRangeStride32(int *, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int rt_malloc(void);
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00307b08. */
extern int vectorGrowCapacity_00307b2a(unsigned int, int *);
/* Supplied declaration required: vectorCount32_00307b3c. */
/* Supplied declaration required: FUN_0030c6e4. */
/* Supplied declaration required: FUN_0030d19e. */
/* Supplied declaration required: vectorDestroyRangeStride32. */


void FUN_0013389c(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v0 = param_1[2];
  temp_v3 = *param_1;
  piVar6 = param_1;
  temp_v4 = param_2;
  temp_v1 = vectorCount32_00307b3c(param_1);
  if (temp_v1 < (unsigned int)((temp_v0 - temp_v3) >> 5)) {
    temp_v0 = param_1[1];
    temp_v4 = temp_v0 - 0x20;
    param_1[1] = temp_v0 + 0x20;
    FUN_0030d19e(param_1,temp_v0);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0x20;
      temp_v0 = temp_v0 - 0x20;
      FUN_0030c6e4(temp_v0,temp_v4);
    }
    FUN_0030c6e4(param_2,param_3);
    return;
  }
  temp_v2 = vectorCount32_00307b3c(param_1);
  temp_v0 = vectorGrowCapacity_00307b2a(temp_v2,param_1);
  temp_v3 = rt_malloc();
  FUN_00307b08(*param_1,param_2,temp_v3,param_1,piVar6,temp_v4);
  FUN_0030d19e(param_1,((param_2 - *param_1) & 0xffffffe0U) + temp_v3,param_3);
  FUN_00307b08(param_2,param_1[1],((param_2 - *param_1) & 0xffffffe0U) + temp_v3 + 0x20,param_1);
  temp_v4 = vectorCount32_00307b3c(param_1);
  vectorDestroyRangeStride32(param_1,*param_1,param_1[1]);
  asdOperatorDeleteArray(*param_1);
  *param_1 = temp_v3;
  param_1[2] = temp_v0 * 0x20 + temp_v3;
  param_1[1] = temp_v4 * 0x20 + temp_v3 + 0x20;
  return;
}

} /* extern "C" */
