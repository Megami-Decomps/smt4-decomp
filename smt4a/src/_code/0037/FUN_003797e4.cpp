/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003797e4` (_code @ 0x3797e4, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0046c35c(int, int, int);
int FUN_0046ffb0(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0046c35c. */
/* Supplied declaration required: FUN_0046ffb0. */


int FUN_003797e4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x2d,0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x20;
  }
  else {
    temp_v1 = g_aocSystem;
    FUN_0046c35c(g_aocSystem,0x25,0);
    if (param_1 < temp_v1 + temp_v2) {
      temp_v1 = g_aocSystem;
      FUN_0046ffb0(g_aocSystem,param_1 - temp_v2);
      return temp_v1;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
