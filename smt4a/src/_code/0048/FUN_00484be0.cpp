/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00484be0` (_code @ 0x484be0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int FUN_0019dc44(unsigned int);


void FUN_00484be0(int param_1)

{
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = (int)*(char *)(param_1 + 0x22);
  if (0 < temp_v1) {
    while (temp_v1 = temp_v1 - 1, -1 < temp_v1) {
      temp_v0 = (char)temp_v1;
      if ((((-1 < temp_v0) &&
           (temp_v2 = param_1 + temp_v0 * 2,
           (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) == 0)
           ) || (temp_v0 < 0)) ||
         (temp_v2 = param_1 + temp_v0 * 2,
         (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) ==
         -0x7ec0)) {
        temp_v2 = FUN_0019dc44(3);
        (**(romwright_code **)(**(int **)(temp_v2 + 8) + 0x44))(*(int **)(temp_v2 + 8),0x8140);
        temp_v2 = param_1 + temp_v0 * 2;
        *(unsigned char *)(temp_v2 + 0xb0) = 0x81;
        *(unsigned char *)(temp_v2 + 0xb1) = 0x40;
      }
    }
  }
  return;
}

} /* extern "C" */
