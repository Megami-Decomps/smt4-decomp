/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_GetMessHeader` (_code @ 0x501858, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int releaseOrCopyHandle(unsigned char *, int);
extern int FUN_00501f78(unsigned int, int);


unsigned int nn_cec_CTR_MessageBox_GetMessHeader(int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  
  temp_v1 = param_1 + param_3 * 4;
  if (param_2 != 0) {
    if (param_3 < *(unsigned int *)(param_1 + 0x3c0)) {
      if (*(unsigned int *)(param_1 + 0x560) != *(unsigned int *)(param_1 + 0x3c0)) {
        return *(unsigned int *)(temp_v1 + 0x3cc);
      }
      temp_v0 = releaseOrCopyHandle(temp_v3,param_1 + param_3 * 8 + 0x564);
      temp_v2 = 0;
      if (*(int *)(param_1 + 0x3c0) != 0) {
        do {
          temp_v1 = FUN_00501f78(temp_v0,*(int *)(param_1 + temp_v2 * 4 + 0x3cc) + 0x20);
          if (temp_v1 != 0) {
            return *(unsigned int *)(param_1 + temp_v2 * 4 + 0x3cc);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(unsigned int *)(param_1 + 0x3c0));
      }
    }
  }
  else if (param_3 < *(unsigned int *)(param_1 + 0x210)) {
    return *(unsigned int *)(temp_v1 + 0x21c);
  }
  return 0;
}

} /* extern "C" */
