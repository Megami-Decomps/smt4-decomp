/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023e51c` (_code @ 0x23e51c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wordPairCopy(int);

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: wordPairCopy. */


void FUN_0023e51c(int param_1,int *param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  
  temp_v0 = dataTableGet(9,4);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = 0;
  *param_2 = 0;
  if (temp_v2 != 0) {
    do {
      puVar4 = (unsigned short *)(temp_v1 + temp_v3 * 8);
      if (((unsigned char)puVar4[2] == param_3) && ((int)(unsigned int)*puVar4 <= param_4)) {
        wordPairCopy(param_1 + *param_2 * 8);
        *param_2 = *param_2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  *(unsigned short *)(param_1 + *param_2 * 8) = 1;
  *(unsigned short *)(param_1 + *param_2 * 8 + 2) = 99;
  *(char *)(param_1 + *param_2 * 8 + 4) = (char)param_3;
  *(unsigned char *)(param_1 + *param_2 * 8 + 5) = 100;
  *(unsigned char *)(param_1 + *param_2 * 8 + 6) = 100;
  *(unsigned char *)(param_1 + *param_2 * 8 + 7) = 5;
  *param_2 = *param_2 + 1;
  return;
}

} /* extern "C" */
