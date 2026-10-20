/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115010` (_code @ 0x115010, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00300d58(void);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_00115054; /* 0x115054 */
extern romwright_code *DAT_00594ad0; /* 0x594ad0 */

/* Supplied declaration required: FUN_00300d58. */
extern unsigned int FUN_00300d90(int, unsigned char *, int);


unsigned int FUN_00115010(int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  
  temp_v1 = 0;
  temp_v0 = *(int *)(param_1 + 4);
  temp_v2 = 0;
  temp_v3 = param_2;
  temp_v4 = param_3;
  piVar6 = param_4;
  FUN_00300d58();
  if (temp_v0 < 0) {
    temp_v1 = FUN_00300d90(param_1,&LAB_00115054,temp_v0);
  }
  else if (param_4 != (int *)0x0) {
    *param_4 = temp_v0;
  }
  (*DAT_00594ad0)(temp_v1,param_2,param_3,param_4,temp_v2,param_1,temp_v3,temp_v4,piVar6);
  return temp_v1;
}

} /* extern "C" */
