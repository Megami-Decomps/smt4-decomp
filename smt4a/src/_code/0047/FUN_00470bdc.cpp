/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00470bdc` (_code @ 0x470bdc, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern unsigned int FUN_001a6f60(int, unsigned int);


int FUN_00470bdc(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  int temp_v5;
  
  if (*(int *)(param_1 + 0x44c) == 0) {
    return 0;
  }
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x444)) {
    do {
      temp_v0 = *(int *)(*(int *)(param_1 + 0x44c) + temp_v5 * 0x10);
      if (temp_v0 != 0) {
        temp_v1 = FUN_001a6f60(temp_v0,0);
        temp_v0 = FUN_00192798();
        temp_v2 = FUN_00192748(temp_v1);
        if ((int)temp_v2 < 1) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = temp_v2 & 1;
          temp_v4 = 0;
          if (temp_v3 != 0) {
            do {
              if (*(unsigned short *)(temp_v0 + temp_v4 * 0x7c) == param_2) {
                return temp_v0 + temp_v4 * 0x7c;
              }
              temp_v4 = temp_v4 + 1;
            } while ((int)temp_v4 < (int)temp_v3);
          }
        }
        while (temp_v4 = temp_v3, (int)temp_v4 < (int)temp_v2) {
          puVar6 = (unsigned short *)(temp_v0 + temp_v4 * 0x7c);
          if (*puVar6 == param_2) {
            return temp_v0 + temp_v4 * 0x7c;
          }
          if (puVar6[0x3e] == param_2) {
            return temp_v0 + temp_v4 * 0x7c + 0x7c;
          }
          temp_v3 = temp_v4 + 2;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x444));
  }
  return 0;
}

} /* extern "C" */
