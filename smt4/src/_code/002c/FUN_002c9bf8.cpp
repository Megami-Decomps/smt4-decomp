/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9bf8` (_code @ 0x2c9bf8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025bed8(int, int, int);
int FUN_00385d88(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0025bed8. */
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00385d88. */


int FUN_002c9bf8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x2d,3);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x18;
  }
  else {
    temp_v1 = g_aocSystem;
    FUN_0025bed8(g_aocSystem,0x25,3);
    if (param_1 < temp_v1 + temp_v2) {
      temp_v1 = g_aocSystem;
      FUN_00385d88(g_aocSystem,param_1 - temp_v2);
      return temp_v1;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
