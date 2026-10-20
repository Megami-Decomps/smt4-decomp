/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465cc4` (_code @ 0x465cc4, 0x394 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c87c(int);
int FUN_001a0990(int);
int FUN_001b4a58(unsigned int, int *, int, int);
int FUN_001cb774(int *, unsigned int);
int FUN_001cb83c(int *, unsigned int, int);
int FUN_001cb8e4(unsigned char [4], unsigned int);
int FUN_001cbd84(int, unsigned int, int);
int FUN_001cbd94(int);
int FUN_001cc644(int *);
int FUN_001cc6c0(unsigned int, int *);
int FUN_001d1f5c(void);
int word8HolderCopy0CTo14(void);
int FUN_004659c8(...);
int FUN_00466140(int *);
int VectorSignedToFloat(int, int);
int hasExclusiveAccess(int *);
int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 16 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned char sp29; /* 0x29: local_29 */
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned char sp2B; /* 0x2b: local_2b */
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: FUN_001a0990. */
extern int FUN_001b1998(void);
/* Supplied declaration required: FUN_001b4a58. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cb774. */
/* Supplied declaration required: FUN_001cb83c. */
/* Supplied declaration required: FUN_001cb8e4. */
/* Supplied declaration required: FUN_001cbd84. */
/* Supplied declaration required: FUN_001cbd94. */
/* Supplied declaration required: FUN_001cc644. */
/* Supplied declaration required: FUN_001cc6c0. */
/* Supplied declaration required: FUN_001d1f5c. */
extern int FUN_0045b9a0(unsigned int);
/* Supplied declaration required: word8HolderCopy0CTo14. */
/* Supplied declaration required: FUN_004659c8. */
/* Supplied declaration required: FUN_00466140. */
extern void nn_os_CriticalSection_Enter(unsigned int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_00465cc4(int *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 18 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13 [4];
  unsigned int temp_v14 [4];
  char temp_v15 [4];
  int temp_v16;
  unsigned char temp_v17 [4];
  unsigned int temp_v18;
  
  if ((char)param_1[0x59] != '\x01') {
    if ((char)param_1[0x59] != '\x02') {
      if ((char)param_1[3] == '\0') {
        return;
      }
      goto LAB_00465cf8;
    }
  }
  else {
    temp_v5 = param_1[0x5d];
    if (temp_v5 == 0) {
      return;
    }
    if (*(int *)(temp_v5 + 0x14) == 0) {
      return;
    }
    temp_v2 = *(int *)(temp_v5 + 0x18);
    FUN_0018c87c(temp_v5 + 0x14);
    if (temp_v2 - 0x80 == 0) {
      return;
    }
    param_1[0x5e] = temp_v2 - 0x80;
    *(unsigned char *)(param_1 + 0x59) = 2;
    *(unsigned char *)(temp_v2 - 0x6c) = 0;
    *(unsigned int *)(temp_v2 - 0x30) = 0;
    *(unsigned int *)(temp_v2 - 0x2c) = 0;
    *(unsigned int *)(temp_v2 - 0x1c) = 0;
    *(unsigned char *)(temp_v2 - 0xc) = 0;
    *(unsigned int *)(temp_v2 - 0x28) = 0;
    *(unsigned int *)(temp_v2 - 0x18) = 0;
    *(unsigned char *)(temp_v2 - 0xb) = 0;
    *(unsigned int *)(temp_v2 - 0x24) = 0;
    *(unsigned int *)(temp_v2 - 0x14) = 0;
    *(unsigned char *)(temp_v2 - 10) = 0;
    *(unsigned int *)(temp_v2 - 0x20) = 0;
    *(unsigned int *)(temp_v2 - 0x10) = 0;
    *(unsigned char *)(temp_v2 - 9) = 0;
    *(unsigned char *)(temp_v2 - 4) = 0;
    temp_v5 = param_1[0x60];
    temp_v7 = param_1[0x61];
    temp_v8 = param_1[0x62];
    temp_v9 = param_1[99];
    temp_v10 = param_1[100];
    temp_v11 = param_1[0x65];
    temp_v12 = param_1[0x66];
    *(int *)(temp_v2 - 100) = param_1[0x5f];
    *(int *)(temp_v2 - 0x60) = temp_v5;
    *(int *)(temp_v2 - 0x5c) = temp_v7;
    *(int *)(temp_v2 - 0x58) = temp_v8;
    *(int *)(temp_v2 - 0x54) = temp_v9;
    *(int *)(temp_v2 - 0x50) = temp_v10;
    *(int *)(temp_v2 - 0x4c) = temp_v11;
    *(int *)(temp_v2 - 0x48) = temp_v12;
    temp_v5 = param_1[0x67];
    temp_v7 = param_1[0x68];
    temp_v8 = param_1[0x69];
    temp_v9 = param_1[0x6a];
    temp_v10 = param_1[0x6b];
    *(unsigned int *)(temp_v2 - 8) = 0;
    *(int *)(temp_v2 - 0x44) = temp_v5;
    *(int *)(temp_v2 - 0x40) = temp_v7;
    *(int *)(temp_v2 - 0x3c) = temp_v8;
    *(int *)(temp_v2 - 0x38) = temp_v9;
    *(int *)(temp_v2 - 0x34) = temp_v10;
  }
  temp_v5 = param_1[0x5e];
  if (*(int *)(temp_v5 + 0x78) == 0) {
    temp_v2 = FUN_0045b9a0(*(unsigned int *)(temp_v5 + 0x24));
    *(int *)(temp_v5 + 0x78) = temp_v2;
    if (temp_v2 == 0) {
      return;
    }
    word8HolderCopy0CTo14();
  }
  temp_v0 = *(char *)(temp_v5 + 0x14);
  if (temp_v0 == '\0') {
    temp_v2 = FUN_001b1998();
    piVar7 = (int *)(temp_v2 + 0x2c);
    nn_os_CriticalSection_Enter((unsigned int)piVar7);
    FUN_001a0990(temp_v5 + 0xc);
    *(unsigned char *)(temp_v5 + 0x14) = 1;
    nw_ut_internal_LinkListImpl_insert(temp_v2 + 0xc,temp_v2 + 0x10,temp_v5 + 4);
    nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(temp_v2 + 0x38,0);
    temp_v5 = *(int *)(temp_v2 + 0x34) - 1;
    *(int *)(temp_v2 + 0x34) = temp_v5;
    if (temp_v5 == 0) {
      *(unsigned int *)(temp_v2 + 0x30) = 0;
      do {
        temp_v2 = *piVar7;
        temp_v5 = -temp_v2;
        temp_v1 = (unsigned char)hasExclusiveAccess(piVar7);
      } while (!temp_v1);
      *piVar7 = temp_v5;
      if (temp_v2 != -1 && 0 < temp_v5) {
        FUN_001b4a58(DAT_005c0ad8,piVar7,0,1);
      }
      return;
    }
    return;
  }
  if (temp_v0 != '\x03' && temp_v0 != '\x04') {
    return;
  }
  temp_v5 = param_1[0x5e];
  if (*(char *)(temp_v5 + 0x7c) == '\0') {
    *(unsigned char *)((int)param_1 + 0xf) = 1;
    FUN_001cc644(param_1);
    return;
  }
  temp_v3 = *(unsigned int *)(temp_v5 + 0x50);
  temp_v16 = param_1[0x5a];
  temp_v13[0] = *(unsigned int *)(temp_v5 + 0x54);
  temp_v14[0] = *(unsigned int *)(temp_v5 + 100);
  temp_v15[0] = *(char *)(temp_v5 + 0x74);
  temp_v13[1] = *(unsigned int *)(temp_v5 + 0x58);
  temp_v14[1] = *(unsigned int *)(temp_v5 + 0x68);
  temp_v15[1] = *(unsigned char *)(temp_v5 + 0x75);
  temp_v13[2] = *(unsigned int *)(temp_v5 + 0x5c);
  temp_v14[2] = *(unsigned int *)(temp_v5 + 0x6c);
  temp_v15[2] = *(unsigned char *)(temp_v5 + 0x76);
  temp_v13[3] = *(unsigned int *)(temp_v5 + 0x60);
  temp_v14[3] = *(unsigned int *)(temp_v5 + 0x70);
  temp_v15[3] = *(unsigned char *)(temp_v5 + 0x77);
  if ((char)param_1[3] != '\0') {
    FUN_001cc644(param_1);
  }
  temp_v5 = param_1[0x24];
  if (temp_v5 != 0) {
    FUN_001cb8e4(temp_v17,temp_v3);
    FUN_001cbd84(temp_v5,temp_v18,temp_v16);
    FUN_001cbd94(temp_v5);
    temp_v4 = 0;
    do {
      FUN_001cb774(param_1 + temp_v4 * 3 + 0x4d,temp_v13[temp_v4]);
      FUN_001cb83c(param_1 + temp_v4 * 4 + 0x3d,temp_v14[temp_v4],(int)temp_v15[temp_v4]);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    *(unsigned char *)(param_1 + 0x59) = 3;
    *(unsigned char *)(param_1 + 3) = 1;
    temp_v3 = FUN_001c35d8();
    FUN_001cc6c0(temp_v3,param_1 + 0x11);
    *(unsigned char *)((int)param_1 + 0x166) = 1;
  }
  else {
    (**(romwright_code **)(*param_1 + 0xc))(param_1);
  }
  if ((char)param_1[3] == '\0') {
    return;
  }
  if ((char)param_1[0x5b] != '\0') {
    if ((char)param_1[0x5b] == '\x01') {
      temp_v6 = (float)VectorSignedToFloat(param_1[0x5c],(unsigned char)(in_fpscr >> 0x16) & 3);
      param_1[0x1c] = (int)((float)param_1[0x1c] + temp_v6);
    }
  }
  else {
    param_1[0x1b] = param_1[0x5c] + param_1[0x1b];
  }
LAB_00465cf8:
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    if ((param_1[0x1b] != 0) || (0.0f < (float)param_1[0x1c])) {
      FUN_00466140(param_1);
    }
    else if (*(char *)((int)param_1 + 0xe) == '\0') {
      FUN_004659c8(param_1);
    }
    temp_v5 = 0;
    do {
      if ((temp_v5 < 0x10) && (param_1[temp_v5 + 0x24] != 0)) {
        FUN_001d1f5c();
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x10);
  }
  return;
}

} /* extern "C" */
