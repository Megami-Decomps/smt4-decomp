/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021bb08` (_code @ 0x21bb08, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_0024f7a8(int);
/* Supplied declaration required: FUN_0024f7e8. */
/* Supplied declaration required: FUN_002899c4. */
extern int FUN_002baaa4(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002c0ba8(void);
extern int FUN_002c2b1c(void);


void FUN_0021bb08(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s); irregular input(s): in_lr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int unaff_r4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_lr;
  
  temp_v4 = 0;
  temp_v0 = param_1;
  FUN_0024f7e8();
  if (0 < temp_v0) {
    while( 1 ) {
      temp_v0 = FUN_0024f7a8(temp_v4);
      temp_v1 = (int)*(short *)(temp_v0 + 0x20);
      if (temp_v1 == -1) break;
      if (temp_v1 == param_1) {
        if ((*(short *)(temp_v0 + 0x22) != 0) && (temp_v4 = FUN_002c0ba8(), temp_v4 == 0)) {
          FUN_002899c4((int)*(short *)(temp_v0 + 0x22),1);
        }
        break;
      }
      temp_v4 = temp_v4 + 1;
      FUN_0024f7e8();
      if (temp_v1 <= temp_v4) break;
    }
  }
  temp_v0 = FUN_002c2b1c();
  temp_v3 = 0x223;
  switch(*(unsigned char *)(temp_v0 + 3)) {
  case 6:
  case 7:
    FUN_002899c4(0x223,1);
    temp_v2 = 0;
    temp_v3 = 0x224;
    break;
  case 8:
  case 9:
  case 10:
    FUN_002899c4(0x224,1);
    temp_v2 = 0;
    break;
  default:
    if ((param_1 - 0x19U >= 6) && (param_1 != 0x66)) {
      FUN_002899c4(0x223,0,1);
    }
    else {
      FUN_002899c4(0x223,1);
    }
    temp_v3 = 0x465;
    if (param_1 - 0x1fU >= 5) {
      if (param_1 != 0x67) {
        FUN_002899c4(0x224,0,1);
        goto LAB_0021bc54;
      }
      FUN_002899c4(0x224,1,1);
LAB_0021bca4:
      FUN_002899c4(0x295,0,1);
      if (param_1 == 0x16) {
        temp_v2 = 1;
        break;
      }
    }
    else {
      FUN_002899c4(0x224,1);
LAB_0021bc54:
      if (param_1 != 0x15) goto LAB_0021bca4;
      FUN_002899c4(0x295,1);
    }
    temp_v2 = 0;
  }
  FUN_002899c4(temp_v3,temp_v2);
  temp_v0 = FUN_002baaa4(param_1,param_2,1,param_4,unaff_r4,in_lr);
  *(unsigned char *)(temp_v0 + 3) = (*(unsigned char *)(temp_v0 + 3) & 0xbf) | 0x40;
  return;
}
