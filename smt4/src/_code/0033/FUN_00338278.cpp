/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338278` (_code @ 0x338278, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableFileGetTable(int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


unsigned short * FUN_00338278(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  
  if (*(int *)(param_1 + 0x224c) == 0) {
    return (unsigned short *)0x0;
  }
  temp_v0 = dataTableFileGetTable(*(int *)(param_1 + 0x224c),0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      puVar5 = (unsigned short *)(temp_v1 + temp_v3 * 0xc);
      if (*puVar5 == param_2) {
        return puVar5;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  return (unsigned short *)0x0;
}

} /* extern "C" */
