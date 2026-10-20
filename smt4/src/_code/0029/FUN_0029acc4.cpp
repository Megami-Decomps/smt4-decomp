/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029acc4` (_code @ 0x29acc4, 0x150 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae9ec(...);
int dataTable1bOr1cGetRecord(void);
int drawSetColorFromRGBA8(...);
int FUN_002bed3c(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern int idIsAtLeast350(int);
extern int FUN_00298e20(void);
extern int FUN_00298f88(int);
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */


void FUN_0029acc4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00298e20();
  temp_v1 = FUN_00298f88(param_1);
  if (temp_v1 != 0) {
    if (temp_v0 == 0) {
      temp_v2 = 0x408;
      FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
      FUN_002bed3c();
      return;
    }
    temp_v3 = 0x40f;
  }
  else {
    temp_v1 = idIsAtLeast350(param_1);
    temp_v3 = 0x41b;
    temp_v2 = 0x41a;
    if (temp_v1 != 0) goto joined_r0x0029ad28;
    dataTable1bOr1cGetRecord();
    switch(*(unsigned char *)(param_1 + 6)) {
    case 0:
      if (temp_v0 == 0) {
        temp_v2 = 0x403;
        FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bed3c();
        return;
      }
      temp_v3 = 0x40a;
      break;
    case 1:
    case 6:
      if (temp_v0 == 0) {
        temp_v2 = 0x404;
        FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bed3c();
        return;
      }
      temp_v3 = 0x40b;
      break;
    case 2:
    case 3:
      if (temp_v0 == 0) {
        temp_v2 = 0x406;
        FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bed3c();
        return;
      }
      temp_v3 = 0x40d;
      break;
    case 4:
    case 5:
      if (temp_v0 == 0) {
        temp_v2 = 0x405;
        FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bed3c();
        return;
      }
      temp_v3 = 0x40c;
      break;
    default:
      temp_v3 = 0;
      temp_v2 = 0;
      goto joined_r0x0029ad28;
    case 8:
    case 9:
joined_r0x0029ad28:
      if (temp_v0 == 0) {
        FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
        FUN_002bed3c();
        return;
      }
      break;
    case 10:
      return;
    }
  }
  temp_v2 = temp_v3;
  drawSetColorFromRGBA8(0xf49800ff);
  FUN_002ae9ec(2,0x13,temp_v2,param_2,param_3,param_4);
  FUN_002bed3c();
  return;
}

} /* extern "C" */
