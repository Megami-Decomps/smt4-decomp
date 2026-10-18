/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a52c` (_code @ 0x35a52c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern signed char DAT_0044e459; /* 0x44e459 */
extern unsigned short DAT_0044e45c; /* 0x44e45c */
extern unsigned short DAT_0044e45e; /* 0x44e45e */
extern int DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e470; /* 0x44e470 */
extern unsigned int DAT_0044e474; /* 0x44e474 */

/* Supplied declaration required: FUN_002b5bcc. */


int FUN_0035a52c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_0044e470 = param_1;
  DAT_0044e474 = param_2;
  DAT_0044e45c = (unsigned short)param_3;
  DAT_0044e45e = (unsigned short)param_4;
  if ((DAT_0044e460 != 0) && (DAT_0044e459 == '\0')) {
    temp_v0 = DAT_0044e460;
    FUN_002b5bcc(DAT_0044e460,param_1,param_2,param_3,param_4,&DAT_0044e459);
    return temp_v0;
  }
  return -0x375f5804;
}
