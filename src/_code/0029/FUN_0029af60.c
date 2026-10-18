/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029af60` (_code @ 0x29af60, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int FUN_00299084(int);
extern int FUN_002990bc(void);
extern int FUN_00299224(int);
/* Supplied declaration required: FUN_002aec80. */
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002bef14. */


void FUN_0029af60(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002990bc();
  temp_v1 = FUN_00299224(param_1);
  if (temp_v1 != 0) {
    if (temp_v0 == 0) {
      temp_v2 = 0x408;
      FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
      FUN_002bef14();
      return;
    }
    temp_v3 = 0x40f;
  }
  else {
    temp_v1 = FUN_00299084(param_1);
    temp_v3 = 0x41b;
    temp_v2 = 0x41a;
    if (temp_v1 != 0) goto joined_r0x0029afc4;
    FUN_002b6700();
    switch(*(unsigned char *)(param_1 + 6)) {
    case 0:
      if (temp_v0 == 0) {
        temp_v2 = 0x403;
        FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bef14();
        return;
      }
      temp_v3 = 0x40a;
      break;
    case 1:
    case 6:
      if (temp_v0 == 0) {
        temp_v2 = 0x404;
        FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bef14();
        return;
      }
      temp_v3 = 0x40b;
      break;
    case 2:
    case 3:
      if (temp_v0 == 0) {
        temp_v2 = 0x406;
        FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bef14();
        return;
      }
      temp_v3 = 0x40d;
      break;
    case 4:
    case 5:
      if (temp_v0 == 0) {
        temp_v2 = 0x405;
        FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bef14();
        return;
      }
      temp_v3 = 0x40c;
      break;
    default:
      temp_v3 = 0;
      temp_v2 = 0;
      goto joined_r0x0029afc4;
    case 8:
    case 9:
joined_r0x0029afc4:
      if (temp_v0 == 0) {
        FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bef14();
        return;
      }
      break;
    case 10:
      return;
    }
  }
  temp_v2 = temp_v3;
  FUN_002be4dc(0xf49800ff);
  FUN_002aec80(2,0x13,temp_v2,param_2,param_3,param_4);
  FUN_002bef14();
  return;
}
