/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045adc0` (_code @ 0x45adc0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001a7a20(int, unsigned int, unsigned int);
extern unsigned int libc_strlen(unsigned int);


unsigned int FUN_0045adc0(int *param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = 0;
  temp_v0 = 0;
  if ((unsigned int)param_1[1] < *(unsigned int *)(param_2 + 0x10)) {
    temp_v2 = 0x80000001;
  }
  else {
    temp_v6 = 0;
    temp_v5 = 0;
    if (*(unsigned int *)(param_2 + 0x10) != 0) {
      do {
        puVar4 = *(unsigned int **)(*(int *)(param_2 + 0xc) + temp_v6 * 4);
        if (*(short *)(puVar4 + 1) != 0x33) {
          temp_v2 = *puVar4;
          if (*(short *)(param_3 + 0x88) != 0) {
            temp_v3 = libc_strlen(temp_v2);
            temp_v4 = FUN_001a7a20(param_3 + 0x88,temp_v2,temp_v3);
            if (temp_v4 == 0xffff) {
              temp_v1 = 1;
              *(unsigned short *)(*param_1 + temp_v6 * 2) = 0xffff;
            }
            else {
              temp_v0 = 1;
              *(short *)(*param_1 + temp_v6 * 2) = (short)temp_v4;
            }
          }
          else {
            temp_v1 = 1;
            *(unsigned short *)(*param_1 + temp_v6 * 2) = 0xffff;
          }
        }
        else {
          temp_v0 = 1;
          *(unsigned short *)(*param_1 + temp_v6 * 2) = 0;
        }
        temp_v5 = *(unsigned int *)(param_2 + 0x10);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < temp_v5);
    }
    if (temp_v5 < (unsigned int)param_1[1]) {
      do {
        temp_v6 = temp_v5 + 1;
        *(unsigned short *)(*param_1 + temp_v5 * 2) = 0xffff;
        temp_v5 = temp_v6;
      } while (temp_v6 < (unsigned int)param_1[1]);
    }
    if (!temp_v0) {
      temp_v2 = 0x80008000;
    }
    else if (temp_v1) {
      temp_v2 = 0x4000;
    }
    else {
      temp_v2 = 0;
    }
  }
  return temp_v2;
}

} /* extern "C" */
