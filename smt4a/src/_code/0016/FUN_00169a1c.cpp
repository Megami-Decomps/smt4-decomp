/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169a1c` (_code @ 0x169a1c, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001849bc(int, int, int, unsigned int, unsigned int, unsigned int, int *);
int FUN_00191ea8(unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_001849bc. */
/* Supplied declaration required: FUN_00191ea8. */
extern int FUN_00191f18(unsigned int, int);


void FUN_00169a1c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_24;
  int temp_v2;
  int temp_v3;
  
  if (-1 < param_1) {
    temp_v0 = FUN_00191f18(g_aocSystem,param_1);
    if (temp_v0 == 0) {
      if (param_1 < 0x200) {
        temp_v1 = (param_1 / 0x10) * 0x10;
        iStack_24 = temp_v1 + 0x10;
        temp_v2 = (param_1 % 0x10) * 0x20;
        temp_v3 = temp_v2 + 0x20;
        FUN_001849bc(2,0x1b,0,param_2,param_3,param_4,&temp_v1);
        return;
      }
      temp_v1 = ((param_1 - 0x200) / 0x10) * 0x10;
      iStack_24 = temp_v1 + 0x10;
      temp_v2 = ((param_1 - 0x200) % 0x10) * 0x20;
      temp_v3 = temp_v2 + 0x20;
      FUN_001849bc(2,0x1b,3000,param_2,param_3,param_4,&temp_v1);
      return;
    }
    FUN_00191ea8(g_aocSystem,param_1,param_2,param_3,param_4);
  }
  return;
}

} /* extern "C" */
