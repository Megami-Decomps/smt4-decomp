/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280ad4` (_code @ 0x280ad4, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c174(int, unsigned int [2], int);
int FUN_0013ebd8(...);
int asdMemFree(int);
int FUN_00429fcc(const char *name, unsigned long long titleId);
int FUN_0042a068(int, unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_005b40c9; /* 0x5b40c9 */

/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0013ebd8. */
extern unsigned long long FUN_00142b04(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00429fcc. */
/* Supplied declaration required: FUN_0042a068. */


int FUN_00280ad4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  unsigned int temp_v2 [2];
  
  FUN_0013c174(param_5,temp_v2,0);
  temp_v0 = param_1;
  FUN_0042a068(param_1,param_2,param_5,temp_v2[0],param_4,param_3);
  FUN_0013ebd8();
  if (-1 < temp_v0) {
    temp_v1 = FUN_00142b04();
    temp_v0 = (int)temp_v1;
    temp_v0 = FUN_00429fcc((const char *)temp_v0,
        ((unsigned long long)param_2 << 32) | (unsigned int)param_1);
    FUN_0013ebd8();
    if (-1 < temp_v0) {
      DAT_005b40c9 = 1;
    }
    FUN_0013ebd8(temp_v0);
  }
  if (param_5 != 0) {
    asdMemFree(param_5);
  }
  return temp_v0;
}

} /* extern "C" */
