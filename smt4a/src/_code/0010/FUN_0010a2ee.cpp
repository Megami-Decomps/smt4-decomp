/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a2ee` (_code @ 0x10a2ee, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int wideBufferLength(unsigned int);
extern unsigned int *arrayElementAddress_002f32d4(int, unsigned int);


void FUN_0010a2ee(int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  
  temp_v1 = param_1 + 0x114;
  puVar3 = (unsigned int *)arrayElementAddress_002f32d4(temp_v1,0);
  temp_v2 = wideBufferLength(*puVar3);
  if (temp_v2 != 0) {
    puVar3 = (unsigned int *)arrayElementAddress_002f32d4(temp_v1,1);
    temp_v2 = wideBufferLength(*puVar3);
    if (temp_v2 != 0) {
      puVar3 = (unsigned int *)arrayElementAddress_002f32d4(temp_v1,2);
      temp_v2 = wideBufferLength(*puVar3);
      if (temp_v2 != 0) {
        puVar3 = (unsigned int *)arrayElementAddress_002f32d4(temp_v1,3);
        temp_v1 = wideBufferLength(*puVar3);
        if (temp_v1 != 0) {
          temp_v0 = 1;
          *(unsigned char *)(param_1 + 0x10c) = temp_v0;
          return;
        }
      }
    }
  }
  temp_v0 = 0;
  *(unsigned char *)(param_1 + 0x10c) = temp_v0;
  return;
}

} /* extern "C" */
