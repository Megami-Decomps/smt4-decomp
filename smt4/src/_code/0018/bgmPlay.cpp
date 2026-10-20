/* NON_MATCHING: romwright 0.5.0 decompilation of `bgmPlay` (_code @ 0x18af60, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e09c; /* 0x44e09c */
extern unsigned int DAT_004c53c4; /* 0x4c53c4 */
extern unsigned int DAT_004c53e4; /* 0x4c53e4 */

extern int jyoucyuGetTableEntry(unsigned int);


void bgmPlay(int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    puVar4 = &DAT_004c53c4;
    if ((DAT_0044e09c != 0) &&
       (puVar2 = &DAT_004c53c4, puVar4 = (unsigned int *)0x0, DAT_0044e09c == 1)) {
      puVar4 = &DAT_004c53e4;
    }
    else {
      puVar2 = &DAT_004c53e4;
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
