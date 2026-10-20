/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017cfe8` (_code @ 0x17cfe8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern int DAT_005b40e0; /* 0x5b40e0 */
extern int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_002e6354. */


void FUN_0017cfe8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v1 = *(unsigned int *)(param_1 + param_2 * 4);
  temp_v0 = (temp_v1 & 0x1f) * 4;
  for (puVar5 = *(unsigned int **)(temp_v0 + 0x61a48c); puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[0x10])
  {
    if (*puVar5 == temp_v1) {
      if (puVar5 != (unsigned int *)0x0) goto LAB_0017d0e4;
      break;
    }
  }
  if (temp_v1 != 0) {
    if (DAT_0058918c == (romwright_code *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      param_3 = 0;
      puVar5 = (unsigned int *)(*DAT_0058918c)(0x10000,0x100,0,0x44);
    }
    FUN_002e6354(puVar5,0x44);
    puVar5[0xb] = 0x300;
    *puVar5 = temp_v1;
    puVar4 = *(unsigned int **)(temp_v0 + 0x61a48c);
    if (puVar4 == (unsigned int *)0x0) {
      *(unsigned int **)(temp_v0 + 0x61a48c) = puVar5;
    }
    else if (temp_v1 < *puVar4) {
      puVar5[0x10] = (unsigned int)puVar4;
      *(unsigned int **)(temp_v0 + 0x61a48c) = puVar5;
    }
    else {
      for (puVar2 = (unsigned int *)puVar4[0x10]; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[0x10]) {
        param_3 = *puVar2;
        if (temp_v1 < param_3) {
          puVar4[0x10] = (unsigned int)puVar5;
          puVar5[0x10] = (unsigned int)puVar2;
          if (puVar2 != (unsigned int *)0x0) goto LAB_0017d0e4;
          break;
        }
        puVar4 = puVar2;
      }
      puVar4[0x10] = (unsigned int)puVar5;
    }
  }
LAB_0017d0e4:
  if (DAT_0061a50c != (unsigned int *)0x0) {
    param_3 = DAT_005b40e0 - *(int *)((int)DAT_0061a50c + 4);
    *(unsigned int *)((int)DAT_0061a50c + 0xc) = param_3;
  }
  DAT_0061a50c = puVar5;
  if (puVar5 != (unsigned int *)0x0) {
    param_3 = puVar5[1];
  }
  if (puVar5 != (unsigned int *)0x0 && param_3 != 0) {
    DAT_005b40e0 = puVar5[3] + param_3;
    DAT_005b40e4 = puVar5[2] + param_3;
    return;
  }
  DAT_005b40e4 = 0;
  DAT_005b40e0 = 0;
  return;
}

} /* extern "C" */
