/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227918` (_code @ 0x227918, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
} param_3_stack;

/* Supplied declaration required: FUN_002475e4. */
/* Supplied declaration required: FUN_00282b94. */
extern unsigned int FUN_00293c98(void);


void FUN_00227918(unsigned int param_1,unsigned int *param_2,int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [2];
  unsigned short temp_v3;
  short temp_v4;
  
  temp_v0 = FUN_00293c98();
  FUN_00282b94(temp_v0,param_1);
  temp_v1 = FUN_00293c98();
  FUN_002475e4(temp_v2,temp_v1,temp_v0);
  *param_2 = (unsigned int)temp_v3;
  *param_3 = (int)temp_v4;
  return;
}
