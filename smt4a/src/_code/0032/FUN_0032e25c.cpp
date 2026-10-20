/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032e25c` (_code @ 0x32e25c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_002e59f8(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_002e59f8. */


void FUN_0032e25c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_001ab888();
  if (param_2 == 0) {
    temp_v0 = 0x218;
    *(unsigned short *)(param_1 + 0x34) = 0;
    *(unsigned short *)(param_1 + 0x60) = 0x218;
    FUN_00184310();
    *(unsigned short *)(param_1 + 0x62) = *(unsigned short *)(temp_v0 + 6);
    FUN_002e59f8(temp_v0 + 0x40,param_1 + 0x50,0x10);
    return;
  }
  temp_v3 = 0;
  *(short *)(param_1 + 0x34) = (short)param_2;
  temp_v1 = temp_v0;
  do {
    temp_v2 = (int)*(char *)(temp_v0 + temp_v3 + 0x1c88);
    if ((-1 < temp_v2) &&
       (temp_v1 = FUN_001ab854(temp_v2), *(short *)(temp_v1 + 0x62) == *(short *)(param_1 + 0x34))) break;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  *(short *)(param_1 + 0x60) = (short)param_2;
  *(unsigned short *)(param_1 + 0x62) = *(unsigned short *)(temp_v1 + 100);
  FUN_002e59f8(temp_v1 + 0x34,param_1 + 0x50,0x10);
  return;
}

} /* extern "C" */
