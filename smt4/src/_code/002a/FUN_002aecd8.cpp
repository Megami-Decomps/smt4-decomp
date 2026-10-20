/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aecd8` (_code @ 0x2aecd8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014caa4(int, int, unsigned int);
int dataTableGetEntries(void);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0014caa4. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: dataTableGet. */


void FUN_002aecd8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    temp_v0 = g_aocSystem;
    FUN_0014caa4(g_aocSystem,param_1,param_2);
    if (temp_v0 == 0) {
      dataTableGet(0x19,*(unsigned char *)(param_1 + 0x2a));
      dataTableGetEntries();
    }
  }
  return;
}

} /* extern "C" */
