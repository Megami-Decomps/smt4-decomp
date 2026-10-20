/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002684d0` (_code @ 0x2684d0, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_002a690c(int, int, int);
int FUN_00333694(...);

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_002a690c. */
/* Supplied declaration required: FUN_00333694. */


unsigned int FUN_002684d0(int param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = param_1;
  FUN_001aba54();
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x28);
    temp_v6 = (temp_v2 & 0x7ff) >> 9 == 1;
    temp_v7 = (temp_v2 & 0x7ff) >> 9 == 3;
    temp_v8 = temp_v6 || temp_v7;
    if (temp_v6 || temp_v7) {
      temp_v8 = *(char *)(temp_v0 + 0x23) == '\x03';
    }
    if (temp_v8) {
      temp_v8 = (temp_v2 & 0x1ff) >> 5 != 3;
      temp_v3 = temp_v2;
      if (temp_v8) {
        temp_v3 = 8;
      }
      if (temp_v8 && temp_v3 != (temp_v2 & 0x1ff) >> 5) {
        temp_v0 = FUN_001ab888();
        temp_v5 = -1;
        do {
          temp_v1 = param_2;
          FUN_00333694(param_2,0xffffffff,param_1,1);
          while( 1 ) {
            if (temp_v1 == 0) {
              return 1;
            }
            temp_v5 = temp_v5 + 1;
            if (temp_v5 >= 0x18) goto LAB_002685bc;
            if (temp_v5 < 0) break;
            temp_v4 = (int)*(char *)(temp_v0 + temp_v5 + 0x1c88);
            if (-1 < temp_v4) {
              temp_v1 = param_2;
              FUN_00333694(param_2,temp_v4,param_1,1);
            }
          }
        } while( 1 );
      }
      FUN_002a690c(param_2,param_1,1);
      if (param_2 == 0) {
        return 1;
      }
    }
    else {
LAB_002685bc:
      if (param_1 == 0x8c || param_1 == 0x93) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
