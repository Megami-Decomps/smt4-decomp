/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_DateTime_FromParameters` (_code @ 0x2ad488, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_fnd_DateTime_DateToDays. */


void nn_fnd_DateTime_FromParameters
               (long long *param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
               int param_6,int param_7,int param_8)

{
/* irregular: 1 native warning(s); review required */
  nn_fnd_DateTime_DateToDays(param_2,param_3,param_4);
  *param_1 = (long long)param_2 * 86400000 +
             (long long)param_5 * 3600000 + (long long)param_8 +
             (long long)param_7 * 1000 + (long long)param_6 * 60000;
  return;
}
