/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338fb0` (_code @ 0x338fb0, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00294f64(int);
int FUN_002c415c(void);
int FUN_002c4938(int, int);

/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_00338fb0(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  unsigned char temp_v8;
  
  if (*(int *)(param_1 + 0x2f38) != 0) {
    FUN_002c415c();
    *(int *)(param_1 + 0x2f38) = 0;
  }
  temp_v7 = 0;
  do {
    temp_v6 = 0;
    temp_v0 = param_1 + temp_v7 * 4;
    do {
      temp_v5 = *(int *)(temp_v0 + 0x2134);
      if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(param_1 + temp_v6 * 0x48 + 0x3580))) {
        temp_v2 = (int)(short)*(int *)(temp_v5 + 4);
        temp_v1 = 0;
        do {
          temp_v3 = param_1 + temp_v1 * 2;
          temp_v4 = temp_v3 + 0x2100;
          temp_v8 = *(short *)(temp_v3 + 0x21dc) == temp_v2;
          if (!temp_v8) {
            temp_v4 = (int)*(short *)(temp_v3 + 0x21de);
          }
          if (temp_v8 || temp_v4 == temp_v2) goto LAB_0033904c;
          temp_v1 = temp_v1 + 2;
        } while (temp_v1 < 0x2a);
        FUN_00294f64(temp_v5);
        *(unsigned int *)(temp_v0 + 0x2134) = 0;
      }
LAB_0033904c:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x32);
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x2a) {
      FUN_002c4938(param_1 + 0x357c,0xe10);
      temp_v7 = 0;
      temp_v0 = 0x2a;
      do {
        *(unsigned int *)(*(int *)(param_1 + 0x1e98) + temp_v7 * 0x114 + 0x488c) = 0;
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v7 * 0x288 + 0xa998);
        temp_v0 = temp_v0 - 1;
        *puVar8 = 0;
        puVar8[1] = 0;
        temp_v7 = temp_v7 + 1;
      } while (temp_v0 != 0);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
