/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105a84` (_code @ 0x105a84, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(...);
int _ZN9Obj55aff4aSERKS_(unsigned int, unsigned int);
int FUN_002e9c0c(void);
int FUN_002ea100(...);
int FUN_002ea214(int, unsigned int);
int FUN_002ea2b4(int, unsigned int);
int ptrHolderDestroy(unsigned char [8]);
int FUN_002ea2e8(unsigned char [4]);
int FUN_002ea314(unsigned char [4], unsigned int);
int FUN_002ea374(int, int, unsigned int, int);
int FUN_002ea3a8(unsigned char [4]);
int FUN_002ea3d0(int, unsigned int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp260; /* 0x260: local_260 */
    unsigned int sp268; /* 0x268: local_268 */
    unsigned int sp26C; /* 0x26c: local_26c */
    unsigned int sp270; /* 0x270: local_270 */
    unsigned int sp274; /* 0x274: local_274 */
    unsigned int sp278; /* 0x278: local_278 */
} param_1_stack;

extern unsigned char LAB_00105ba0; /* 0x105ba0 */

extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002ea100. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea268(void);
extern unsigned int FUN_002ea2a8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002ea2b4. */
/* Supplied declaration required: ptrHolderDestroy. */
/* Supplied declaration required: FUN_002ea2e8. */
/* Supplied declaration required: FUN_002ea314. */
/* Supplied declaration required: FUN_002ea374. */
/* Supplied declaration required: FUN_002ea3a8. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */


void FUN_00105a84(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [4];
  unsigned int temp_v9;
  unsigned char temp_v10 [4];
  unsigned int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [8];
  unsigned char temp_v15 [16];
  
  temp_v7 = param_1 + 0x100;
  temp_v2 = *(int *)(param_1 + 0x118);
  temp_v12 = param_1 + 0x68;
  FUN_002e9c0c();
  *(unsigned int *)(*(int *)(param_1 + 0xe8) + 0x74) = *(unsigned int *)(param_1 + 0xf8);
  temp_v0 = operatorNew(0x1c);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ea268();
  }
  temp_v1 = FUN_002ea2a8(temp_v13,temp_v1);
  FUN_002ea2b4(param_1 + 0x108,temp_v1);
  ptrHolderDestroy(temp_v13);
  temp_v4 = *(unsigned int *)(param_1 + 0x10c);
  temp_v1 = FUN_002ea100(temp_v14,temp_v2);
  _ZN9Obj55aff4aSERKS_(temp_v4 + 8,temp_v1);
  _ZN9Obj55aff4D1Ev(temp_v14);
  FUN_002ea2e8(temp_v8);
  FUN_002ea314(temp_v8,*(unsigned int *)(temp_v7 + 0x1c));
  FUN_002ea100(temp_v10,temp_v2 + 0x248);
  if (*(char *)(*(int *)(param_1 + 0xe8) + 0x140) != '\0') {
    *(unsigned int *)(*(int *)(param_1 + 0x10c) + 0x18) = 0xffffffff;
  }
  temp_v6 = param_1 + 0xec;
  *(unsigned char *)(*(int *)(param_1 + 0x10c) + 0x14) = 1;
  temp_v0 = *(int *)(param_1 + 0xe8);
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 600);
  temp_v7 = 0;
  temp_v3 = temp_v11;
  temp_v5 = param_1 + 0x108;
  FUN_002ea374(temp_v0,temp_v12,temp_v9,temp_v2 + 0x204);
  if (temp_v0 != 0) {
    _ZN9Obj55aff4D1Ev(temp_v10);
    FUN_002ea3a8(temp_v8);
    temp_v1 = FUN_002ea3c0(temp_v15,0x105bad,0,&LAB_00105ba0);
    FUN_002ea3d0(param_1,temp_v1);
  }
  else {
    temp_v3 = 0x8001000d;
    temp_v1 = FUN_002e7908(&temp_v4,(unsigned int *)&temp_v3);
    FUN_002ea214(param_1,temp_v1);
    _ZN9Obj55aff4D1Ev(temp_v10);
    FUN_002ea3a8(temp_v8);
  }
  return;
}

} /* extern "C" */
