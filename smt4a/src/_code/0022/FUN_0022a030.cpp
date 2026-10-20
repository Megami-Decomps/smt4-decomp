/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a030` (_code @ 0x22a030, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(unsigned int);

extern int FUN_001801a4(void);
extern int FUN_001ab854(int);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_003df57c(unsigned int, unsigned int);
extern int FUN_004bcbb4(int, unsigned int);


unsigned int FUN_0022a030(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_001aba54(param_2);
  if (param_1 < 0) {
    temp_v0 = FUN_001801a4();
    temp_v1 = FUN_003df57c(param_2,1);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_001ab854(param_1);
    temp_v1 = FUN_004bcbb4(temp_v0,param_2);
    if (*(short *)(temp_v0 + 0x2c) < temp_v1) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
