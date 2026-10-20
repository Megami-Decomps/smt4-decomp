/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2534` (_code @ 0x2c2534, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int DAT_004c63b4; /* 0x4c63b4 */


void FUN_002c2534(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_r12 */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  romwright_code *in_r12;
  
  puVar2 = *(unsigned int **)(DAT_004c63b4 * 4 + 0x4c63b8);
  if (param_1 != 0x8057) {
    if (param_1 < 0x8057) {
      if (param_1 == 0x8051) {
        temp_v1 = 3;
      }
      else {
        if (param_1 != 0x8056) {
          return;
        }
        temp_v1 = 2;
      }
    }
    else if (param_1 == 0x8058) {
      temp_v1 = 4;
    }
    else {
      if (param_1 != 0x8d62) {
        return;
      }
      temp_v1 = 2;
    }
  }
  else {
    temp_v1 = 2;
  }
  if ((param_4 == 0x10000 || param_4 == 0x20000) || param_4 == 0x30000) {
    if (puVar2[1] != 0) {
      in_r12 = DAT_0044e334;
    }
    if (puVar2[1] != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(puVar2[5],0x104,*puVar2);
    }
    if (DAT_0044e330 == (romwright_code *)0x0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (*DAT_0044e330)(param_4,0x104,*puVar2,temp_v1 * param_2 * param_3);
    }
    puVar2[5] = param_4;
    puVar2[1] = temp_v0;
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    puVar2[4] = param_3;
  }
  return;
}

} /* extern "C" */
