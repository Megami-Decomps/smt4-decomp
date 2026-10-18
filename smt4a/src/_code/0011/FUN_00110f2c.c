/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110f2c` (_code @ 0x110f2c, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002ea4ac(int *, unsigned int *);
/* Supplied declaration required: FUN_002edb54. */
/* Supplied declaration required: FUN_002f7824. */
/* Supplied declaration required: FUN_002f8b88. */
/* Supplied declaration required: FUN_002fb208. */
/* Supplied declaration required: FUN_002fbe90. */
/* Supplied declaration required: FUN_002fbfe8. */
extern int FUN_002fc046(int *);
/* Supplied declaration required: FUN_002fc056. */
/* Supplied declaration required: FUN_002fc088. */
extern int FUN_0043aeac(int, int, int);
/* Supplied declaration required: FUN_0043af40. */
extern int FUN_0043af60(int, int, int);
/* Supplied declaration required: FUN_00502374. */
/* Supplied declaration required: FUN_005023d0. */
extern int FUN_00502424(int, unsigned int *);


void FUN_00110f2c(int param_1)

{
/* irregular: 3 goto(s); 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned char temp_v15 [12];
  unsigned char temp_v16 [16];
  
  temp_v9 = 0;
  temp_v0 = 0;
  FUN_002fb208();
  temp_v6 = 0;
  *(unsigned int *)(param_1 + 0x10b0) = temp_v0;
  temp_v12 = param_1 + 0x1050;
  temp_v13 = param_1 + 0x105c;
  temp_v4 = param_1 + 0x38;
  piVar3 = (int *)(param_1 + 0x10a0);
LAB_00110f60:
  do {
    if ((*(char *)(param_1 + 0x108c) != '\0') && (temp_v1 = FUN_002fc046(piVar3), temp_v1 != 0)) {
      return;
    }
    if (*(char *)(param_1 + 0x108d) != '\0') {
      return;
    }
    FUN_002f8b88(1);
    if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0x108f) != '\0'))
    goto LAB_00111002;
    FUN_002e6e34(temp_v15,temp_v13);
    temp_v1 = *(int *)(*(int *)(param_1 + 0x109c) + 0x18);
    if (temp_v1 != 0) {
      FUN_002edb54(piVar3,temp_v1,0);
      FUN_002fc056(*(unsigned int *)(param_1 + 0x109c),*piVar3,*(int *)(param_1 + 0x10a4) - *piVar3);
      FUN_002fc088(*(unsigned int *)(param_1 + 0x109c),*(int *)(param_1 + 0x10a4) - *piVar3);
      temp_v1 = *(int *)(param_1 + 0x109c);
      *(unsigned int *)(temp_v1 + 0x18) = 0;
      *(unsigned int *)(temp_v1 + 0x10) = 0;
      *(unsigned int *)(temp_v1 + 0x14) = 0;
    }
    *(unsigned char *)(param_1 + 0x108f) = *(unsigned char *)(param_1 + 0x108e);
    FUN_002e6e5c(temp_v15);
    temp_v1 = FUN_002fc046(piVar3);
    if (temp_v1 == 0) {
      temp_v1 = FUN_0043aeac(temp_v4,*piVar3,*(int *)(param_1 + 0x10a4) - *piVar3);
      if (-1 < temp_v1) {
        FUN_002f7824(piVar3);
        continue;
      }
      FUN_002fbe90(&temp_v3);
      FUN_002e9afe(temp_v12,&temp_v3);
      return;
    }
  } while (*(char *)(param_1 + 0x108f) == '\0');
  FUN_0043af40(temp_v4);
LAB_00111002:
  temp_v11 = -0x181c0001;
  temp_v2 = 0;
  if ((*(char *)(param_1 + 0x108c) == '\0') && (temp_v1 = FUN_002fc046(piVar3), temp_v1 != 0)) {
    FUN_002edb54(piVar3,*(unsigned int *)(param_1 + 0x1098),0);
    temp_v11 = FUN_0043af60(temp_v4,*piVar3,*(int *)(param_1 + 0x10a4) - *piVar3);
    temp_v2 = 1;
  }
  if ((temp_v2 & ~temp_v6) != 0) {
    if (temp_v11 < 0) {
      temp_v14 = 0xd840a02b;
      temp_v1 = FUN_002ea4ac(&temp_v11,(unsigned int *)&temp_v14);
      if (temp_v1 == 0) goto LAB_00111096;
    }
    temp_v7 = 0;
    temp_v1 = FUN_00502424(temp_v4,(unsigned int *)&temp_v7);
    if (temp_v1 < 0) {
      FUN_002fbe90(&temp_v3);
      FUN_002e9afe(temp_v12,&temp_v3);
      return;
    }
    temp_v6 = 1;
    FUN_002e6e34(temp_v15,temp_v13);
    *(unsigned char *)(param_1 + 0x1090) = 1;
    *(unsigned int *)(param_1 + 0x1094) = temp_v7;
    FUN_002e6e5c(temp_v15);
  }
LAB_00111096:
  FUN_002e6e34(temp_v15,temp_v13);
  if (temp_v2 != 0) {
    if ((temp_v11 < 0) && (temp_v11 != -0x27bf5fd5)) {
      if (*(char *)(param_1 + 0x108d) == '\0') {
        temp_v3 = 0xd8a0a03c;
        temp_v1 = FUN_002ea4ac(&temp_v11,(unsigned int *)&temp_v3);
        if (temp_v1 != 0) {
          temp_v5 = 0;
          FUN_005023d0(temp_v4,&temp_v5);
        }
        FUN_002fbe90(temp_v16,temp_v11);
        FUN_002e9afe(temp_v12,temp_v16);
      }
      FUN_002e6e5c(temp_v15);
      return;
    }
    temp_v10 = 0;
    temp_v8 = 0;
    FUN_00502374(temp_v4,&temp_v8,&temp_v10);
    temp_v1 = temp_v9;
    temp_v9 = temp_v8;
    FUN_002edb54(piVar3,temp_v8 - temp_v1,0);
    if (-1 < temp_v11) {
      *(unsigned char *)(param_1 + 0x108c) = 1;
    }
  }
  temp_v1 = FUN_002fc046(piVar3);
  if ((temp_v1 == 0) &&
     ((unsigned int)(*(int *)(param_1 + 0x10a4) - *piVar3) <=
      (unsigned int)(*(int *)(*(int *)(param_1 + 0x109c) + 0x1c) -
            *(int *)(*(int *)(param_1 + 0x109c) + 0x18)))) {
    FUN_002fbfe8(*(unsigned int *)(param_1 + 0x109c),*piVar3,*(int *)(param_1 + 0x10a4) - *piVar3);
    FUN_002f7824(piVar3);
  }
  FUN_002e6e5c(temp_v15);
  goto LAB_00110f60;
}
