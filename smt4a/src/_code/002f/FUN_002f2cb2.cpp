/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2cb2` (_code @ 0x2f2cb2, 0xde bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002e75fa(int);
int FUN_002eb588(unsigned char [8]);
int FUN_002f2da0(...);
int FUN_002f2dd8(int);
int FUN_002f2de4(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f2da0. */
extern int FUN_002f2dc2(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_002f2dd8. */
/* Supplied declaration required: FUN_002f2de4. */
extern int FUN_002f2dec(int *, int *);


void FUN_002f2cb2(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [2];
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [8];
  int *temp_v11;
  int iStack_1c;
  unsigned int temp_v12;
  
  temp_v11 = param_1;
  iStack_1c = param_2;
  temp_v12 = param_3;
  FUN_002eb588(temp_v10);
  temp_v8 = *(int *)(param_2 + 4);
  do {
    while( 1 ) {
      while( 1 ) {
        temp_v2 = FUN_002f2dec(&temp_v8,(int *)(param_2 + 0xc));
        temp_v1 = temp_v8;
        if (temp_v2 == 0) {
          return;
        }
        if (*(char *)(temp_v8 + 0x131) == '\0') break;
        temp_v4 = temp_v8;
        FUN_002f2da0(&temp_v3,param_2,&temp_v4);
        temp_v8 = temp_v3;
      }
      if (*(unsigned short *)(temp_v8 + 0x86) == temp_v12) break;
      FUN_002f2de4(&temp_v8);
    }
    temp_v0 = *(char *)(temp_v8 + 0x138);
    if (temp_v0 != '\0') {
      if ((temp_v0 == '\x01') || (temp_v0 == '\x02')) {
        temp_v6 = *(unsigned int *)(temp_v8 + 0x140);
        temp_v7 = *(unsigned int *)(temp_v8 + 0x144);
        temp_v2 = FUN_002f2dc2((unsigned int *)&temp_v6,temp_v10);
        if (temp_v2 != 0) {
          *(unsigned char *)(temp_v1 + 0x138) = 3;
        }
        FUN_002f2de4(&temp_v8);
        continue;
      }
      if (temp_v0 == '\x03') {
        temp_v8 = *(int *)(param_2 + 0xc);
      }
      continue;
    }
    temp_v6 = *(unsigned int *)(temp_v8 + 0x140);
    temp_v7 = *(unsigned int *)(temp_v8 + 0x144);
    temp_v2 = FUN_002f2dc2((unsigned int *)&temp_v6,temp_v10);
    if (temp_v2 == 0) {
      FUN_002f2de4(&temp_v8);
      continue;
    }
    *(unsigned char *)(temp_v1 + 0x138) = 2;
    *(unsigned char *)(temp_v1 + 0x130) = 1;
    FUN_002f2dd8(temp_v1);
    FUN_002e75fa(temp_v1);
    temp_v5[0] = temp_v8;
    FUN_002f2da0(&temp_v9,param_2,temp_v5);
    temp_v8 = temp_v9;
    (**(romwright_code **)(*temp_v11 + 0x10))(temp_v11,temp_v1,0);
    FUN_002e7232(temp_v1);
  } while( 1 );
}

} /* extern "C" */
