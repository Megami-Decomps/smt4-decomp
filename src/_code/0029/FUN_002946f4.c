/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002946f4` (_code @ 0x2946f4, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern unsigned char LAB_002947f4; /* 0x2947f4 */
extern unsigned char LAB_00294810; /* 0x294810 */
extern unsigned char LAB_0029482c; /* 0x29482c */

extern unsigned int FUN_0023d04c(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);
/* Supplied declaration required: FUN_0023f440. */
extern int FUN_002b47cc(unsigned short);
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002be7fc. */


void FUN_002946f4(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [64];
  
  temp_v0 = FUN_002b66ec();
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        temp_v0 = FUN_002b47cc(*(unsigned short *)(temp_v0 + 10));
        temp_v1 = FUN_0023d04c(param_1,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0
                            );
        FUN_002be7fc(temp_v2,&LAB_0029482c,*(unsigned short *)(temp_v0 + 0x70),
                     *(unsigned short *)(temp_v0 + 0x72),temp_v1);
      }
    }
    else {
      temp_v0 = FUN_002b47cc(*(unsigned short *)(temp_v0 + 8));
      FUN_002be7fc(temp_v2,&LAB_00294810,*(unsigned short *)(temp_v0 + 0x70),
                   *(unsigned short *)(temp_v0 + 0x72));
    }
  }
  else {
    temp_v0 = FUN_002b47cc(*(unsigned short *)(temp_v0 + 6));
    temp_v1 = FUN_0023d04c(param_1,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
    FUN_002be7fc(temp_v2,&LAB_002947f4,*(unsigned short *)(temp_v0 + 0x70),
                 *(unsigned short *)(temp_v0 + 0x72),temp_v1);
  }
  FUN_0023f440(param_1,param_2,temp_v2,param_3);
  return;
}
