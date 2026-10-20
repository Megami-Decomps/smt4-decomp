/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045aca8` (_code @ 0x45aca8, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3390(void);

extern int FUN_001a7a20(int, unsigned int);
/* Supplied declaration required: FUN_002e3390. */


unsigned int FUN_0045aca8(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = 0;
  temp_v0 = 0;
  if ((unsigned int)param_1[1] < *(unsigned int *)(param_2 + 0x10)) {
    temp_v2 = 0x80000001;
  }
  else {
    temp_v5 = 0;
    temp_v4 = 0;
    if (*(unsigned int *)(param_2 + 0x10) != 0) {
      do {
        puVar4 = *(unsigned int **)(*(int *)(param_2 + 0xc) + temp_v5 * 4);
        if (*(short *)(puVar4 + 1) != 0x33) {
          temp_v2 = *puVar4;
          FUN_002e3390();
          temp_v3 = FUN_001a7a20(param_3 + 0x74,temp_v2);
          if (temp_v3 == 0xffff) {
            temp_v1 = 1;
            *(unsigned short *)(*param_1 + temp_v5 * 2) = 0xffff;
          }
          else {
            temp_v0 = 1;
            *(short *)(*param_1 + temp_v5 * 2) = (short)temp_v3;
          }
        }
        else {
          temp_v0 = 1;
          *(unsigned short *)(*param_1 + temp_v5 * 2) = 0;
        }
        temp_v4 = *(unsigned int *)(param_2 + 0x10);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v4);
    }
    if (temp_v4 < (unsigned int)param_1[1]) {
      do {
        temp_v5 = temp_v4 + 1;
        *(unsigned short *)(*param_1 + temp_v4 * 2) = 0xffff;
        temp_v4 = temp_v5;
      } while (temp_v5 < (unsigned int)param_1[1]);
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
