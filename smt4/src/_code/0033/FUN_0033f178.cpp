/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f178` (_code @ 0x33f178, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableCallFileB(unsigned int, unsigned int);

extern unsigned int g_aocSystem; /* 0x433158 */

extern int FUN_0023e330(void);
extern int resourceIsReady(void);
extern int FUN_0023e3a4(unsigned int, unsigned int, unsigned int);
extern unsigned int recordPrepareLinkedOwner(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableCallFileB. */
extern unsigned int FUN_00389700(unsigned int, unsigned int);
extern unsigned int FUN_00389dc0(unsigned int, unsigned int);


unsigned int FUN_0033f178(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  asdTMTexTableCallFileB(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  temp_v0 = resourceIsReady();
  temp_v3 = 0;
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 8) != 0xc) {
      temp_v0 = FUN_0023e330();
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_00389700(g_aocSystem,*(unsigned int *)(param_1 + 4));
      temp_v2 = recordPrepareLinkedOwner(g_aocSystem,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
      ;
    }
    else {
      temp_v0 = FUN_0023e3a4(g_aocSystem,*(unsigned int *)(param_1 + 4),0);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_00389dc0(g_aocSystem,*(unsigned int *)(param_1 + 4));
      temp_v2 = recordPrepareLinkedOwner(g_aocSystem,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
      ;
    }
    temp_v3 = 0;
    if ((temp_v1 & ~temp_v2) != 0) {
      temp_v3 = 1;
    }
  }
  return temp_v3;
}

} /* extern "C" */
