/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132218` (_code @ 0x132218, 0x82 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

extern unsigned char LAB_0012d0c5; /* 0x12d0c5 */
extern unsigned int DAT_005c4be8; /* 0x5c4be8 */

extern int *FUN_00124662(int, unsigned int);
/* Supplied declaration required: FUN_00124680. */
/* Supplied declaration required: FUN_001246b8. */
extern unsigned int FUN_002e3ef4(unsigned char *, int, unsigned char *);
/* Supplied declaration required: FUN_002e3f2c. */
/* Supplied declaration required: FUN_002e3f68. */


void FUN_00132218(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v3 = param_2 + 0x10;
  temp_v1 = temp_v3;
  temp_v6 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_00124680(temp_v3,param_3,param_4,param_5);
  if (temp_v1 != 0) {
    piVar3 = (int *)FUN_00124662(temp_v3,param_3);
    if (DAT_005c4be8 < *(unsigned int *)(*piVar3 + 0xc)) {
      temp_v3 = *(int *)(*(int *)(*piVar3 + 8) + DAT_005c4be8 * 4);
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 == 0) {
      FUN_001246b8(piVar3,&DAT_005c4be8,1,0x20,&LAB_0012d0c5);
    }
    temp_v0 = temp_v6;
    temp_v2 = FUN_002e3ef4(temp_v4,temp_v1,temp_v5);
    FUN_002e3f2c(temp_v0,temp_v2);
    FUN_002e3f68(temp_v4);
  }
  else {
    FUN_002e3f2c(temp_v6,param_6);
  }
  return;
}
