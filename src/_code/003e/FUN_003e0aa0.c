/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0aa0` (_code @ 0x3e0aa0, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_00239b54(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00239b84. */
extern int FUN_00354d80(int);
/* Supplied declaration required: FUN_0035532c. */


int FUN_003e0aa0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4 [4];
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x2c))(param_1,temp_v4,2,1,0,0);
  if (-1 < temp_v1) {
    temp_v2 = FUN_00239b54(0x36c0,4);
    if (temp_v2 == 0) {
      temp_v1 = -0x379ef40d;
    }
    else {
      temp_v1 = FUN_00354d80(temp_v2);
      if (temp_v1 == 0) {
        FUN_00239b84();
        return -0x1f7ef408;
      }
      temp_v3 = temp_v2;
      FUN_0035532c();
      temp_v1 = -0x1f5ef794;
      if (-1 < temp_v3) {
        temp_v0 = *(unsigned short *)(temp_v2 + 0x202c);
        FUN_00239b84(temp_v2);
        if (temp_v0 <= temp_v4[0]) {
          temp_v1 = 0;
        }
        return temp_v1;
      }
      FUN_00239b84(temp_v2);
    }
  }
  return temp_v1;
}
