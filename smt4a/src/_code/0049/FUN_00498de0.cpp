/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498de0` (_code @ 0x498de0, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192718(unsigned int);
int FUN_002f0384(int);
int FUN_00372100(unsigned short *, int);
int FUN_0038b5fc(int, unsigned int);
int FUN_003df7c4(unsigned short *);
int rt_memcpy_w(unsigned short *, unsigned int, int);

/* stack frame of param_1: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned short sp6E; /* 0x6e: local_6e */
    unsigned short sp70; /* 0x70: local_70 */
    unsigned short sp72; /* 0x72: local_72 */
    unsigned short sp74; /* 0x74: local_74 */
    unsigned short sp76; /* 0x76: local_76 */
    unsigned short sp78; /* 0x78: local_78 */
} param_1_stack;

extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00192718. */
/* Supplied declaration required: FUN_002f0384. */
extern int objBStateAllowsAction(void);
/* Supplied declaration required: FUN_00372100. */
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: FUN_003df7c4. */
extern int flaggedValueHolderGetTotal(int);
extern unsigned int FUN_004d02e0(int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00498de0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  
  temp_v1 = *(int *)(param_1 + 0xb40);
  temp_v2 = flaggedValueHolderGetTotal(param_1 + temp_v1 * 0x74 + 0xb60);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xf74 + temp_v2 * 4);
  temp_v5 = (unsigned int)temp_v0;
  temp_v3 = FUN_004d02e0(param_1 + *(int *)(param_1 + 0xb40) * 0x74 + 0xb60);
  temp_v6 = temp_v3 == 0;
  if (temp_v6) {
    temp_v3 = *(unsigned int *)(param_1 + 0x16034);
  }
  if (!(temp_v6 && temp_v3 == temp_v5)) {
    temp_v1 = FUN_00192718(temp_v5);
    if (((temp_v1 == 4) || (temp_v1 = FUN_00192718(temp_v5), temp_v1 == 5)) ||
       (temp_v1 = FUN_00192718(temp_v5), temp_v1 == 6)) {
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x22) = 0;
      *(unsigned char *)(param_1 + 0x23) = 0;
    }
    *(unsigned int *)(param_1 + 0x16034) = temp_v5;
  }
  else if (*(char *)(param_1 + 0x22) != '\0') {
    temp_v1 = objBStateAllowsAction();
    if (temp_v1 != 0) {
      FUN_002f0384(1);
      *(unsigned char *)(param_1 + 0x23) = 1;
    }
  }
  else {
    if (temp_v5 != 0) {
      temp_v1 = FUN_00192718(temp_v5);
      if (temp_v1 == 4) {
        FUN_0038b5fc(0,temp_v5);
      }
      temp_v1 = FUN_00192718(temp_v5);
      if (temp_v1 == 5) {
        FUN_0038b5fc(1,temp_v5);
      }
      temp_v1 = FUN_00192718(temp_v5);
      if (temp_v1 == 6) {
        FUN_0038b5fc(2,temp_v5);
      }
    }
    *(unsigned char *)(param_1 + 0x22) = 1;
  }
  temp_v6 = *(int *)(param_1 + 0x16004) != 0;
  temp_v3 = 0;
  if (temp_v6) {
    temp_v3 = *(unsigned int *)(param_1 + 0x16008);
  }
  if (temp_v6 && temp_v3 != temp_v5) {
    *(unsigned int *)(param_1 + 0x16008) = temp_v5;
    temp_v4 = gameGetPlayerData();
    rt_memcpy_w(&temp_v7,temp_v4,100);
    if (temp_v5 != 0) {
      temp_v4 = FUN_00192718(temp_v5);
      switch(temp_v4) {
      case 2:
        temp_v7 = temp_v0;
        break;
      case 3:
        temp_v8 = temp_v0;
        break;
      case 4:
        temp_v10 = temp_v0;
        break;
      case 5:
        temp_v11 = temp_v0;
        break;
      case 6:
        temp_v12 = temp_v0;
        break;
      case 7:
        temp_v13 = temp_v0;
        break;
      case 8:
        temp_v9 = temp_v0;
      }
    }
    FUN_003df7c4(&temp_v7);
    FUN_00372100(&temp_v7,0);
  }
  return;
}

} /* extern "C" */
