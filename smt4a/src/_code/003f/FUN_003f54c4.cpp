/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f54c4` (_code @ 0x3f54c4, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164168(unsigned int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_001879d0(unsigned int);
int FUN_003f7674(int, int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003f7674. */


void FUN_003f54c4(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  
  temp_v3 = 0.26f;
  FUN_001879d0(DAT_0059dbb4);
  FUN_001677c0();
  temp_v1 = 0;
  do {
    temp_v2 = (*(int *)(param_1 + 0x50) + temp_v1) - *(int *)(param_1 + 0x128);
    if (-1 < temp_v2) {
      temp_v0 = FUN_001834a4(0x31,temp_v1 + 0x51);
      FUN_00164168(*(unsigned int *)(param_1 + 0x5d8),
                   (int)*(short *)(temp_v0 + 8) + param_2 + (int)temp_v3,
                   *(short *)(temp_v0 + 10) + param_3,0xc9,6,temp_v2);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 7);
  FUN_003f7674(param_1,param_2,param_3);
  FUN_001677c0();
  return;
}

} /* extern "C" */
