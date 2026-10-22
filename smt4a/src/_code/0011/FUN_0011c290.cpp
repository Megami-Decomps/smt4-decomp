/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c290` (_code @ 0x11c290, 0x18e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00106f6c(...);
int FUN_0011053e(int *, int);
int FUN_0011055a(int *, int);
int FUN_00116594(void);
int FUN_001165c0(int);
int FUN_0011c0bc(int);
int FUN_00123306(...);
int _ZN9Obj55b28cC1EPv(char **, int);
int _ZN9Obj55b28cD1Ev(char **);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea3a8(...);
int wideBufferAppend(...);
int FUN_002f4db0(unsigned char [468], int, int, int);
int FUN_002f4e90(unsigned char [4], int);
int FUN_002f4ecc(unsigned char [4], char [4], unsigned short [2]);
int FUN_002f4f00(...);
int FUN_00303cd8(unsigned char [64]);
int FUN_003112ee(...);
int FUN_003112f6(int *, unsigned int);
int FUN_00311318(int *, int);

typedef int romwright_code(...);
/* stack frame of param_4: 9 slot(s), 25 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp240; /* 0x240: local_240 */
    unsigned int sp244; /* 0x244: local_244 */
    unsigned char sp248; /* 0x248: local_248 */
    unsigned char sp284; /* 0x284: local_284 */
    unsigned short sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp294; /* 0x294: local_294 */
    unsigned int sp298; /* 0x298: local_298 */
} param_4_stack;

extern unsigned char LAB_0011c440; /* 0x11c440 */
extern unsigned char LAB_0011c454; /* 0x11c454 */
extern unsigned char LAB_0011c464; /* 0x11c464 */
extern unsigned char LAB_0011c488; /* 0x11c488 */
extern unsigned char LAB_0011c494; /* 0x11c494 */
extern unsigned char LAB_0011c4a0; /* 0x11c4a0 */

/* Supplied declaration required: FUN_00106f6c. */
/* Supplied declaration required: FUN_0011053e. */
/* Supplied declaration required: FUN_0011055a. */
/* Supplied declaration required: FUN_00116594. */
/* Supplied declaration required: FUN_001165c0. */
/* Supplied declaration required: FUN_0011c0bc. */
/* Supplied declaration required: FUN_00123306. */
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea3a8. */
extern unsigned int FUN_002ee818(unsigned int, unsigned short);
extern int streamWriterFinish(unsigned char *);
/* Supplied declaration required: wideBufferAppend. */
/* Supplied declaration required: FUN_002f4db0. */
/* Supplied declaration required: FUN_002f4e90. */
/* Supplied declaration required: FUN_002f4ecc. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_003112ee. */
/* Supplied declaration required: FUN_003112f6. */
/* Supplied declaration required: FUN_00311318. */


void FUN_0011c290(int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 20 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short temp_v8 [2];
  unsigned char temp_v9 [4];
  char temp_v10;
  char temp_v11 [4];
  int *temp_v12;
  char temp_v13 [4];
  unsigned char temp_v14 [4];
  unsigned char temp_v15 [64];
  unsigned char temp_v16 [468];
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  int temp_v17;
  
  piStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  temp_v17 = param_4;
  FUN_002f4e90(temp_v9,param_4);
  FUN_002f4ecc(temp_v9,temp_v13,temp_v8);
  temp_v4 = *(unsigned int *)(temp_v17 + 0x10);
  piVar1 = param_1 + 1;
  FUN_00311318(piVar1,temp_v8[0]);
  FUN_003112f6(piVar1 + 1,temp_v4);
  if (temp_v13[0] != '\x01') {
    temp_v0 = onlineContextGetInstance();
    _ZN9Obj55b28cC1EPv(&temp_v5,temp_v0 + 0x58);
    (**(romwright_code **)(*param_1 + 0x10))(param_1,temp_v8[0],temp_v9,param_3);
    _ZN9Obj55b28cD1Ev(&temp_v5);
  }
  else {
    temp_v12 = param_1 + 0xb;
    FUN_0011c0bc(param_2);
    FUN_0011055a(temp_v12,param_2);
    FUN_00303cd8(temp_v15);
    temp_v11[0] = '\0';
    FUN_00116594();
    temp_v5 = temp_v11;
    temp_v6 = param_3;
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v8[0],temp_v9,temp_v15);
    FUN_001165c0(param_3);
    if ((*(char *)(param_2 + 0x14) == '\0') && (temp_v11[0] != '\0')) {
      temp_v0 = streamWriterFinish(temp_v15);
      temp_v5 = (char *)0x0;
      temp_v6 = 0;
      temp_v7 = 0;
      FUN_002f4db0(temp_v16,param_3,temp_v0,1);
      temp_v4 = *(unsigned int *)(temp_v0 + 0x10);
      param_1 = param_1 + 1;
      FUN_00311318(param_1,temp_v8[0]);
      FUN_003112f6(param_1 + 10,temp_v4);
    }
    FUN_002f4f00(temp_v15);
    FUN_0011053e(temp_v12,param_2);
  }
  if (temp_v10 != '\0') {
    FUN_002ea2e8(temp_v14);
    temp_v1 = *(int *)(temp_v17 + 0x14);
    temp_v0 = *(int *)(temp_v17 + 0x18);
    temp_v3 = *(unsigned int *)(temp_v17 + 0x10);
    temp_v4 = wideBufferAppend(temp_v14,
                         "ClientProtocolRequestBroker: Error processing message. pBuffer=");
    FUN_00106f6c(temp_v4,temp_v17);
    temp_v4 = wideBufferAppend();
    temp_v4 = FUN_002ee818(temp_v4,temp_v8[0]);
    temp_v4 = wideBufferAppend(temp_v4,&LAB_0011c440);
    temp_v4 = FUN_003112ee(temp_v4,temp_v3);
    temp_v4 = wideBufferAppend(temp_v4,&LAB_0011c454);
    FUN_003112ee(temp_v4,temp_v1 - temp_v0);
    if (param_3 != 0) {
      temp_v2 = *(unsigned int *)(param_3 + 0x7c);
      temp_v3 = *(unsigned int *)(param_3 + 0x78);
      temp_v4 = wideBufferAppend(temp_v14,&LAB_0011c464);
      temp_v4 = FUN_003112ee(temp_v4,temp_v3);
      temp_v4 = wideBufferAppend(temp_v4,&LAB_0011c488);
      temp_v4 = FUN_003112ee(temp_v4,temp_v2);
      temp_v4 = wideBufferAppend(temp_v4,&LAB_0011c494);
      FUN_00123306(temp_v4,param_3 + 8);
    }
    else {
      wideBufferAppend(temp_v14,&LAB_0011c4a0);
    }
    FUN_002ea3a8(temp_v14);
  }
  FUN_002f4f00(temp_v9);
  return;
}

} /* extern "C" */
