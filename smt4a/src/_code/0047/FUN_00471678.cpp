/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471678` (_code @ 0x471678, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


int FUN_00471678(int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = 0;
  if (temp_v4 < *(int *)(param_1 + 0x448)) {
    do {
      temp_v5 = *(int *)(*(int *)(param_1 + 0x450) + temp_v4 * 0x10);
      if ((temp_v5 != 0) && (temp_v0 = *(int *)(*(int *)(param_1 + 0x44c) + temp_v4 * 0x10), temp_v0 != 0))
      {
        temp_v1 = FUN_001a6f60(temp_v0,0);
        temp_v0 = dataTableGetEntries();
        temp_v2 = dataTableGetCount(temp_v1);
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            puVar5 = (unsigned short *)(temp_v0 + temp_v3 * 0x7c);
            if ((*puVar5 == param_2) &&
               ((param_3 == 0 || ((param_3 - 1U < 5 && (puVar5[param_3 + 0x2e] != 0)))))) {
              return temp_v5;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x448));
  }
  return 0;
}

} /* extern "C" */
