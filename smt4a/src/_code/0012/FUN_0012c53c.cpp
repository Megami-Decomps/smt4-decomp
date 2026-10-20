/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c53c` (_code @ 0x12c53c, 0x1f6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int operatorNew(int);
int onlineInstanceTableGetCurrent(void);
int onlineInstanceTableFind(...);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int vectorAt4(unsigned int *, unsigned int);
int FUN_0030c6e4(unsigned char [8], int);
int vectorAt24(int, unsigned int);
int FUN_0030c720(...);
int FUN_0030c846(...);
int FUN_0030c9cc(unsigned char [8]);
int FUN_0030d1ac(unsigned char [8]);
int _ZN9Obj55aae4D1Ev(unsigned char [8]);

typedef int romwright_code(...);
/* stack frame of param_1: 16 slot(s), 62 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern unsigned char LAB_0012c744; /* 0x12c744 */
extern unsigned char DAT_0055aee0; /* 0x55aee0 */
extern romwright_code *DAT_0058956c; /* 0x58956c */
extern unsigned int DAT_00589570; /* 0x589570 */

/* Supplied declaration required: operatorNew. */
extern unsigned int FUN_002e7908(int *, unsigned int *);
/* Supplied declaration required: onlineInstanceTableGetCurrent. */
/* Supplied declaration required: onlineInstanceTableFind. */
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: vectorAt4. */
/* Supplied declaration required: FUN_0030c6e4. */
/* Supplied declaration required: vectorAt24. */
/* Supplied declaration required: FUN_0030c720. */
extern int vectorSize24B(void);
extern unsigned int vectorCount4_0030c774(void);
/* Supplied declaration required: FUN_0030c846. */
/* Supplied declaration required: FUN_0030c9cc. */
/* Supplied declaration required: FUN_0030d1ac. */
extern int FUN_0030d420(unsigned int *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aae4D1Ev. */


void FUN_0012c53c(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  romwright_code *pcVar7;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar9;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [8];
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15 [8];
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned short temp_v20;
  unsigned int temp_v21;
  int temp_v22;
  unsigned int *temp_v23;
  
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v23 = (unsigned int *)(param_1 + 0x3e0);
    temp_v1 = vectorCount4_0030c774();
    if (*(unsigned int *)(param_1 + 0x3f0) <= temp_v1) {
      temp_v22 = param_1 + 0x110;
      temp_v0 = vectorSize24B();
      if (temp_v0 != *(int *)(param_1 + 0x3f4)) {
        FUN_0030d1ac(temp_v15);
        temp_v6 = 0;
        for (temp_v0 = *(int *)(param_1 + 0x3fc); *(int *)(param_1 + 0x400) != temp_v0;
            temp_v0 = temp_v0 + 0x20) {
          temp_v3 = temp_v22;
          vectorAt24(temp_v22,*(unsigned int *)(param_1 + 0x3f4));
          if (*(int *)(temp_v0 + 8) == *(int *)(temp_v3 + 0x10) &&
              *(int *)(temp_v0 + 0xc) == *(int *)(temp_v3 + 0x14)) {
            FUN_0030c6e4(temp_v15,temp_v0);
            temp_v6 = 1;
          }
        }
        if (temp_v6 != 0) {
          piVar9 = *(int **)(param_1 + 0x3ec);
          temp_v0 = temp_v22;
          vectorAt24(temp_v22,*(unsigned int *)(param_1 + 0x3f4));
          temp_v11 = *(unsigned int *)(temp_v0 + 0xc);
          temp_v10 = *(unsigned int *)(temp_v0 + 8);
          temp_v8 = (unsigned int)temp_v20;
          temp_v9 = temp_v21;
          temp_v6 = temp_v19;
          temp_v7 = temp_v18;
          pcVar7 = *(romwright_code **)(*piVar9 + 8);
          (*pcVar7)(piVar9,pcVar7,temp_v16,temp_v17);
          temp_v0 = onlineInstanceTableGetCurrent();
          onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
          if (temp_v0 != 0) {
            if (*(int **)(param_1 + 0x40c) != (int *)0x0) {
              (**(romwright_code **)(**(int **)(param_1 + 0x40c) + 4))();
            }
            puVar5 = (unsigned int *)operatorNew(0x30);
            temp_v6 = param_1 + 0x80;
            temp_v0 = 0;
            if (puVar5 != (unsigned int *)0x0) {
              puVar6 = temp_v23;
              vectorAt4(temp_v23,*(unsigned int *)(param_1 + 0x3f0));
              puVar5[1] = *puVar6;
              puVar5[2] = temp_v6;
              *puVar5 = (unsigned int)&DAT_0055aee0;
              temp_v0 = FUN_0030d420(puVar5 + 4,temp_v15);
              temp_v0 = temp_v0 - 0x10;
            }
            *(int *)(param_1 + 0x40c) = temp_v0;
            FUN_0030c9cc(temp_v12);
            temp_v0 = temp_v22;
            vectorAt24(temp_v22,*(unsigned int *)(param_1 + 0x3f4));
            temp_v14 = *(unsigned int *)(temp_v0 + 0x14);
            temp_v13 = *(unsigned int *)(temp_v0 + 0x10);
            piVar9 = (int *)(*(int *)(param_1 + 0x6c) + ((int)DAT_00589570 >> 1));
            pcVar7 = DAT_0058956c;
            if ((DAT_00589570 & 1) != 0) {
              pcVar7 = *(romwright_code **)((unsigned char *)DAT_0058956c + *piVar9);
            }
            temp_v0 = (*pcVar7)(piVar9,temp_v6,temp_v12,*(unsigned int *)(param_1 + 0x40c));
            if (temp_v0 != 0) {
              temp_v5 = *(unsigned int *)(temp_v6 + 0x44);
              temp_v2 = onlineInstanceTableGetCurrent();
              FUN_002f7c94(temp_v2,*(unsigned int *)(param_1 + 0x68),temp_v5);
              onlineJobSetStateWaiting(param_1);
              temp_v0 = operatorNew(0x10);
              temp_v2 = 0;
              if (temp_v0 != 0) {
                temp_v2 = FUN_002ea3c0(temp_v0,0x12c83d,0,&LAB_0012c744);
              }
              FUN_002f7cba(param_1,temp_v6,temp_v2);
            }
            else {
              temp_v9 = 0x8001000d;
              temp_v2 = FUN_002e7908(&temp_v6,(unsigned int *)&temp_v9);
              FUN_0030c720(param_1,temp_v2);
            }
            _ZN9Obj55aae4D1Ev(temp_v12);
            return;
          }
        }
        else {
          temp_v0 = temp_v22;
          vectorAt24(temp_v22,*(unsigned int *)(param_1 + 0x3f4));
          FUN_0030c846(param_1 + 0x280,temp_v4,*(unsigned int *)(temp_v0 + 8),
                       *(unsigned int *)(temp_v0 + 0xc));
          temp_v7 = *(unsigned int *)(param_1 + 0x294);
          temp_v6 = *(int *)(param_1 + 0x290);
          (**(romwright_code **)(**(int **)(param_1 + 0x3ec) + 0xc))
                    (*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
          temp_v0 = onlineInstanceTableGetCurrent();
          onlineInstanceTableFind(temp_v0,*(unsigned int *)(param_1 + 0x68));
          if (temp_v0 != 0) {
            *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
            return;
          }
        }
        temp_v9 = 0x80010004;
        temp_v2 = FUN_002e7908(&temp_v6,(unsigned int *)&temp_v9);
        FUN_0030c720(param_1,temp_v2);
        return;
      }
    }
    temp_v9 = 0x10001;
  }
  else {
    temp_v9 = 0x80010004;
  }
  temp_v2 = FUN_002e7908(&temp_v6,(unsigned int *)&temp_v9);
  FUN_0030c720(param_1,temp_v2);
  return;
}

} /* extern "C" */
