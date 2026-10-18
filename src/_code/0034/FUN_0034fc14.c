/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fc14` (_code @ 0x34fc14, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023a690. */
extern int FUN_0023a774(int);
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c4244. */
extern int FUN_002c615c(int, int);
/* Supplied declaration required: FUN_00351040. */


unsigned int FUN_0034fc14(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  
  temp_v7 = param_4;
  temp_v0 = FUN_0023a774(param_1 + 0x158);
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x158;
    FUN_0023a690();
    if (temp_v0 == 0) {
      *(unsigned int *)(param_1 + 0xc) = 7;
    }
    FUN_00351040(param_1);
  }
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v5 = temp_v0 != 3;
  if (temp_v5) {
    temp_v0 = *(int *)(param_1 + 0xc);
  }
  if (temp_v5 && temp_v0 != 6) {
    temp_v1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xc) != 1) {
      if (*(int *)(param_1 + 0xc) == 6) {
        FUN_002c4244(param_1 + 0x20);
      }
      FUN_002c3aa8(param_1);
      *(unsigned int *)(param_1 + 0xc) = 2;
      FUN_002c3a24(param_1);
    }
    while( 1 ) {
      temp_v5 = *(int *)(param_1 + 0xc) != 1;
      temp_v0 = 1;
      if (temp_v5) {
        temp_v0 = *(int *)(param_1 + 0xc);
      }
      temp_v6 = temp_v0 != 8;
      if (temp_v5 && temp_v6) {
        temp_v0 = *(int *)(param_1 + 0xc);
      }
      if ((!temp_v5 || !temp_v6) || temp_v0 == 7) break;
      FUN_002bb490(500000,0);
    }
    temp_v0 = 0;
    do {
      temp_v4 = param_1 + temp_v0 * 4;
      temp_v2 = *(int *)(temp_v4 + 0x46c);
      if (-1 < temp_v2) {
        if ((temp_v2 < *(int *)(param_1 + 0x2e8)) && (temp_v3 = param_1 + temp_v2 * 0x28, temp_v3 != -0x30c)
           ) {
          if (*(unsigned int *)(temp_v3 + 0x314) < 2) {
            temp_v3 = 2;
          }
          else {
            temp_v3 = 1;
          }
        }
        else {
          temp_v3 = 0;
        }
        piVar4 = *(int **)(param_1 + temp_v2 * 4 + 0x2ec);
        (**(romwright_code **)(*piVar4 + 0x10))(piVar4,&temp_v7);
        temp_v7 = FUN_002c615c(temp_v7,temp_v3);
        temp_v7 = temp_v7 * temp_v3;
        temp_v2 = 0;
        if (temp_v2 < temp_v7) {
          do {
            (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v4 + 0x46c) * 4 + 0x2ec) + 0x1c))();
            temp_v2 = temp_v2 + 1;
            *(int *)(temp_v4 + 0x47c) = *(int *)(temp_v4 + 0x47c) + 1;
          } while (temp_v2 < temp_v7);
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    temp_v1 = 1;
  }
  return temp_v1;
}
