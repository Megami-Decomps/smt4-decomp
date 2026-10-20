/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462e54` (_code @ 0x462e54, 0x27c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018c87c(int);
int FUN_001a0990(int);
int FUN_001b4a58(unsigned int, int *, int, int, int, int, unsigned int, unsigned int);
int FUN_001cc6c0(unsigned int, int);
int FUN_001d0b28(unsigned int, int);
int word8HolderCopy0CTo14(void);
int FUN_00462a18(void);
int FUN_00462b74(int);
int hasExclusiveAccess(int *);
int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(int, int);
int nw_ut_internal_LinkListImpl_insert(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: FUN_001a0990. */
extern int FUN_001b1998(void);
extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001b4a58. */
extern unsigned int FUN_001c35d8(void);
/* Supplied declaration required: FUN_001cc6c0. */
/* Supplied declaration required: FUN_001d0b28. */
extern int FUN_0045b9a0(unsigned int);
/* Supplied declaration required: word8HolderCopy0CTo14. */
/* Supplied declaration required: FUN_00462a18. */
/* Supplied declaration required: FUN_00462b74. */
extern void nn_os_CriticalSection_Enter(unsigned int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_00462e54(int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_lr; 12 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int unaff_r4;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_lr;
  unsigned char temp_v9;
  unsigned long long temp_v10;
  
  if (*(char *)(param_1 + 0xa0) != '\x01') {
    if (*(char *)(param_1 + 0xa0) == '\x02') goto LAB_00462ee4;
LAB_00462fb0:
    temp_v9 = *(char *)(param_1 + 0xc) == '\0';
    temp_v0 = '\0';
    if (!temp_v9) {
      temp_v0 = *(char *)(param_1 + 0xd);
    }
    if (temp_v9 || temp_v0 == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
      FUN_00462b74(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x5c) != '\0') {
      if (*(int *)(param_1 + 0x9c) != 0) {
        FUN_00462b74(param_1);
        return;
      }
      *(unsigned char *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) == '\0') {
        *(unsigned char *)(param_1 + 0xd) = 0;
        return;
      }
      temp_v2 = FUN_001b1f04();
      FUN_001d0b28(temp_v2,param_1 + 0x50);
      *(unsigned char *)(param_1 + 0xa2) = 0;
      temp_v0 = *(char *)(param_1 + 0xd);
    }
    else {
      temp_v6 = param_1;
      FUN_00462a18();
      if (temp_v6 != 0) {
        FUN_00462b74(param_1);
        return;
      }
      *(unsigned char *)(param_1 + 0xf) = 1;
      if (*(char *)(param_1 + 0xa2) != '\0') {
        temp_v2 = FUN_001b1f04();
        FUN_001d0b28(temp_v2,param_1 + 0x50);
        *(unsigned char *)(param_1 + 0xa2) = 0;
      }
      temp_v0 = *(char *)(param_1 + 0xd);
    }
  }
  else {
    temp_v6 = *(int *)(param_1 + 0xa4);
    if (temp_v6 == 0) {
      return;
    }
    if (*(int *)(temp_v6 + 0x14) == 0) {
      return;
    }
    temp_v1 = *(int *)(temp_v6 + 0x18);
    FUN_0018c87c(temp_v6 + 0x14);
    if (temp_v1 - 0x44 == 0) {
      return;
    }
    *(int *)(param_1 + 0xa8) = temp_v1 - 0x44;
    *(unsigned char *)(param_1 + 0xa0) = 2;
    *(unsigned char *)(temp_v1 - 0x30) = 0;
    *(unsigned int *)(temp_v1 - 0xc) = 0;
    *(unsigned int *)(temp_v1 - 0x10) = 0;
    *(unsigned char *)(temp_v1 - 4) = 0;
    temp_v2 = *(unsigned int *)(param_1 + 0xac);
    temp_v3 = *(unsigned int *)(param_1 + 0xb0);
    temp_v4 = *(unsigned int *)(param_1 + 0xb4);
    temp_v5 = *(unsigned int *)(param_1 + 0xb8);
    temp_v7 = *(unsigned int *)(param_1 + 0xbc);
    temp_v8 = *(unsigned int *)(param_1 + 0xc0);
    *(unsigned int *)(temp_v1 - 8) = 0;
    *(unsigned int *)(temp_v1 - 0x28) = temp_v2;
    *(unsigned int *)(temp_v1 - 0x24) = temp_v3;
    *(unsigned int *)(temp_v1 - 0x20) = temp_v4;
    *(unsigned int *)(temp_v1 - 0x1c) = temp_v5;
    *(unsigned int *)(temp_v1 - 0x18) = temp_v7;
    *(unsigned int *)(temp_v1 - 0x14) = temp_v8;
LAB_00462ee4:
    temp_v6 = *(int *)(param_1 + 0xa8);
    if (*(int *)(temp_v6 + 0x3c) == 0) {
      temp_v1 = FUN_0045b9a0(*(unsigned int *)(temp_v6 + 0x24));
      *(int *)(temp_v6 + 0x3c) = temp_v1;
      if (temp_v1 == 0) {
        return;
      }
      word8HolderCopy0CTo14();
    }
    temp_v0 = *(char *)(temp_v6 + 0x14);
    if (temp_v0 == '\0') {
      temp_v1 = FUN_001b1998();
      piVar8 = (int *)(temp_v1 + 0x2c);
      nn_os_CriticalSection_Enter((unsigned int)piVar8);
      FUN_001a0990(temp_v6 + 0xc);
      *(unsigned char *)(temp_v6 + 0x14) = 1;
      nw_ut_internal_LinkListImpl_insert(temp_v1 + 0xc,temp_v1 + 0x10,temp_v6 + 4);
      nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(temp_v1 + 0x38,0);
      temp_v6 = *(int *)(temp_v1 + 0x34) - 1;
      *(int *)(temp_v1 + 0x34) = temp_v6;
      if (temp_v6 == 0) {
        *(unsigned int *)(temp_v1 + 0x30) = 0;
        do {
          temp_v1 = *piVar8;
          temp_v6 = -temp_v1;
          temp_v9 = (unsigned char)hasExclusiveAccess(piVar8);
        } while (!temp_v9);
        *piVar8 = temp_v6;
        if (temp_v1 != -1 && 0 < temp_v6) {
          FUN_001b4a58(DAT_005c0ad8,piVar8,0,1,0,0,unaff_r4,in_lr);
        }
        return;
      }
      return;
    }
    if (temp_v0 != '\x03' && temp_v0 != '\x04') {
      return;
    }
    if (*(char *)(*(int *)(param_1 + 0xa8) + 0x40) != '\0') {
      temp_v10 = *(unsigned long long *)(*(int *)(param_1 + 0xa8) + 0x34);
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(unsigned char *)(param_1 + 0xf) = 1;
        if (*(char *)(param_1 + 0xa2) != '\0') {
          temp_v2 = FUN_001b1f04();
          FUN_001d0b28(temp_v2,param_1 + 0x50);
          *(unsigned char *)(param_1 + 0xa2) = 0;
        }
        if (*(char *)(param_1 + 0xd) != '\0') {
          *(unsigned char *)(param_1 + 0xd) = 0;
        }
      }
      *(unsigned char *)(param_1 + 0xa0) = 3;
      *(unsigned char *)(param_1 + 0x5f) = 0;
      *(unsigned char *)(param_1 + 0xc) = 1;
      *(int *)(param_1 + 100) = (int)temp_v10;
      *(int *)(param_1 + 0x68) = (int)((unsigned long long)temp_v10 >> 0x20);
      temp_v2 = FUN_001c35d8();
      FUN_001cc6c0(temp_v2,param_1 + 0x44);
      goto LAB_00462fb0;
    }
    *(unsigned char *)(param_1 + 0xf) = 1;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      temp_v2 = FUN_001b1f04();
      FUN_001d0b28(temp_v2,param_1 + 0x50);
      *(unsigned char *)(param_1 + 0xa2) = 0;
    }
    temp_v0 = *(char *)(param_1 + 0xd);
  }
  if (temp_v0 == '\0') {
    return;
  }
  *(unsigned char *)(param_1 + 0xd) = 0;
  return;
}

} /* extern "C" */
