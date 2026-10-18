/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d8e0` (_code @ 0x15d8e0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_STORAGE_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1_DEFINED
#define ROMWRIGHT_STORAGE_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1 {
    char whole[161];
    unsigned char u1[161];
    signed char s1[161];
};
typedef char romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1_size_check[(sizeof(union romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1) == 161) ? 1 : -1];
typedef char romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1_u1_width_check[(sizeof(((union romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1_s1_width_check[(sizeof(((union romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__E_E_E_E_E_E_E_E_E_E_0059dab4_161_1 s__E_E_E_E_E_E_E_E_E_E_0059dab4; /* 0x59dab4 */


unsigned int FUN_0015d8e0(unsigned int *param_1)

{
  int temp_v0;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  temp_v0 = *piVar2;
  if (temp_v0 != 0x20000009) {
    if (temp_v0 < 0x2000000a) {
      if (temp_v0 != 0x20000002) {
        if (temp_v0 == 0x20000004) {
          (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_E_E_E_E_E_E_0059dab4.u1[8]))(piVar2);
        }
      }
      else {
        (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_E_E_E_E_E_E_0059dab4.u1[12]))(piVar2);
      }
    }
    else if (temp_v0 != 0x20000011) {
      if (temp_v0 == 0x20000021) {
        (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_E_E_E_E_E_E_0059dab4.u1[16]))(piVar2);
      }
    }
    else {
      (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_E_E_E_E_E_E_0059dab4.u1[0]))(piVar2);
    }
  }
  else {
    (*(romwright_code *)(*(unsigned int *)&s__E_E_E_E_E_E_E_E_E_E_0059dab4.u1[4]))(piVar2);
  }
  return 0;
}
