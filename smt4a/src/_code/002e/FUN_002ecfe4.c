/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecfe4` (_code @ 0x2ecfe4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00124350. */
/* Supplied declaration required: FUN_001243ee. */
extern unsigned int FUN_00124402(unsigned int *);
extern unsigned int FUN_00124416(unsigned int *);
extern unsigned int FUN_00124426(unsigned int *);
extern unsigned int FUN_0012443a(void);
extern long long FUN_0030fbe0(unsigned int, unsigned int);
extern long long FUN_0050d6d8(void);


long long FUN_002ecfe4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  long long temp_v2;
  long long temp_v3;
  long long temp_v4;
  
  temp_v0 = FUN_0012443a();
  temp_v2 = FUN_0030fbe0(temp_v0,0x3c);
  temp_v0 = FUN_00124402(param_1);
  temp_v3 = FUN_0030fbe0(temp_v0,0xe10);
  FUN_001243ee(param_1);
  temp_v0 = FUN_00124426(param_1);
  temp_v1 = FUN_00124416(param_1);
  FUN_00124350(param_1,temp_v1,temp_v0);
  temp_v4 = FUN_0050d6d8();
  return temp_v2 + temp_v3 + temp_v4 + (unsigned long long)(*param_1 & 0x3f);
}
