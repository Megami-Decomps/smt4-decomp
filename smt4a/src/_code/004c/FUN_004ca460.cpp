/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ca460` (_code @ 0x4ca460, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_003e9cec(int, unsigned char [684], int, int);
int FUN_003eb314(int, unsigned char [684]);
int FUN_004a9c24(unsigned int, int, int, int);
int bitsAt60Clear(int, int);
int FUN_004ca63c(int, unsigned char [684], int, int, int);
int FUN_004fb43c(int, int, int, int, int, int, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp450; /* 0x450: local_450 */
    unsigned int sp454; /* 0x454: local_454 */
    unsigned int sp458; /* 0x458: local_458 */
} param_4_stack;

extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int btlGetMainState(void);
extern unsigned short FUN_0017760c(int);
/* Supplied declaration required: FUN_0019cac4. */
extern int FUN_001ab854(int);
extern int FUN_001ab888(void);
extern int FUN_003e83b4(int, int, unsigned int);
/* Supplied declaration required: FUN_003e9cec. */
/* Supplied declaration required: FUN_003eb314. */
/* Supplied declaration required: FUN_004a9c24. */
extern int bitsAt60Test(int, unsigned int);
/* Supplied declaration required: bitsAt60Clear. */
/* Supplied declaration required: FUN_004ca63c. */
/* Supplied declaration required: FUN_004fb43c. */


void FUN_004ca460(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [684];
  int iStack_38;
  int iStack_34;
  int temp_v8;
  int iStack_2c;
  
  iStack_38 = param_1;
  iStack_34 = param_2;
  temp_v8 = param_3;
  iStack_2c = param_4;
  temp_v1 = btlGetMainState();
  if (param_1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + param_2 * 8 + 0x2008) & 0xffff;
    FUN_0019cac4();
    if (temp_v2 == 0) {
      return;
    }
    FUN_003eb314(temp_v1,temp_v7);
  }
  else {
    temp_v3 = FUN_001ab888();
    param_2 = temp_v3 + param_2;
    temp_v4 = FUN_001ab854((int)*(char *)(param_2 + 0x1c88));
    temp_v5 = bitsAt60Test(temp_v4,1);
    if (temp_v5 != 0) {
      temp_v0 = FUN_0017760c(temp_v4);
      *(unsigned short *)(temp_v4 + 0x2a) = temp_v0;
      bitsAt60Clear(temp_v4,2);
    }
    FUN_003e9cec(temp_v1,temp_v7,temp_v4,0);
    if (-1 < *(char *)(param_2 + 0x1c88)) {
      temp_v4 = FUN_003e83b4(temp_v1,temp_v8,0);
      *(unsigned char *)(*(short *)(temp_v4 + 0x6e) + temp_v3 + 0x1c9f) = *(unsigned char *)(param_2 + 0x1c88)
      ;
      if (param_4 >= 1) {
        FUN_004fb43c(0,0,0x1000271,0,0,0,0);
      }
      FUN_004a9c24(DAT_0057a9c8,(int)*(short *)(temp_v4 + 0x6e),(int)*(char *)(param_2 + 0x1c88),
                   param_4 < 1);
    }
  }
  FUN_004ca63c(temp_v1,temp_v7,param_1,temp_v8,1);
  if (param_1 == 1) {
    temp_v1 = *(int *)(temp_v1 + 0x1ed4) + temp_v8 * 0x1d0;
    temp_v2 = *(unsigned int *)(temp_v1 + 0x50);
    if ((((temp_v2 & 1) != 0) && ((temp_v2 & 0x80) != 0)) && ((temp_v2 & 2) == 0)) {
      if (*(char *)(temp_v1 + 0xa0) == '\0') {
        temp_v6 = 5;
      }
      else {
        temp_v6 = 6;
      }
      *(unsigned int *)(temp_v1 + 0x48) = temp_v6;
      *(unsigned int *)(temp_v1 + 0x4c) = 0;
      *(unsigned int *)(temp_v1 + 0x58) = (*(unsigned int *)(temp_v1 + 0x58) & 0xfffffff9) | 1;
    }
  }
  return;
}

} /* extern "C" */
