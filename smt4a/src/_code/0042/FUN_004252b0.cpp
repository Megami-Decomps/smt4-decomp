/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004252b0` (_code @ 0x4252b0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004232e0(int, unsigned int, int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_004232e0. */


unsigned int FUN_004252b0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  
  temp_v1 = *(int *)(param_1 + 0xc);
  temp_v7 = temp_v1 != 3;
  if (temp_v7) {
    temp_v1 = *(int *)(param_1 + 0xc);
  }
  if (temp_v7 && temp_v1 != 8) {
    return 0;
  }
  temp_v1 = 0;
  temp_v8 = param_4;
  do {
    piVar8 = (int *)(param_1 + temp_v1 * 4 + 0x46c);
    temp_v2 = *piVar8;
    if (-1 < temp_v2) {
      piVar4 = *(int **)(param_1 + temp_v2 * 4 + 0x2ec);
      (**(romwright_code **)(*piVar4 + 0x10))(piVar4,&temp_v8);
      temp_v3 = param_1 + *piVar8 * 0x28;
      temp_v2 = 0;
      if (temp_v3 != -0x30c) {
        if (*(unsigned int *)(temp_v3 + 0x314) < 2) {
          temp_v2 = 2;
        }
        else {
          temp_v2 = 1;
        }
      }
      if (temp_v8 < temp_v2) {
        return 0;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 2) {
      temp_v1 = 0;
      do {
        temp_v2 = param_1 + temp_v1 * 4;
        if ((-1 < *(int *)(temp_v2 + 0x46c)) &&
           (temp_v3 = param_1 + *(int *)(temp_v2 + 0x46c) * 0x28, temp_v3 != -0x30c)) {
          temp_v5 = 0;
          if (*(unsigned int *)(temp_v3 + 0x314) < 2) {
            temp_v3 = 2;
          }
          else {
            temp_v3 = 1;
          }
          do {
            temp_v6 = temp_v5 + temp_v1 * 2;
            temp_v4 = (**(romwright_code **)(**(int **)(param_1 + 0x1bc) + 8))(*(int **)(param_1 + 0x1bc),temp_v6)
            ;
            if (temp_v4 != 0) {
              temp_v0 = (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v2 + 0x46c) * 4 + 0x2ec) + 0x24)
                      )();
              *(unsigned char *)(param_1 + 0x15c) = temp_v0;
              temp_v8 = (**(romwright_code **)(**(int **)(param_1 + 0x1bc) + 0xc))
                                   (*(int **)(param_1 + 0x1bc),temp_v6);
              temp_v6 = param_1 + 0x158;
              FUN_004232e0(temp_v6,*(unsigned int *)(param_1 + *(int *)(temp_v2 + 0x46c) * 4 + 0x2ec),
                           param_1 + *(int *)(temp_v2 + 0x46c) * 0x28 + 0x30c,temp_v4);
              if (temp_v6 == 0) {
                return 0;
              }
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v3);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 2);
      return 1;
    }
  } while( 1 );
}

} /* extern "C" */
