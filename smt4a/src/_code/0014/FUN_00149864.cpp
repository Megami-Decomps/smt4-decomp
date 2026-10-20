/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149864` (_code @ 0x149864, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern romwright_code *DAT_00589190; /* 0x589190 */
extern int DAT_0061a594; /* 0x61a594 */


void FUN_00149864(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_r12 */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  romwright_code *in_r12;
  
  puVar2 = *(unsigned int **)(DAT_0061a594 * 4 + 0x61a598);
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
      in_r12 = DAT_00589190;
    }
    if (puVar2[1] != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(puVar2[5],0x104,*puVar2);
    }
    if (DAT_0058918c == (romwright_code *)0x0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = (*DAT_0058918c)(param_4,0x104,*puVar2,temp_v1 * param_2 * param_3);
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
