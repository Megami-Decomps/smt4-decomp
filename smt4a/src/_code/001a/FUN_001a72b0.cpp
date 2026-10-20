/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a72b0` (_code @ 0x1a72b0, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;


void FUN_001a72b0(unsigned int param_1,unsigned char *param_2,int param_3)

{
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  if (temp_v0 < param_3 - 2) {
    do {
      if ((param_2[temp_v0] == ':') && (param_2[temp_v0 + 1] == '/')) {
        temp_v0 = temp_v0 + 2;
        if (temp_v0 < 1) {
          return;
        }
        temp_v2 = param_3 - temp_v0;
        if (0 < (int)temp_v2) {
          puVar2 = param_2 + temp_v0;
          puVar3 = puVar2 + -1;
          puVar4 = param_2 + -1;
          if ((temp_v2 & 1) != 0) {
            *param_2 = *puVar2;
            puVar3 = puVar2;
            puVar4 = param_2;
          }
          for (temp_v0 = (int)temp_v2 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
            puVar4[1] = puVar3[1];
            puVar3 = puVar3 + 2;
            puVar4 = puVar4 + 2;
            *puVar4 = *puVar3;
          }
        }
        temp_v1 = param_3 - temp_v2;
        if ((int)temp_v1 < 1) {
          return;
        }
        param_2 = param_2 + temp_v2;
        puVar3 = param_2 + -1;
        if ((temp_v1 & 1) != 0) {
          *param_2 = 0;
          puVar3 = param_2;
        }
        temp_v0 = (int)temp_v1 >> 1;
        if (temp_v0 == 0) {
          return;
        }
        do {
          puVar3[1] = 0;
          temp_v0 = temp_v0 - 1;
          puVar3 = puVar3 + 2;
          *puVar3 = 0;
        } while (temp_v0 != 0);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_3 - 2);
  }
  return;
}

} /* extern "C" */
