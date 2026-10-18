/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0b84` (_code @ 0x3b0b84, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003afaf0(int);


unsigned int FUN_003b0b84(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 1;
  temp_v1 = *(int *)(*(int *)(param_1 + 0x1428) + 8);
  if (temp_v1 != *(int *)(param_1 + 0x1428)) {
    do {
      temp_v2 = *(int *)(*(int *)(temp_v1 + 0x18) + 0x10);
      temp_v0 = FUN_003afaf0(temp_v2);
      if (temp_v0 == 0) {
        temp_v3 = 0;
      }
      else {
        *(unsigned char *)(*(int *)(temp_v2 + 0x50) + 0x14) = 1;
      }
      temp_v0 = *(int *)(temp_v1 + 0xc);
      if (*(int *)(temp_v1 + 0xc) != 0) {
        do {
          temp_v1 = temp_v0;
          temp_v0 = *(int *)(temp_v1 + 8);
        } while (*(int *)(temp_v1 + 8) != 0);
      }
      else {
        temp_v0 = *(int *)(temp_v1 + 4);
        if (temp_v1 == *(int *)(temp_v0 + 0xc)) {
          do {
            temp_v1 = temp_v0;
            temp_v0 = *(int *)(temp_v1 + 4);
          } while (temp_v1 == *(int *)(temp_v0 + 0xc));
        }
        if (*(int *)(temp_v1 + 0xc) != temp_v0) {
          temp_v1 = temp_v0;
        }
      }
    } while (temp_v1 != *(int *)(param_1 + 0x1428));
  }
  return temp_v3;
}
