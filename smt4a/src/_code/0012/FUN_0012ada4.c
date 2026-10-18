/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012ada4` (_code @ 0x12ada4, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002f4c9c. */
/* Supplied declaration required: FUN_0030ca30. */
extern int FUN_0030cad0(void);
/* Supplied declaration required: rt_memcpy. */


void FUN_0012ada4(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  romwright_code *pcVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [3];
  unsigned int temp_v8;
  int *temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11 [3];
  unsigned int temp_v12;
  unsigned int *temp_v13;
  int temp_v14;
  unsigned int *puVar5;
  
  puVar5 = &temp_v4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 == 0) {
    temp_v7[0] = 0x80010004;
    puVar7 = temp_v7;
    temp_v3 = FUN_002e7908(puVar5,puVar7);
    FUN_0030ca30(param_1,temp_v3);
    return;
  }
  temp_v10 = param_1 + 0x198;
  temp_v0 = FUN_0030cad0();
  if (temp_v0 != 0) {
    temp_v7[0] = 0x8069000b;
  }
  else {
    temp_v13 = (unsigned int *)(param_1 + 0x1a8);
    temp_v14 = param_1 + 0x80;
    if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
      if (*(char *)(param_1 + 0x1ce) == '\0') {
LAB_0012ae6e:
        piVar8 = *(int **)(temp_v14 + 0xc);
        temp_v2 = temp_v10;
        FUN_002f4c9c(temp_v10);
        temp_v0 = (**(romwright_code **)(*piVar8 + 0x10))(piVar8,*temp_v13,temp_v2);
        if (temp_v0 == 0) {
          FUN_002ea446(param_1,0x10);
          return;
        }
        temp_v2 = temp_v10;
        FUN_002f4c9c();
        *(unsigned int *)(param_1 + 0x1c8) = temp_v2 + *(int *)(param_1 + 0x1c8);
        puVar7 = &temp_v12;
        temp_v12 = 0x10001;
        puVar5 = temp_v11;
        temp_v3 = FUN_002e7908(puVar5,puVar7);
        FUN_0030ca30(param_1,temp_v3);
        return;
      }
      *(unsigned char *)(param_1 + 0x1ce) = 0;
      temp_v8 = *(unsigned int *)(param_1 + 0x180);
      temp_v0 = *(int *)(param_1 + 0x184);
      if (temp_v8 == 0 && temp_v0 == 0) {
        temp_v0 = *(int *)(param_1 + 0x11c);
        temp_v8 = *(unsigned int *)(param_1 + 0x118);
      }
      temp_v2 = temp_v10;
      temp_v9 = *(int **)(param_1 + 0x8c);
      FUN_002f4c9c();
      temp_v7[0] = (unsigned int)*(unsigned short *)(param_1 + 0x196);
      temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x194);
      temp_v5 = *(unsigned int *)(param_1 + 400);
      temp_v7[1] = 0;
      temp_v4 = temp_v2;
      (**(romwright_code **)(*temp_v9 + 8))(temp_v9,*(romwright_code **)(*temp_v9 + 8),temp_v8,temp_v0);
      temp_v1 = FUN_002e9af4();
      FUN_002e9ec8(temp_v1,*(unsigned int *)(param_1 + 0x6c));
      if (temp_v1 != 0) {
        piVar8 = *(int **)(temp_v14 + 0xc);
        temp_v2 = temp_v10;
        FUN_002f4c9c();
        pcVar6 = *(romwright_code **)(*piVar8 + 0xc);
        temp_v4 = temp_v2;
        (*pcVar6)(piVar8,pcVar6,temp_v8,temp_v0);
        temp_v0 = FUN_002e9af4();
        FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
        if (temp_v0 != 0) goto LAB_0012ae6e;
      }
      temp_v7[0] = 0x80010004;
    }
    else {
      if (*(int *)(param_1 + 0x1b8) == 0) {
        return;
      }
      temp_v2 = temp_v10;
      FUN_002f4c9c();
      if (temp_v2 <= *(unsigned int *)(param_1 + 0x1bc)) {
        temp_v2 = temp_v10;
        FUN_002f4c9c(temp_v10);
        rt_memcpy(*(unsigned int *)(param_1 + 0x1b8),*temp_v13,temp_v2);
        temp_v2 = temp_v10;
        FUN_002f4c9c();
        *(unsigned int *)(param_1 + 0x1c8) = temp_v2 + *(int *)(param_1 + 0x1c8);
        puVar7 = &temp_v8;
        temp_v8 = 0x10001;
        puVar5 = temp_v7;
        temp_v3 = FUN_002e7908(puVar5,puVar7);
        FUN_0030ca30(param_1,temp_v3);
        return;
      }
      temp_v7[0] = 0x80050017;
    }
  }
  puVar7 = temp_v7;
  temp_v3 = FUN_002e7908(puVar5,puVar7);
  FUN_0030ca30(param_1,temp_v3);
  return;
}
