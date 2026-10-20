/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201f30` (_code @ 0x201f30, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_0061953c; /* 0x61953c */

extern int FUN_00180008(unsigned int);


void FUN_00201f30(int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    puVar4 = &DAT_0061951c;
    if ((DAT_00588fb0 != 0) &&
       (puVar2 = &DAT_0061951c, puVar4 = (unsigned int *)0x0, DAT_00588fb0 == 1)) {
      puVar4 = &DAT_0061953c;
    }
    else {
      puVar2 = &DAT_0061953c;
    }
    if (puVar2[4] != 0) {
      temp_v1 = puVar4[7];
      if ((temp_v1 & 0x22) == 0) {
        puVar4[1] = param_2;
        puVar4[3] = param_1;
        puVar4[7] = temp_v1 | 0x405;
        return;
      }
      puVar4[2] = param_3;
      puVar4[4] = param_1;
      puVar4[6] = param_2;
      puVar4[7] = (temp_v1 & 0xffffffcf) | 0x508;
    }
    else if (puVar2[3] != param_1) {
      temp_v1 = puVar2[7];
      if ((temp_v1 & 0x22) != 0) {
        puVar2[2] = param_3;
        puVar2[4] = param_1;
        puVar2[6] = param_2;
        puVar2[7] = (temp_v1 & 0xffffffcf) | 0x508;
        return;
      }
      puVar2[1] = param_2;
      puVar2[3] = param_1;
      puVar2[7] = temp_v1 | 0x405;
      return;
    }
  }
  return;
}

} /* extern "C" */
