/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb084` (_code @ 0x2fb084, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_00111438. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002ea658(void);


void FUN_002fb084(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = param_2;
  temp_v3 = param_4;
  temp_v0 = FUN_002e760a(0xc);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ea658();
  }
  FUN_00111438(param_1,temp_v1,param_2,param_3,param_4,param_5,param_6,param_1,temp_v2,param_3,temp_v3);
  return;
}
