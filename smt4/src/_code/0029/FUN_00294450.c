/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294450` (_code @ 0x294450, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern unsigned char LAB_00294550; /* 0x294550 */
extern unsigned char LAB_0029456c; /* 0x29456c */
extern unsigned char LAB_00294588; /* 0x294588 */

extern unsigned int FUN_0023cef0(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_002b45e8. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */


void FUN_00294450(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [64];
  
  temp_v0 = FUN_002b63ac();
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 10);
        FUN_002b45e8();
        temp_v2 = FUN_0023cef0(param_1,2,*(unsigned short *)(temp_v1 + 0x70),*(unsigned short *)(temp_v1 + 0x72),0
                            );
        FUN_002be624(temp_v3,&LAB_00294588,*(unsigned short *)(temp_v1 + 0x70),
                     *(unsigned short *)(temp_v1 + 0x72),temp_v2);
      }
    }
    else {
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 8);
      FUN_002b45e8();
      FUN_002be624(temp_v3,&LAB_0029456c,*(unsigned short *)(temp_v1 + 0x70),
                   *(unsigned short *)(temp_v1 + 0x72));
    }
  }
  else {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 6);
    FUN_002b45e8();
    temp_v2 = FUN_0023cef0(param_1,0,*(unsigned short *)(temp_v1 + 0x70),*(unsigned short *)(temp_v1 + 0x72),0);
    FUN_002be624(temp_v3,&LAB_00294550,*(unsigned short *)(temp_v1 + 0x70),
                 *(unsigned short *)(temp_v1 + 0x72),temp_v2);
  }
  FUN_0023f2e4(param_1,param_2,temp_v3,param_3);
  return;
}
