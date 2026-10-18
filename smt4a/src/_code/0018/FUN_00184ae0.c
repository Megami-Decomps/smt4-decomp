/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184ae0` (_code @ 0x184ae0, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: FUN_00100348. */


int FUN_00184ae0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char temp_v1 [32];
  int uStack_8;
  unsigned int uStack_4;
  
  puVar1 = temp_v1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00100348(temp_v1,0x20,param_2,&uStack_8);
  switch(param_1) {
  case 0:
    temp_v0 = 7;
    break;
  case 1:
  case 2:
  case 3:
  case 9:
  case 10:
  case 0xb:
    temp_v0 = 4;
    break;
  case 4:
  case 5:
    temp_v0 = 0xd;
    break;
  case 6:
    temp_v0 = 8;
    break;
  case 7:
  case 8:
    temp_v0 = 10;
    break;
  default:
    temp_v0 = 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return temp_v0 * (int)puVar1;
}
