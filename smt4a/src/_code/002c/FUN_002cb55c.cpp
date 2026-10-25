/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb55c` (_code @ 0x2cb55c, 0x2f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable08Sub2GetRecord(void);
int FUN_002b4e7c(void);
int libc_strcpy(unsigned short *, unsigned int);
int sysMemClear(unsigned short *, int);
int FUN_003df7c4(unsigned short *);
int FUN_003dfad4(unsigned char *, unsigned short *);
int recordGetPercentageScaledBase(void);
int __aeabi_memcpy4(unsigned short *, unsigned short *, int);

/* stack frame of param_3: 8 slot(s), 16 byte(s) */
typedef struct {
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: FUN_002b4e7c. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_003dfad4. */
extern int countUnlockedSlots(void);
/* Supplied declaration required: recordGetPercentageScaledBase. */
extern int FUN_004ccbf0(unsigned short);
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_002cb55c(unsigned short *param_1,unsigned short *param_2,unsigned int *param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char bStack_3f;
  unsigned short temp_v8;
  unsigned char bStack_3d;
  unsigned short temp_v9;
  unsigned char bStack_3b;
  unsigned short temp_v10;
  unsigned char bStack_39;
  unsigned short temp_v11;
  unsigned char bStack_37;
  unsigned short temp_v12;
  unsigned char bStack_35;
  unsigned short temp_v13;
  unsigned char bStack_33;
  unsigned short temp_v14;
  unsigned char bStack_31;
  
  sysMemClear(param_1,0x640);
  FUN_003df7c4(param_2);
  temp_v0 = param_2[0x31];
  *param_1 = 0xffff;
  param_1[1] = temp_v0;
  temp_v4 = FUN_004ccbf0(param_2[0x31]);
  temp_v0 = param_2[0x15];
  temp_v1 = param_2[0x16];
  *(int *)(param_1 + 2) = temp_v4 - *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 4) = (int)(short)temp_v0;
  *(int *)(param_1 + 6) = (int)(short)temp_v1;
  puVar6 = param_2;
  FUN_002b4e7c();
  temp_v1 = param_2[0xf];
  temp_v0 = param_2[0x2f];
  *(unsigned int *)(param_1 + 0x2d0) = 0xffffffff;
  *(unsigned short **)(param_1 + 8) = puVar6;
  *(int *)(param_1 + 10) = (int)(short)temp_v1;
  param_1[0xe] = temp_v0;
  *(unsigned int *)(param_1 + 0xf) = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + 0x11) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned int *)(param_1 + 0x13) = *(unsigned int *)(param_2 + 0x12);
  param_1[0x15] = param_2[0x14];
  *(unsigned int *)(param_1 + 0x16) = *(unsigned int *)(param_2 + 7);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 9);
  *(unsigned int *)(param_1 + 0x1a) = *(unsigned int *)(param_2 + 0xb);
  param_1[0x1c] = param_2[0xd];
  *(unsigned int *)(param_1 + 0x21) = *(unsigned int *)param_2;
  *(unsigned int *)(param_1 + 0x23) = *(unsigned int *)(param_2 + 2);
  *(unsigned int *)(param_1 + 0x25) = *(unsigned int *)(param_2 + 4);
  param_1[0x27] = param_2[6];
  temp_v4 = countUnlockedSlots();
  __aeabi_memcpy4(param_1 + 0x28,param_2 + 0x1a,temp_v4 << 1);
  temp_v5 = gameGetPlayerName();
  libc_strcpy(param_1 + 0x2d2,temp_v5);
  if ((short)param_1[0x11] >= 1000) {
    param_1[0x11] = 999;
  }
  if ((short)param_1[0x12] >= 1000) {
    param_1[0x12] = 999;
  }
  if ((short)param_1[0x13] >= 1000) {
    param_1[0x13] = 999;
  }
  if ((short)param_1[0x14] >= 1000) {
    param_1[0x14] = 999;
  }
  if ((short)param_1[0x15] >= 1000) {
    param_1[0x15] = 999;
  }
  temp_v6 = (unsigned int)*param_2;
  dataTable08Sub2GetRecord();
  if (temp_v6 != 0) {
    temp_v2 = recordGetPercentageScaledBase();
    param_1[0xc] = temp_v2;
  }
  temp_v6 = (unsigned int)param_2[1];
  dataTable08Sub2GetRecord();
  if (temp_v6 != 0) {
    temp_v2 = recordGetPercentageScaledBase();
    param_1[0xd] = temp_v2;
  }
  temp_v6 = (unsigned int)param_2[2];
  dataTable08Sub2GetRecord();
  if (temp_v6 != 0) {
    temp_v3 = recordGetPercentageScaledBase();
    param_1[0xd] = temp_v3 + param_1[0xd];
  }
  FUN_003dfad4(&temp_v7,param_2);
  *(unsigned char *)(param_1 + 0x1d) = bStack_3f >> 2;
  *(unsigned char *)((int)param_1 + 0x3b) = bStack_3d >> 2;
  *(unsigned char *)(param_1 + 0x1e) = bStack_3b >> 2;
  *(unsigned char *)((int)param_1 + 0x3d) = bStack_39 >> 2;
  *(unsigned char *)(param_1 + 0x1f) = bStack_37 >> 2;
  *(unsigned char *)((int)param_1 + 0x3f) = bStack_35 >> 2;
  *(unsigned char *)(param_1 + 0x20) = bStack_33 >> 2;
  *(unsigned char *)((int)param_1 + 0x41) = bStack_31 >> 2;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x32) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x36) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3a) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x3e) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x42) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x46) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x4a) = 0;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(unsigned int *)(param_1 + 0x4e) = 0;
  sysMemClear(param_1 + 0x50,0x500);
  if (param_3 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0x30d) = *param_3;
    *(unsigned int *)(param_1 + 0x30f) = param_3[1];
    *(unsigned int *)(param_1 + 0x311) = param_3[2];
    *(unsigned int *)(param_1 + 0x313) = param_3[3];
    *(unsigned int *)(param_1 + 0x315) = param_3[4];
    *(unsigned char *)(param_1 + 0x317) = *(unsigned char *)(param_3 + 5);
    return;
  }
  *(unsigned int *)(param_1 + 0x30d) = 0;
  *(unsigned int *)(param_1 + 0x30f) = 0;
  *(unsigned int *)(param_1 + 0x311) = 0;
  *(unsigned int *)(param_1 + 0x313) = 0;
  *(unsigned int *)(param_1 + 0x315) = 0;
  *(unsigned char *)(param_1 + 0x317) = 0;
  *(unsigned char *)(param_1 + 0x30d) = *(unsigned char *)(param_1 + 0x1d);
  *(unsigned char *)((int)param_1 + 0x61b) = *(unsigned char *)((int)param_1 + 0x3b);
  *(unsigned char *)(param_1 + 0x30e) = *(unsigned char *)(param_1 + 0x1e);
  *(unsigned char *)((int)param_1 + 0x61d) = *(unsigned char *)((int)param_1 + 0x3d);
  *(unsigned char *)(param_1 + 0x30f) = *(unsigned char *)(param_1 + 0x1f);
  *(unsigned char *)((int)param_1 + 0x61f) = *(unsigned char *)((int)param_1 + 0x3f);
  *(unsigned char *)(param_1 + 0x310) = *(unsigned char *)(param_1 + 0x20);
  *(unsigned char *)((int)param_1 + 0x621) = *(unsigned char *)((int)param_1 + 0x41);
  return;
}

} /* extern "C" */
