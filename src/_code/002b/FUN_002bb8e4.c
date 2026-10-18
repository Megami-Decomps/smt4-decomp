/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb8e4` (_code @ 0x2bb8e4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

extern int FUN_002b5c2c(void);
/* Supplied declaration required: FUN_002b5c40. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb8e4(unsigned int param_1,short *param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned char temp_v2 [4];
  int temp_v3;
  short *temp_v4;
  int temp_v5;
  
  psVar2 = param_2;
  FUN_002b5c40();
  if (psVar2 != (short *)0x0) {
    do {
      temp_v4 = param_2 + 1;
      temp_v0 = *param_2;
      param_2 = temp_v4;
    } while (temp_v0 != 0x3a);
    temp_v3 = 4;
    temp_v1 = FUN_002b5c2c();
    temp_v5 = (temp_v1 + 1) * 2;
    (*(romwright_code *)**(unsigned int **)psVar2)(psVar2,temp_v2,&temp_v3,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
