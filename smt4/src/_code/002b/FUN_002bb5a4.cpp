/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb5a4` (_code @ 0x2bb5a4, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5a5c(void);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int wstrlenU16(void);
/* Supplied declaration required: FUN_002b5a5c. */


void FUN_002bb5a4(unsigned int *param_1,short *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *temp_v5;
  int temp_v6;
  
  psVar2 = param_2;
  FUN_002b5a5c();
  if (psVar2 != (short *)0x0) {
    do {
      temp_v5 = param_2 + 1;
      temp_v0 = *param_2;
      param_2 = temp_v5;
    } while (temp_v0 != 0x3a);
    temp_v4 = 4;
    temp_v1 = wstrlenU16();
    temp_v6 = (temp_v1 + 1) * 2;
    temp_v2 = (*(romwright_code *)**(unsigned int **)psVar2)(psVar2,&temp_v3,&temp_v4,param_3);
    if ((temp_v2 & 0x80000000) == 0) {
      *param_1 = temp_v3;
    }
  }
  return;
}

} /* extern "C" */
