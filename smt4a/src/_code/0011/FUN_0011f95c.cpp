/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f95c` (_code @ 0x11f95c, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefAddRef(unsigned int);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(...);
int onlineUrlDestroy(...);
int FUN_002ec8f8(unsigned int *);
int FUN_002ee568(unsigned char [104], unsigned int);
int wideBufferAppend(...);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(...);
int FUN_0030568e(unsigned int, int);
int FUN_003056a0(int, int, unsigned char [104], int);
int FUN_00310784(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp2A4; /* 0x2a4: local_2a4 */
    unsigned int sp2AC; /* 0x2ac: local_2ac */
    unsigned int sp2B0; /* 0x2b0: local_2b0 */
} param_1_stack;

extern unsigned char LAB_0011f835; /* 0x11f835 */
extern unsigned char LAB_0011fa50; /* 0x11fa50 */
extern unsigned char LAB_0011fa70; /* 0x11fa70 */
extern unsigned char LAB_0011fa7c; /* 0x11fa7c */
extern unsigned char LAB_0011fa80; /* 0x11fa80 */
extern unsigned char LAB_0011fa94; /* 0x11fa94 */
extern unsigned char LAB_0011faa0; /* 0x11faa0 */

/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: onlineUrlDestroy. */
/* Supplied declaration required: FUN_002ec8f8. */
/* Supplied declaration required: FUN_002ee568. */
/* Supplied declaration required: wideBufferAppend. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
extern unsigned int wideBufferAppendHolderValue(unsigned int, int);
/* Supplied declaration required: FUN_0030568e. */
extern unsigned long long ownerChildValue(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_003056a0. */
/* Supplied declaration required: FUN_00310784. */


void FUN_0011f95c(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [104];
  unsigned char temp_v10 [16];
  
  FUN_002ea2e8(temp_v5);
  temp_v0 = wideBufferAppend(temp_v5,&LAB_0011fa50);
  temp_v0 = wideBufferAppendHolderValue(temp_v0,param_1 + 0x70);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_0011fa70);
  temp_v0 = FUN_0030568e(temp_v0,*(unsigned short *)(param_1 + 0x78));
  temp_v0 = wideBufferAppend(temp_v0,&LAB_0011fa80);
  temp_v0 = FUN_0030568e(temp_v0,10);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_0011fa94);
  temp_v0 = FUN_0030568e(temp_v0,1);
  temp_v0 = wideBufferAppend(temp_v0,&LAB_0011faa0);
  FUN_0030568e(temp_v0,2);
  FUN_002ee568(temp_v9,temp_v6);
  temp_v7 = *(unsigned int *)(param_1 + 800);
  temp_v8 = *(unsigned int *)(param_1 + 0x324);
  puVar2 = (unsigned int *)&temp_v7;
  FUN_002ec8f8(puVar2);
  temp_v2 = ownerChildValue(*(unsigned int *)(param_1 + 400),puVar2);
  temp_v3 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
  temp_v1 = *(int *)((int)temp_v2 + 0x18);
  temp_v4 = param_1 + 0x310;
  FUN_003056a0(temp_v1,param_1 + 0x80,temp_v9,param_1 + 0x314);
  if (temp_v1 != 0) {
    sharedRefAddRef(*(unsigned int *)(param_1 + 0x310));
    onlineJobSetStateWaiting(param_1);
    temp_v1 = _Znwj(0x10);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_002ea3c0(temp_v1,&LAB_0011f835,0,&LAB_0011fa7c);
    }
    FUN_002f7cba(param_1,param_1 + 0x80,temp_v0);
  }
  else {
    temp_v3 = 0x8001000d;
    temp_v0 = _ZN12OnlineResultC1ERKj(temp_v10,(unsigned int *)&temp_v3);
    FUN_00310784(param_1,temp_v0);
  }
  onlineUrlDestroy(temp_v9);
  FUN_002ea3a8(temp_v5);
  return;
}

} /* extern "C" */
