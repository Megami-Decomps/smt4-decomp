/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d988` (_code @ 0x15d988, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
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


unsigned int FUN_0015d988(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  temp_v1 = 0;
  temp_v4 = *(int *)(*param_1 + 0x18);
  if (0 < temp_v4) {
    do {
      temp_v0 = *(int *)(*param_1 + 0x1c);
      piVar1 = (int *)0x0;
      if (temp_v0 != 0) {
        piVar1 = (int *)(*param_1 + 0x1c + temp_v0);
      }
      piVar2 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        temp_v0 = piVar1[temp_v1 * 4 + 10];
        piVar2 = (int *)0x0;
        if (temp_v0 != 0) {
          piVar2 = (int *)((int)(piVar1 + temp_v1 * 4 + 10) + temp_v0);
        }
      }
      temp_v2 = 0;
      if (*piVar2 != -0x80000000) {
        if (*piVar2 == 0x40000000) {
          temp_v2 = (*(romwright_code *)(*(unsigned int *)&s__E_E_D_E_E_E_005c1d08.u1[4]))();
        }
      }
      else {
        temp_v2 = (*(romwright_code *)(*(unsigned int *)&s__E_E_D_E_E_E_005c1d08.u1[0]))();
      }
      temp_v1 = temp_v1 + 1;
      temp_v3 = temp_v3 | temp_v2;
    } while (temp_v1 < temp_v4);
  }
  return temp_v3;
}
