/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298848` (_code @ 0x298848, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026c464(int, int, int);
int FUN_0026c654(...);
int FUN_002ae164(void);

/* Supplied declaration required: FUN_0026c464. */
/* Supplied declaration required: FUN_0026c654. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002ae164. */


unsigned int FUN_00298848(int param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = param_1;
  FUN_002ae164();
  if (temp_v0 != 0) {
    temp_v4 = *(unsigned int *)(temp_v0 + 0x28);
    temp_v2 = 3;
    temp_v6 = (temp_v4 & 0x7ff) >> 9 == 1;
    temp_v7 = (temp_v4 & 0x7ff) >> 9 == 3;
    temp_v8 = temp_v6 || temp_v7;
    if (temp_v6 || temp_v7) {
      temp_v8 = *(char *)(temp_v0 + 0x23) == '\x03';
    }
    if (temp_v8) {
      temp_v8 = (temp_v4 & 0x1ff) >> 5 != 3;
      if (temp_v8) {
        temp_v2 = 8;
      }
      if (temp_v8 && temp_v2 != (temp_v4 & 0x1ff) >> 5) {
        temp_v0 = FUN_002a8764();
        temp_v5 = -1;
        do {
          temp_v1 = param_2;
          FUN_0026c654(param_2,0xffffffff,param_1,1);
          while( 1 ) {
            if (temp_v1 == 0) {
              return 1;
            }
            temp_v5 = temp_v5 + 1;
            if (temp_v5 >= 0x18) goto LAB_00298934;
            if (temp_v5 < 0) break;
            temp_v3 = (int)*(char *)(temp_v0 + temp_v5 + 0x90f0);
            if (-1 < temp_v3) {
              temp_v1 = param_2;
              FUN_0026c654(param_2,temp_v3,param_1,1);
            }
          }
        } while( 1 );
      }
      FUN_0026c464(param_2,param_1,1);
      if (param_2 == 0) {
        return 1;
      }
    }
    else {
LAB_00298934:
      if (param_1 == 0x8c) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
