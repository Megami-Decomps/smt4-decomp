/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153084` (_code @ 0x153084, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0019d4d8. */
extern int FUN_001bc2ec(void);


void FUN_00153084(int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = 0;
  do {
    temp_v3 = 0;
    temp_v1 = 0;
    piVar3 = (int *)(param_2 + temp_v2 * 0x18);
    temp_v4 = *piVar3;
    piVar4 = (int *)(param_1 + temp_v2 * 0x18);
    temp_v0 = 0;
    if (temp_v4 != 0x81a5) {
      if (temp_v4 < 0x81a6) {
        if (temp_v4 == 0x8056) {
          temp_v0 = 4;
          temp_v3 = piVar3[1] * piVar3[2] * 2;
        }
        else if (temp_v4 == 0x8057) {
          temp_v0 = 2;
          temp_v3 = piVar3[1] * piVar3[2] * 2;
        }
        else {
          if (temp_v4 != 0x8058) goto LAB_00153148;
          temp_v1 = 2;
          temp_v3 = piVar3[1] * piVar3[2] * 4;
        }
      }
      else if (temp_v4 == 0x88f0) {
        temp_v0 = 3;
        temp_v3 = piVar3[1] * piVar3[2] * 4;
      }
      else if (temp_v4 == 0x8d62) {
        temp_v0 = 3;
        temp_v3 = piVar3[1] * piVar3[2] * 2;
      }
    }
    else {
      temp_v3 = piVar3[1] * piVar3[2] * 2;
    }
LAB_00153148:
    piVar4[4] = temp_v3;
    temp_v4 = *piVar3;
    piVar4[1] = temp_v0;
    *piVar4 = temp_v4;
    piVar4[5] = temp_v1;
    if (param_3 != 0) {
      temp_v1 = piVar3[3];
      temp_v0 = 0;
      if (temp_v1 != 0x10000) {
        if (temp_v1 != 0x20000) {
          if (temp_v1 == 0x30000) {
            temp_v0 = 0x30000;
            FUN_001630d4(temp_v0,0x100,0,temp_v3,1);
          }
        }
        else {
          temp_v0 = 0x20000;
          FUN_001630d4(temp_v0,0x100,0,temp_v3,1);
        }
      }
      else {
        temp_v0 = 0x10000;
        FUN_0019d4d8(0x10000,0x100,0,temp_v3,0x40,1);
      }
      piVar4[2] = temp_v0;
      temp_v3 = FUN_001bc2ec();
      piVar4[3] = temp_v3;
    }
    temp_v2 = temp_v2 + 1;
    *(int *)(param_1 + 0x30) = piVar3[1];
    *(int *)(param_1 + 0x34) = piVar3[2];
    *(int *)(param_1 + 0x38) = piVar3[5];
    if (temp_v2 >= 2) {
      return;
    }
  } while( 1 );
}
