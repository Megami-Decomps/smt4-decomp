/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb1ea` (_code @ 0x2fb1ea, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3140(void);

extern int FUN_001d3f10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e3140. */
extern unsigned int nn_os_detail_ConvertLibraryToSvcPriority(unsigned int);


void FUN_002fb1ea(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = nn_os_detail_ConvertLibraryToSvcPriority(param_2);
  temp_v1 = FUN_001d3f10(*param_1,temp_v0);
  if (temp_v1 < 0) {
    FUN_002e3140();
  }
  return;
}

} /* extern "C" */
