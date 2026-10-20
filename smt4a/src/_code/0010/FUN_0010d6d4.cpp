/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d6d4` (_code @ 0x10d6d4, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(unsigned char [32], int, int, unsigned int);
int streamReaderReadU32(unsigned char [8], unsigned char [8]);
int FUN_002e7908(unsigned int *, int *);
int FUN_002e9ff4(int *);
int strDestroy(unsigned char [32]);
int FUN_002ecad4(unsigned int *, unsigned int, int);
int FUN_002f4e14(unsigned char [8], int *);
int FUN_002f4e90(unsigned char [8], unsigned char [32]);
int FUN_002f4f00(unsigned char [8]);

typedef int romwright_code(...);
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern unsigned char DAT_0055af54; /* 0x55af54 */

/* Supplied declaration required: strAssign. */
/* Supplied declaration required: streamReaderReadU32. */
/* Supplied declaration required: FUN_002e7908. */
extern unsigned int *sharedRefInit(unsigned char *, int, int *);
/* Supplied declaration required: FUN_002e9ff4. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ecad4. */
/* Supplied declaration required: FUN_002f4e14. */
extern int FUN_002f4e70(unsigned char *);
extern int refIsNonNegative(unsigned int *);
/* Supplied declaration required: FUN_002f4e90. */
/* Supplied declaration required: FUN_002f4f00. */


void FUN_0010d6d4(unsigned int *param_1,int param_2,int *param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [8];
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int temp_v8;
  unsigned char temp_v9 [32];
  unsigned char temp_v10 [8];
  
  temp_v2 = param_3[1] - *param_3;
  if (temp_v2 < 5) {
    temp_v6 = 0x80050001;
    FUN_002e7908(param_1,&temp_v6);
  }
  else {
    puVar1 = (unsigned int *)sharedRefInit(temp_v9,param_3[1],param_3 + 2);
    *puVar1 = (unsigned int)&DAT_0055af54;
    FUN_002ecad4(puVar1,temp_v2,0);
    strAssign(temp_v9,*param_3,param_3[1] - *param_3,0xffffffff);
    FUN_002f4e90(temp_v3,temp_v9);
    FUN_002e9ff4(&temp_v7);
    FUN_002f4e14(temp_v3,&temp_v7);
    temp_v0 = FUN_002f4e70(temp_v3);
    if ((temp_v0 == 0) || (*(int *)(temp_v0 + 0x44) != *(int *)(param_2 + 0x6c))) {
      if (temp_v5 - 4 <= *(unsigned int *)(temp_v4 + 0x10)) {
        temp_v5 = temp_v5 - 4;
      }
      streamReaderReadU32(temp_v3,temp_v10);
      temp_v8 = 0x80050001;
      FUN_002e7908(param_1,&temp_v8);
    }
    else {
      temp_v1 = refIsNonNegative((unsigned int *)&temp_v7);
      if (temp_v1 != 0) {
        (**(romwright_code **)(**(int **)(param_2 + 0x9c) + 0x50))(*(int **)(param_2 + 0x9c),temp_v3,temp_v0)
        ;
      }
      *param_1 = temp_v7;
      param_1[1] = uStack_48;
      param_1[2] = uStack_44;
    }
    FUN_002f4f00(temp_v3);
    strDestroy(temp_v9);
  }
  return;
}

} /* extern "C" */
