/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d670c` (_code @ 0x2d670c, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002598f0(unsigned int, int, int, int);
int asdTextDrawDirectoryEntry(unsigned int, int, unsigned int, int, int, unsigned int, int);
int FUN_002bf288(int, int, int, int, int, int);
int FUN_002bf4f8(int, int);

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

/* Supplied declaration required: FUN_002598f0. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */


void FUN_002d670c(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = *(int *)(param_1 + 4);
  temp_v4 = *(int *)(param_1 + 8);
  temp_v0 = FUN_002bf4f8(0x39,0xcf);
  temp_v2 = 0;
  do {
    temp_v1 = FUN_002bf4f8(0x39,temp_v2 + 0xd1);
    if (temp_v2 < param_4) {
      asdTextDrawDirectoryEntry(param_2,2,0xffffffff,0,3,param_3,temp_v2 + param_5 + param_6);
      FUN_002598f0(param_2,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + temp_v3,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v0 + 10) + temp_v4,0x15);
      FUN_002bf288(2,0x39,0xce,*(short *)(temp_v1 + 8) + temp_v3,*(short *)(temp_v1 + 10) + temp_v4,0xc);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xb);
  return;
}

} /* extern "C" */
