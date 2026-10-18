/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001730cc` (_code @ 0x1730cc, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__E_E_E_E_005c0f48_17_1_DEFINED
#define ROMWRIGHT_STORAGE_s__E_E_E_E_005c0f48_17_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__E_E_E_E_005c0f48_17_1 {
    char whole[17];
    unsigned char u1[17];
    signed char s1[17];
};
typedef char romwright_storage_s__E_E_E_E_005c0f48_17_1_size_check[(sizeof(union romwright_storage_s__E_E_E_E_005c0f48_17_1) == 17) ? 1 : -1];
typedef char romwright_storage_s__E_E_E_E_005c0f48_17_1_u1_width_check[(sizeof(((union romwright_storage_s__E_E_E_E_005c0f48_17_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__E_E_E_E_005c0f48_17_1_s1_width_check[(sizeof(((union romwright_storage_s__E_E_E_E_005c0f48_17_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__E_E_E_E_005c0f48_17_1 s__E_E_E_E_005c0f48; /* 0x5c0f48 */


unsigned int FUN_001730cc(int *param_1,unsigned int param_2)

{
  if (*(int *)*param_1 != 0x10000001) {
    if (*(int *)*param_1 == 0x10000002) {
      (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_005c0f48.u1[4]))(param_2);
      *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 1;
    }
  }
  else {
    (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_005c0f48.u1[0]))(param_2);
    *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 1;
  }
  return 0;
}
