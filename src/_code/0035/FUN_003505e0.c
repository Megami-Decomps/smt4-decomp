/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003505e0` (_code @ 0x3505e0, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0023a620. */
extern char FUN_003f6c6c(unsigned int);


void FUN_003505e0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7 [2];
  
  if (*(int *)(param_1 + 0xc) != 1) {
    temp_v5 = *(int *)(param_1 + 0xc) != 0;
    temp_v1 = 0;
    if (temp_v5) {
      temp_v1 = *(int *)(param_1 + 0xc);
    }
    if (temp_v5 && temp_v1 != 4) {
      temp_v4 = 0;
      temp_v1 = temp_v4;
      do {
        piVar6 = (int *)(param_1 + temp_v4 * 4 + 0x46c);
        if (-1 < *piVar6) {
          piVar3 = *(int **)(param_1 + *piVar6 * 4 + 0x2ec);
          (**(romwright_code **)(*piVar3 + 0x10))(piVar3,&temp_v6);
          temp_v2 = (**(romwright_code **)(**(int **)(param_1 + *piVar6 * 4 + 0x2ec) + 0x20))();
          temp_v6 = temp_v2 - temp_v6;
          FUN_0023a620(**(unsigned int **)(param_1 + 0x18),
                       *(unsigned int *)(param_1 + *piVar6 * 4 + 0x44c),temp_v7);
          if ((temp_v7[0] == 0) && (0 < temp_v6)) {
            temp_v1 = 1;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
      if (temp_v1 == 0) {
        return;
      }
    }
    temp_v0 = FUN_003f6c6c(**(unsigned int **)(param_1 + 0x18));
    if ((temp_v0 != '\0' && temp_v0 != '\x03') && (temp_v0 != '\x10')) {
      if (temp_v0 != '\x11') {
        *(unsigned int *)(param_1 + 0xc) = 7;
      }
      else if (*(int *)(param_1 + 0xc) == 3) {
        temp_v1 = 0;
        do {
          temp_v4 = param_1 + temp_v1 * 4;
          if (-1 < *(int *)(temp_v4 + 0x46c)) {
            temp_v3 = param_1 + *(int *)(temp_v4 + 0x46c) * 0x28;
            temp_v2 = 0;
            if (temp_v3 != -0x30c) {
              if (*(unsigned int *)(temp_v3 + 0x314) < 2) {
                temp_v2 = 2;
              }
              else {
                temp_v2 = 1;
              }
            }
            if (*(int *)(temp_v4 + 0x474) - *(int *)(temp_v4 + 0x47c) < temp_v2) {
              *(unsigned int *)(param_1 + 0xc) = 8;
            }
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 2);
      }
      else {
        *(unsigned int *)(param_1 + 0xc) = 8;
      }
    }
  }
  return;
}
