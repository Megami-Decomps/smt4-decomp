/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df524` (_code @ 0x2df524, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_002df560; /* 0x2df560 */
extern int DAT_004474f4; /* 0x4474f4 */

extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_002df524(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [72];
  
  FUN_002be7fc(temp_v1,&LAB_002df560,param_1,param_1,param_2);
  temp_v0 = FUN_00263e48(temp_v1);
  *(unsigned int *)(DAT_004474f4 + 0x2b4) = temp_v0;
                    /* WARNING: Treating indirect jump as return */
  return;
}
