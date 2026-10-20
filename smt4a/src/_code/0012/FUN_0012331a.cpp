/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012331a` (_code @ 0x12331a, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00441388(unsigned int *, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int FUN_00300c20(void);
/* Supplied declaration required: FUN_00441388. */


unsigned int FUN_0012331a(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)&temp_v1;
  temp_v1 = 0;
  FUN_00441388(puVar1,param_1,param_2,param_3);
  if ((int)puVar1 < 0) {
    temp_v0 = FUN_00300c20();
    return temp_v0;
  }
  return temp_v1;
}

} /* extern "C" */
