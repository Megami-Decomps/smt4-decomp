/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6940` (_code @ 0x2b6940, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001413d0(unsigned int, int, unsigned int, unsigned int, unsigned int);
int FUN_002b04e8(int, int, int, unsigned int, unsigned int, unsigned int, int *);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, int);
/* Supplied declaration required: FUN_002b04e8. */


void FUN_002b6940(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_24;
  int temp_v2;
  int temp_v3;
  
  if (-1 < param_1) {
    temp_v0 = FUN_0014143c(g_aocSystem,param_1);
    if (temp_v0 == 0) {
      if (param_1 < 0x200) {
        temp_v1 = (param_1 / 0x10) * 0x10;
        iStack_24 = temp_v1 + 0x10;
        temp_v2 = (param_1 % 0x10) * 0x20;
        temp_v3 = temp_v2 + 0x20;
        FUN_002b04e8(2,0x25,0,param_2,param_3,param_4,&temp_v1);
        return;
      }
      temp_v1 = ((param_1 - 0x200) / 0x10) * 0x10;
      iStack_24 = temp_v1 + 0x10;
      temp_v2 = ((param_1 - 0x200) % 0x10) * 0x20;
      temp_v3 = temp_v2 + 0x20;
      FUN_002b04e8(2,0x25,3000,param_2,param_3,param_4,&temp_v1);
      return;
    }
    FUN_001413d0(g_aocSystem,param_1,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
