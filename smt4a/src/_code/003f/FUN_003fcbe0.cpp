/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fcbe0` (_code @ 0x3fcbe0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001861c4(unsigned int, unsigned int);

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_001861c4. */
extern int FUN_00341930(void);
extern unsigned int FUN_0046c4f4(unsigned int, unsigned int, unsigned int);
extern int FUN_004705ec(void);
extern unsigned int FUN_004706e8(unsigned int, unsigned int);
extern int FUN_00470b18(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00470e48(unsigned int, unsigned int);


unsigned int FUN_003fcbe0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_001861c4(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  temp_v0 = FUN_00341930();
  temp_v3 = 0;
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 8) != 6) {
      temp_v0 = FUN_004705ec();
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_004706e8(g_aocSystem,*(unsigned int *)(param_1 + 4));
      temp_v2 = FUN_0046c4f4(g_aocSystem,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
      ;
    }
    else {
      temp_v0 = FUN_00470b18(g_aocSystem,*(unsigned int *)(param_1 + 4),0);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_00470e48(g_aocSystem,*(unsigned int *)(param_1 + 4));
      temp_v2 = FUN_0046c4f4(g_aocSystem,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
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
