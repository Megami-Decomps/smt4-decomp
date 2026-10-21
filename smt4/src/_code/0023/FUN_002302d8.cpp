/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002302d8` (_code @ 0x2302d8, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002305fc(unsigned int *);
int FUN_00233670(unsigned int *, int, unsigned int, unsigned int);
int FUN_00233818(void);
int ifTouchRegionClearAll(unsigned int);
int ifTouchRegionRemove(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002305fc. */
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_00233818. */
/* Supplied declaration required: ifTouchRegionClearAll. */
extern unsigned short FUN_002b8584(unsigned int, unsigned int);
/* Supplied declaration required: ifTouchRegionRemove. */


void FUN_002302d8(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  ifTouchRegionClearAll(param_1[0x217]);
  FUN_00233818();
  temp_v4 = 0;
  if (temp_v4 < (short)param_1[0x5754]) {
    do {
      ifTouchRegionRemove();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (short)param_1[0x5754]);
  }
  *(unsigned short *)(param_1 + 0x5754) = 0;
  *(unsigned short *)(param_1 + 0x5753) = 0xffff;
  *(unsigned short *)((int)param_1 + 0x15d4e) = 0xffff;
  (**(romwright_code **)(*(int *)param_1[0x217] + 8))
            ((int *)param_1[0x217],param_1 + param_1[0x218] * 0x1d + 0x220);
  temp_v3 = 9;
  temp_v2 = 0x29;
  *(unsigned short *)(param_1[0x217] + 4) = *(unsigned short *)(param_1[0x217] + 4) | 0x1000;
  *(unsigned int **)(param_1[0x217] + 100) = param_1 + 0xe0;
  if (param_1[0x218] == 7 || param_1[0x218] == 8) {
    temp_v3 = 10;
    temp_v2 = 0x28;
  }
  FUN_00233670(param_1 + 0x20a,0x2b,temp_v2,temp_v3);
  *(unsigned char *)(param_1 + 0x20e) = 1;
  temp_v0 = FUN_002b8584(0x1d,0x576);
  *(unsigned short *)(param_1 + 0x5753) = temp_v0;
  temp_v0 = FUN_002b8584(0x1d,0x577);
  *(unsigned short *)((int)param_1 + 0x15d4e) = temp_v0;
  *(short *)(param_1 + 0x5754) = (short)param_1[0x5754] + 2;
  if (param_2 != 0) {
    FUN_002305fc(param_1);
  }
  temp_v1 = *param_1 & 0xfffff1ff;
  *param_1 = temp_v1;
  if (param_1[0x218] == 8) {
    temp_v1 = temp_v1 | 0x800;
  }
  else {
    if (param_1[0x218] == 7) {
      *param_1 = temp_v1 | 0x400;
      return;
    }
    temp_v1 = temp_v1 | 0x200;
  }
  *param_1 = temp_v1;
  return;
}

} /* extern "C" */
