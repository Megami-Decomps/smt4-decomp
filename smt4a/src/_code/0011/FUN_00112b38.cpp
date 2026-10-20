/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00112b38` (_code @ 0x112b38, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011289c(void);
int FUN_002ea20c(unsigned char [8]);
int FUN_002ea3d0(int, unsigned int);
int onlineJobSetStateTimed(int, int);
int FUN_002efd4a(...);
int FUN_002f2e3c(int, int, int, int);
int _ZN9Obj55afc44stopEv(int);
int FUN_002f7f50(int);
int FUN_002f8208(int, int);
int FUN_002fd706(int);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char LAB_00112a0d; /* 0x112a0d */
extern unsigned char LAB_00112d1c; /* 0x112d1c */
extern unsigned int DAT_00594eac; /* 0x594eac */

/* Supplied declaration required: FUN_0011289c. */
/* Supplied declaration required: FUN_002ea20c. */
extern unsigned int FUN_002ea3c0(unsigned int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: onlineJobSetStateTimed. */
/* Supplied declaration required: FUN_002efd4a. */
/* Supplied declaration required: FUN_002f2e3c. */
/* Supplied declaration required: _ZN9Obj55afc44stopEv. */
extern int FUN_002f7f00(int, unsigned int);
/* Supplied declaration required: FUN_002f7f50. */
/* Supplied declaration required: FUN_002f8208. */
/* Supplied declaration required: FUN_002fd706. */


void FUN_00112b38(int param_1)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [8];
  int temp_v15;
  
  FUN_002ea20c(temp_v13);
  temp_v12 = param_1 + 0x2e0;
  temp_v0 = FUN_002efd4a(temp_v13);
  temp_v10 = param_1 + 0x180;
  temp_v9 = (int *)(param_1 + 0x380);
  temp_v7 = param_1 + 0x1ac;
  if ((temp_v0 != 0) && (*(char *)(param_1 + 0x330) == '\0')) {
    temp_v8 = param_1 + 0x19c;
    temp_v11 = param_1 + 0x100;
    do {
      if (*(int *)(param_1 + 0x348) == 0) break;
      temp_v0 = param_1;
      FUN_0011289c();
    } while (temp_v0 != 0);
    temp_v15 = param_1 + 0xc0;
    do {
      temp_v0 = FUN_002f7f00(temp_v15,0);
      if (temp_v0 == 0) break;
      FUN_002ea20c(temp_v14);
      temp_v0 = FUN_002efd4a(temp_v14,temp_v12);
      if ((temp_v0 == 0) || (*(char *)(*(int *)(temp_v11 + 0x1c) + 0x34) != '\x02')) break;
      if (*(int *)(*(int *)(temp_v11 + 0x1c) + 8) == 0x10) {
        FUN_002f7f50(temp_v8);
        temp_v1 = *(int *)(temp_v10 + 0x1c) - 0x65;
        if (temp_v1 < 3) {
          temp_v0 = temp_v1 * 0x14 + param_1;
          temp_v2 = *(unsigned int *)(temp_v10 + 0x20);
          temp_v3 = *(unsigned int *)(temp_v10 + 0x24);
          temp_v4 = *(unsigned int *)(temp_v10 + 0x28);
          *(int *)(temp_v0 + 0x370) = *(int *)(temp_v10 + 0x1c);
          *(unsigned int *)(temp_v0 + 0x374) = temp_v2;
          *(unsigned int *)(temp_v0 + 0x378) = temp_v3;
          *(unsigned int *)(temp_v0 + 0x37c) = temp_v4;
          *(int *)(temp_v0 + 0x380) = *(int *)(temp_v0 + 0x380) + 1;
        }
      }
      if (*(char *)(temp_v10 + 0x18) != '\x03') {
        if (((*(char *)(temp_v10 + 0x18) == '\x01') && (*temp_v9 != 0)) && (temp_v9[5] != 0)) {
          temp_v0 = temp_v9[10];
          goto LAB_00112c5c;
        }
      }
      else {
        temp_v0 = *temp_v9;
LAB_00112c5c:
        if (temp_v0 != 0) {
          *(unsigned char *)(param_1 + 0x330) = 1;
          break;
        }
      }
      *(unsigned char *)(*(int *)(temp_v11 + 0x1c) + 0x34) = 0;
      temp_v5 = *(unsigned int *)(temp_v11 + 0x1c);
      temp_v6 = 1;
      temp_v0 = temp_v7;
      FUN_002f2e3c(temp_v7,temp_v8,0x10,param_1 + 0x178);
    } while (temp_v0 == 0);
    onlineJobSetStateTimed(param_1,100);
    return;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x374);
  if (*(char *)(param_1 + 0x198) != '\x03') {
    if (((temp_v1 != 0) && (*(int *)(param_1 + 0x39c) != 0)) || (*(unsigned int *)(param_1 + 0x32c) >= 3)) {
      puVar4 = &LAB_00112a0d;
      temp_v2 = FUN_002ea3c0((unsigned int *)&temp_v5,puVar4,0,&LAB_00112d1c);
      FUN_002ea3d0(param_1,temp_v2);
      return;
    }
    *(unsigned int *)(param_1 + 0x32c) = *(unsigned int *)(param_1 + 0x32c) + 1;
    *(unsigned char *)(param_1 + 0x330) = 0;
  }
  else {
    if ((temp_v1 != 0) || (*(unsigned int *)(param_1 + 0x32c) >= 4)) {
      if ((DAT_00594eac <= temp_v1) ||
         ((*(char *)(param_1 + 0x3ac) == '\0' || (*(unsigned int *)(param_1 + 0x32c) >= 4)))) {
        puVar4 = (unsigned char *)0x1127e5;
        DAT_00594eac = temp_v1;
        temp_v2 = FUN_002ea3c0((unsigned int *)&temp_v5,puVar4,0,&LAB_00112d1c);
        FUN_002ea3d0(param_1,temp_v2);
        return;
      }
      _ZN9Obj55afc44stopEv(temp_v7);
      FUN_002f8208(temp_v7,1);
      FUN_002fd706(param_1);
    }
    *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 1;
    *(unsigned char *)(param_1 + 0x330) = 0;
  }
  puVar4 = (unsigned char *)0x112e7d;
  temp_v2 = FUN_002ea3c0((unsigned int *)&temp_v5,puVar4,0,&LAB_00112d1c);
  FUN_002ea3d0(param_1,temp_v2);
  return;
}

} /* extern "C" */
