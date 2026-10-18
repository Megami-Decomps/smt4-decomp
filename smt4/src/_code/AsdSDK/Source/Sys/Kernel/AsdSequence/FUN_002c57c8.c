/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c57c8` (_code @ 0x2c57c8, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0044e0f8; /* 0x44e0f8 */
extern unsigned char DAT_0044e0f9; /* 0x44e0f9 */
extern unsigned char DAT_0044e0fa; /* 0x44e0fa */
extern int DAT_004e3f4c; /* 0x4e3f4c */
extern int DAT_004e3f58; /* 0x4e3f58 */
extern unsigned int DAT_004e3f5c; /* 0x4e3f5c */
extern unsigned int DAT_004e3f60; /* 0x4e3f60 */

/* Supplied declaration required: FUN_001082a0. */
/* Supplied declaration required: FUN_00109670. */
/* Supplied declaration required: FUN_002c34e8. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: rt_memcpy. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c57c8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int unaff_r4;
  int unaff_r7;
  
  if (*(int *)(DAT_004e3f4c + param_1 * 0xc) != 0) {
    DAT_004e3f58 = param_1;
    if (param_2 != 0) {
      temp_v0 = 0x100;
      FUN_002c498c(0x100,0x100,0,param_3,1);
      DAT_004e3f5c = temp_v0;
      DAT_004e3f60 = param_3;
      rt_memcpy();
    }
    else {
      DAT_004e3f5c = 0;
      DAT_004e3f60 = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_r7 + 6) = (short)param_1;
  FUN_001082a0(DAT_0044e0f8,0,param_4,unaff_r4);
  FUN_002c34e8(DAT_0044e0f9);
  FUN_00109670(DAT_0044e0fa);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
