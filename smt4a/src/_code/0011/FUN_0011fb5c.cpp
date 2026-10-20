/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011fb5c` (_code @ 0x11fb5c, 0x142 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e75fa(...);
int FUN_002e9318(...);
int FUN_002e9c0c(...);
int constructObj0055affc(...);
int FUN_002ea3c0(...);
int FUN_002ea3d0(...);
int FUN_002ea974(...);
int FUN_002ea9dc(...);
int FUN_002ec8f8(...);
int FUN_002ee5b8(...);
int FUN_002f42be(...);
int FUN_002f7cb0(...);
int FUN_002f7cba(...);
int FUN_003056a0(...);
int FUN_003056e4(...);
int ownedPtrReset(...);
int FUN_00310784(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
} param_1_stack;

extern unsigned char LAB_0011fca0; /* 0x11fca0 */
extern unsigned char DAT_00594ec8; /* 0x594ec8 */

/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(int *, unsigned int *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: constructObj0055affc. */
/* Supplied declaration required: FUN_002ea3c0. */
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002ec8f8. */
extern unsigned int FUN_002ee568(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ee5b8. */
/* Supplied declaration required: FUN_002f42be. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
extern int FUN_002fe22a(int, unsigned int);
extern int FUN_003054ce(unsigned int);
extern unsigned long long FUN_00305696(unsigned int, int *);
/* Supplied declaration required: FUN_003056a0. */
/* Supplied declaration required: FUN_003056e4. */
/* Supplied declaration required: ownedPtrReset. */
/* Supplied declaration required: FUN_00310784. */


void FUN_0011fb5c(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned long long temp_v2;
  int temp_v3;
  int temp_v4 [4];
  unsigned int temp_v5;
  unsigned char temp_v6 [104];
  unsigned char temp_v7 [104];
  unsigned char temp_v8 [12];
  
  temp_v0 = FUN_003054ce(*(unsigned int *)(param_1 + 400));
  if (*(int *)(temp_v0 + 0x1c) != 2) {
    constructObj0055affc(temp_v8);
    FUN_002ea974(temp_v6);
    temp_v1 = FUN_002ee568(temp_v7,&LAB_0011fca0);
    temp_v0 = FUN_002fe22a(param_1 + 0x208,temp_v1);
    FUN_002ea9dc(temp_v7);
    if (temp_v0 != 0) {
      FUN_002ee5b8(temp_v6,param_1 + 0x208);
    }
    else {
      temp_v4[1] = 2;
      temp_v4[2] = 2;
      temp_v4[0] = 1;
      temp_v3 = 10;
      FUN_002f42be(temp_v8,"prudps:/address=%s;port=%d;stream=%d;sid=%d;PID=%d;CID=1;type=%d",
                   *(unsigned int *)(param_1 + 0x74),*(unsigned short *)(param_1 + 0x78) + 1);
      FUN_003056e4(temp_v6,temp_v8);
    }
    temp_v1 = *(unsigned int *)(param_1 + 0x30c);
    *(unsigned int *)(param_1 + 0x30c) = 0;
    ownedPtrReset(&DAT_00594ec8,temp_v1);
    FUN_002e9c0c();
    temp_v4[3] = *(unsigned int *)(param_1 + 800);
    temp_v5 = *(unsigned int *)(param_1 + 0x324);
    piVar3 = temp_v4 + 3;
    FUN_002ec8f8(piVar3);
    temp_v2 = FUN_00305696(*(unsigned int *)(param_1 + 400),piVar3);
    temp_v3 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
    temp_v0 = *(int *)((int)temp_v2 + 0x18);
    temp_v4[0] = param_1 + 0x310;
    FUN_003056a0(temp_v0,param_1 + 0x80,temp_v6,param_1 + 0x318);
    if (temp_v0 != 0) {
      FUN_002e75fa(*(unsigned int *)(param_1 + 0x310));
      FUN_002f7cb0(param_1);
      temp_v0 = FUN_002e760a(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,0x11fad9,0,&LAB_0011fca0);
      }
      FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
    }
    else {
      temp_v3 = 0x8001000d;
      temp_v1 = FUN_002e7908(temp_v4,(unsigned int *)&temp_v3);
      FUN_00310784(param_1,temp_v1);
    }
    FUN_002ea9dc(temp_v6);
    FUN_002e9318(temp_v8);
  }
  else {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x10) = 1;
    temp_v1 = FUN_002ea3c0(&temp_v3,0x11f6d5,0,&LAB_0011fca0);
    FUN_002ea3d0(param_1,temp_v1);
  }
  return;
}

} /* extern "C" */
