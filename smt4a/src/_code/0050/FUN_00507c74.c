/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00507c74` (_code @ 0x507c74, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_002e3390(int);
/* Supplied declaration required: FUN_0030ea58. */


/* WARNING: Removing unreachable block (ram,0x00508660) */

void FUN_00507c74(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v4;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    param_3 = (unsigned int)*(unsigned char *)(piVar2 + 1);
  }
  if ((piVar2 != (int *)0x0 && param_3 != 0) &&
     (temp_v1 = (**(romwright_code **)(*piVar2 + 0x10))(), temp_v1 != -1)) {
    return;
  }
  temp_v1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
  if (temp_v1 == 0) {
    return;
  }
  puVar7 = (unsigned int *)(*(int *)(temp_v1 + 0xc) + temp_v1);
  temp_v4 = 0;
  if (*puVar7 < puVar7[1]) {
    puVar6 = puVar7 + *puVar7 * 5 + 2;
    temp_v2 = FUN_002e3390(param_2);
    temp_v0 = (unsigned short)*puVar6;
    while ((temp_v0 & 1) == 0) {
      temp_v3 = (unsigned int)(*(unsigned short *)((int)puVar6 + 2) >> 3);
      if (((int)temp_v3 < temp_v2) &&
         (((int)*(char *)(param_2 + temp_v3) &
          (1 << ((7 - (*(unsigned short *)((int)puVar6 + 2) & 7)) & 0xff))) != 0)) {
        temp_v3 = puVar6[2];
      }
      else {
        temp_v3 = puVar6[1];
      }
      puVar6 = puVar7 + temp_v3 * 5 + 2;
      temp_v0 = (unsigned short)*puVar6;
    }
    if (puVar6 + 3 != (unsigned int *)0x0) {
      temp_v3 = puVar6[3];
      if ((temp_v3 != 0xffffffff) && (temp_v1 = *(int *)(temp_v1 + 4) + temp_v1, temp_v1 != 0)) {
        temp_v4 = temp_v1 + *(int *)(temp_v1 + temp_v3 * 0xc + 8);
      }
      FUN_0030ea58(param_2,temp_v4);
    }
  }
  return;
}
