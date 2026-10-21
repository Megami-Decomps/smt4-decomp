/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021bc04` (_code @ 0x21bc04, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable2eSub2GetCount(void);
int gameFlagSetValue(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int dataTable2eSub2GetRecord(int);
/* Supplied declaration required: dataTable2eSub2GetCount. */
/* Supplied declaration required: gameFlagSetValue. */
extern int gameDataGetTableEntry(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern int gameFlagIsSet(void);
extern int gameGetMapBlock(void);


void FUN_0021bc04(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

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
  dataTable2eSub2GetCount();
  if (0 < temp_v0) {
    while( 1 ) {
      temp_v0 = dataTable2eSub2GetRecord(temp_v4);
      temp_v1 = (int)*(short *)(temp_v0 + 0x20);
      if (temp_v1 == -1) break;
      if (temp_v1 == param_1) {
        if ((*(short *)(temp_v0 + 0x22) != 0) && (temp_v4 = gameFlagIsSet(), temp_v4 == 0)) {
          gameFlagSetValue((int)*(short *)(temp_v0 + 0x22),1);
        }
        break;
      }
      temp_v4 = temp_v4 + 1;
      dataTable2eSub2GetCount();
      if (temp_v1 <= temp_v4) break;
    }
  }
  temp_v0 = gameGetMapBlock();
  temp_v3 = 0x223;
  switch(*(unsigned char *)(temp_v0 + 3)) {
  case 6:
  case 7:
    gameFlagSetValue(0x223,1);
    temp_v2 = 0;
    temp_v3 = 0x224;
    break;
  case 8:
  case 9:
  case 10:
    gameFlagSetValue(0x224,1);
    temp_v2 = 0;
    break;
  default:
    if ((param_1 - 0x19U >= 6) && (param_1 != 0x66)) {
      gameFlagSetValue(0x223,0,1);
    }
    else {
      gameFlagSetValue(0x223,1);
    }
    temp_v3 = 0x465;
    if (param_1 - 0x1fU >= 5) {
      if (param_1 != 0x67) {
        gameFlagSetValue(0x224,0,1);
        goto LAB_0021bd50;
      }
      gameFlagSetValue(0x224,1,1);
LAB_0021bda0:
      gameFlagSetValue(0x295,0,1);
      if (param_1 == 0x16) {
        temp_v2 = 1;
        break;
      }
    }
    else {
      gameFlagSetValue(0x224,1);
LAB_0021bd50:
      if (param_1 != 0x15) goto LAB_0021bda0;
      gameFlagSetValue(0x295,1);
    }
    temp_v2 = 0;
  }
  gameFlagSetValue(temp_v3,temp_v2);
  temp_v0 = gameDataGetTableEntry(param_1,param_2,1,param_4,unaff_r4,in_lr);
  *(unsigned char *)(temp_v0 + 3) = (*(unsigned char *)(temp_v0 + 3) & 0xbf) | 0x40;
  return;
}

} /* extern "C" */
