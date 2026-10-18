/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151400` (_code @ 0x151400, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;


unsigned int FUN_00151400(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  romwright_code *unaff_r6;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v3 = *(int *)(param_1 + 4);
  temp_v2 = 0;
  temp_v4 = param_1 + 8;
  temp_v0 = 1;
  if (temp_v4 != *(int *)(param_1 + 8)) {
    do {
      temp_v4 = *(int *)(temp_v4 + 4);
      temp_v3 = temp_v3 - 1;
      if ((temp_v2 == 0) && (*(int *)(temp_v4 + 8) != 0)) {
        temp_v2 = *(int *)(temp_v4 + 0x10);
        unaff_r6 = *(romwright_code **)(temp_v2 + 0x10);
        param_3 = *(int *)(temp_v2 + 0x14);
        temp_v2 = *(int *)(temp_v2 + 8) + *(int *)(temp_v2 + 0xc);
      }
      piVar3 = *(int **)(temp_v4 + 0xc);
      if (*(int **)(temp_v4 + 0xc) != (int *)(temp_v4 + 0xc)) {
        do {
          piVar4 = (int *)*piVar3;
          if (unaff_r6 != (romwright_code *)piVar3[4] || param_3 != piVar3[5]) {
            temp_v0 = 0;
            break;
          }
          piVar3 = piVar4;
        } while (piVar4 != (int *)(temp_v4 + 0xc));
      }
      temp_v1 = temp_v4;
    } while ((temp_v3 != param_2) && (temp_v1 = temp_v5, temp_v4 != *(int *)(param_1 + 8)));
    temp_v5 = temp_v1;
    if (temp_v2 != 0 && temp_v0) {
      if (unaff_r6 != (romwright_code *)0x0) {
        (*unaff_r6)(temp_v5,temp_v2 - temp_v5);
      }
      temp_v6 = 1;
    }
  }
  return temp_v6;
}
