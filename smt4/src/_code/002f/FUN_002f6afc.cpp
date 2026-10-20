/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6afc` (_code @ 0x2f6afc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002470a8(unsigned int, int, unsigned int);
int libc_strcmp(int, unsigned char *);
int dataTable08Sub1GetRecord(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char LAB_002f6b44; /* 0x2f6b44 */

/* Supplied declaration required: FUN_002470a8. */
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


void FUN_002f6afc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  dataTable08Sub1GetRecord();
  if (param_2 != 0) {
    temp_v0 = param_2 + 0x50;
    libc_strcmp(temp_v0,&LAB_002f6b44);
    if (temp_v0 != 0) {
      FUN_002470a8(param_1,param_2 + 0x50,param_3);
      return;
    }
  }
  return;
}

} /* extern "C" */
