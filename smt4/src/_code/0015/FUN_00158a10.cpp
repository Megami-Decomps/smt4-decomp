/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158a10` (_code @ 0x158a10, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __cxa_guard_acquire(...);

typedef int romwright_code(...);
extern unsigned int DAT_00473530; /* 0x473530 */
extern unsigned int DAT_004ead74; /* 0x4ead74 */
extern unsigned int *DAT_004ead78; /* 0x4ead78 */
extern unsigned int *DAT_004ead7c; /* 0x4ead7c */

/* Supplied declaration required: __cxa_guard_acquire. */


void FUN_00158a10(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned long long temp_v1;
  
  temp_v0 = param_2;
  if ((DAT_00473530 & 1) == 0) {
    temp_v1 = __cxa_guard_acquire(&DAT_00473530);
    temp_v0 = (int)((unsigned long long)temp_v1 >> 0x20);
    if ((int)temp_v1 != 0) {
      DAT_004ead78 = (unsigned int *)&DAT_004ead78;
      DAT_004ead7c = (unsigned int *)&DAT_004ead78;
      temp_v0 = 0x15c818;
      DAT_004ead74 = 0;
    }
  }
  puVar1 = DAT_004ead78;
  if (((DAT_00473530 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00473530,temp_v0), temp_v0 != 0)) {
    DAT_004ead78 = (unsigned int *)&DAT_004ead78;
    DAT_004ead7c = (unsigned int *)&DAT_004ead78;
    DAT_004ead74 = 0;
  }
  while ((unsigned int **)puVar1 != &DAT_004ead78) {
    puVar3 = (unsigned int *)*puVar1;
    (**(romwright_code **)(puVar1[-1] + 8))(puVar1 + -1,param_2,param_2 + param_3);
    puVar1 = puVar3;
    if (((DAT_00473530 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00473530), temp_v0 != 0)) {
      DAT_004ead78 = (unsigned int *)&DAT_004ead78;
      DAT_004ead7c = (unsigned int *)&DAT_004ead78;
      DAT_004ead74 = 0;
    }
  }
  return;
}

} /* extern "C" */
