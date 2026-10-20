/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecb32` (_code @ 0x2ecb32, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ec890(...);
int FUN_002ecb04(...);
int FUN_002ecbdc(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
} param_1_stack;

extern int FUN_002ec674(unsigned char *);
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ecb04. */
/* Supplied declaration required: FUN_002ecbdc. */
extern unsigned int FUN_002eccc4(int);


void FUN_002ecb32(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [24];
  
  temp_v0 = FUN_002eccc4(param_1 + 4);
  if (temp_v0 >= 2) {
    FUN_002ecbdc(temp_v3,**(int **)(param_1 + 4) + 8);
    FUN_002ecbdc(temp_v6,**(int **)(param_1 + 0x10) + 8);
    for (temp_v0 = 1; temp_v2 = FUN_002eccc4(param_1 + 4), temp_v0 < temp_v2; temp_v0 = temp_v0 + 1) {
      for (temp_v2 = 0; temp_v2 < (unsigned int)(temp_v5 - temp_v4) >> 1; temp_v2 = temp_v2 + 1) {
        temp_v1 = FUN_002ec674(temp_v3);
        *(char *)(temp_v1 + temp_v2) =
             ((char)((unsigned int)(temp_v5 - temp_v4) >> 1) - (char)temp_v2) + '\x01' +
             *(char *)(temp_v1 + temp_v2);
        temp_v1 = FUN_002ec674(temp_v6);
        *(char *)(temp_v1 + temp_v2) =
             ((char)((unsigned int)(temp_v5 - temp_v4) >> 1) - (char)temp_v2) + '\x01' +
             *(char *)(temp_v1 + temp_v2);
      }
      FUN_002ecb04(*(unsigned int *)(*(int *)(param_1 + 4) + temp_v0 * 4),temp_v3);
      FUN_002ecb04(*(unsigned int *)(*(int *)(param_1 + 0x10) + temp_v0 * 4),temp_v6);
    }
    FUN_002ec890(temp_v6);
    FUN_002ec890(temp_v3);
  }
  return;
}

} /* extern "C" */
