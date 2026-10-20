/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041b204` (_code @ 0x41b204, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00169a1c(int, int, int, int);
int FUN_0018152c(...);
int FUN_001834a4(int, int);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_003ca87c(int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_003ca87c. */


void FUN_0041b204(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  do {
    FUN_001835b4(2,0x2b,temp_v1 + 0x12,*param_3,param_3[1],0xb);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = FUN_001834a4(0x2b,0x18);
  FUN_001835b4(2,0x2b,0x16,*param_3 + (int)*(short *)(temp_v1 + 8),
               (int)*(short *)(temp_v1 + 10) + param_3[1],0x15);
  if (*(char *)(param_2 + 0x6b) != '\0') {
    FUN_003ca87c(*param_3 + (int)*(short *)(temp_v1 + 8),param_3[1] + (int)*(short *)(temp_v1 + 10),2);
  }
  else {
    FUN_00169a1c(0x25d,*param_3 + (int)*(short *)(temp_v1 + 8),
                 (int)*(short *)(temp_v1 + 10) + param_3[1],2);
  }
  temp_v1 = 0;
  do {
    temp_v2 = param_2 + temp_v1 * 2;
    if (*(short *)(temp_v2 + 0x5c) != 0) {
      temp_v0 = FUN_001834a4(0x2b,temp_v1 + 0x19);
      FUN_001835b4(2,0x2b,0x16,*param_3 + (int)*(short *)(temp_v0 + 8),
                   (int)*(short *)(temp_v0 + 10) + param_3[1],0xb);
      FUN_0018152c((int)*(short *)(temp_v2 + 0x5c),*param_3 + (int)*(short *)(temp_v0 + 8),
                   (int)*(short *)(temp_v0 + 10) + param_3[1],0x15,0);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}

} /* extern "C" */
