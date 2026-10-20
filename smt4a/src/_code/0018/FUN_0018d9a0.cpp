/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018d9a0` (_code @ 0x18d9a0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
#ifndef ROMWRIGHT_STORAGE_s__E_E_D_E_E_E_005c1d08_25_1_DEFINED
#define ROMWRIGHT_STORAGE_s__E_E_D_E_E_E_005c1d08_25_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1 {
    char whole[25];
    unsigned char u1[25];
    signed char s1[25];
};
typedef char romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1_size_check[(sizeof(union romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1) == 25) ? 1 : -1];
typedef char romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1_u1_width_check[(sizeof(((union romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1_s1_width_check[(sizeof(((union romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__E_E_D_E_E_E_005c1d08_25_1 s__E_E_D_E_E_E_005c1d08; /* 0x5c1d08 */


unsigned int FUN_0018d9a0(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)*param_1 != -0x80000000) {
    if (*(int *)*param_1 == 0x40000000) {
      temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__E_E_D_E_E_E_005c1d08.u1[4]))();
    }
  }
  else {
    temp_v0 = (*(romwright_code *)(*(unsigned int *)&s__E_E_D_E_E_E_005c1d08.u1[0]))();
  }
  return temp_v0;
}

} /* extern "C" */
