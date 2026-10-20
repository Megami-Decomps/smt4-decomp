/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4ecc` (_code @ 0x2f4ecc, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103822(unsigned int, unsigned short *);
int FUN_002e9a64(unsigned int, unsigned int *, unsigned short *, unsigned int, unsigned short *);

/* stack frame of param_4: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00103822. */
/* Supplied declaration required: FUN_002e9a64. */


void FUN_002f4ecc(unsigned int param_1,unsigned char *param_2,unsigned short *param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_4;
  FUN_002e9a64(param_1,&temp_v0,param_3,param_4,param_3);
  *param_2 = (unsigned char)temp_v0 >> 7;
  *param_3 = (short)(temp_v0 & 0x7f);
  if ((temp_v0 & 0x7f) == 0x7f) {
    FUN_00103822(param_1,param_3);
  }
  return;
}

} /* extern "C" */
