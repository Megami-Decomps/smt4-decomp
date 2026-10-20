/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00161074` (_code @ 0x161074, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern int DAT_0061a594; /* 0x61a594 */


void FUN_00161074(unsigned int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  
  temp_v0 = (param_1 & 0x1f) * 4;
  puVar3 = *(unsigned int **)(temp_v0 + 0x61a514);
  if (puVar3 != (unsigned int *)0x0) {
    do {
      temp_v1 = *puVar3;
      if (temp_v1 != param_1) {
        puVar3 = (unsigned int *)puVar3[6];
      }
    } while (temp_v1 != param_1 && puVar3 != (unsigned int *)0x0);
  }
  if ((param_1 != 0) && (puVar3 == (unsigned int *)0x0)) {
    if (DAT_0058918c == (romwright_code *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)(*DAT_0058918c)(0x10000,0x100,0,0x1c);
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar3 = param_1;
    puVar5 = *(unsigned int **)(temp_v0 + 0x61a514);
    if (puVar5 == (unsigned int *)0x0) {
      *(unsigned int **)(temp_v0 + 0x61a514) = puVar3;
    }
    else if (param_1 < *puVar5) {
      puVar3[6] = (unsigned int)puVar5;
      *(unsigned int **)(temp_v0 + 0x61a514) = puVar3;
    }
    else {
      for (puVar2 = (unsigned int *)puVar5[6]; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[6]) {
        if (param_1 < *puVar2) {
          puVar5[6] = (unsigned int)puVar3;
          puVar3[6] = (unsigned int)puVar2;
          if (puVar2 != (unsigned int *)0x0) {
            *(unsigned int **)(DAT_0061a594 * 4 + 0x61a598) = puVar3;
            return;
          }
          break;
        }
        puVar5 = puVar2;
      }
      puVar5[6] = (unsigned int)puVar3;
    }
  }
  *(unsigned int **)(DAT_0061a594 * 4 + 0x61a598) = puVar3;
  return;
}

} /* extern "C" */
