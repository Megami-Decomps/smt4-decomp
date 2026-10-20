/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f678c` (_code @ 0x2f678c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030323c(void);
int FUN_003032ec(unsigned char [8], int, unsigned int [2], unsigned char **);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned char DAT_00559144; /* 0x559144 */

/* Supplied declaration required: FUN_0030323c. */
/* Supplied declaration required: FUN_003032ec. */


void FUN_002f678c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0 [2];
  unsigned char *temp_v1;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char temp_v2 [8];
  
  param_1 = param_1 + 4;
  FUN_0030323c();
  temp_v1 = &DAT_00559144;
  temp_v0[0] = **(unsigned int **)(param_1 + 0x10);
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_003032ec(temp_v2,param_1,temp_v0,&temp_v1);
  return;
}

} /* extern "C" */
