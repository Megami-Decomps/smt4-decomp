/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c988` (_code @ 0x37c988, 0x404 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 9 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_6_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_003b6354. */
/* Supplied declaration required: FUN_003c33e8. */
/* Supplied declaration required: FUN_003cce74. */
extern int FUN_004bd21c(unsigned int);


void FUN_0037c988(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 unsigned long long param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [28];
  int iStack_34;
  unsigned int temp_v10;
  int temp_v11;
  int iStack_28;
  
  temp_v9[0] = 0;
  iStack_34 = param_1;
  temp_v10 = param_2;
  temp_v11 = param_3;
  iStack_28 = param_4;
  temp_v0 = FUN_004bd21c(param_2);
  temp_v5 = 0;
  temp_v8 = param_1 + 0x8e14;
  do {
    temp_v6 = (int)param_6;
    temp_v7 = (int)((unsigned long long)param_6 >> 0x20);
    temp_v1 = FUN_001834a4(0x1a,temp_v5 + 0x17d);
    if (temp_v5 >= temp_v0) {
      FUN_001835b4(2,0x1a,0x229,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x16f,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x170,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x26f,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x270,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
    }
    else {
      FUN_003b6354(param_1,temp_v5,param_4,param_5,(int)*(short *)(temp_v1 + 8),
                   (int)*(short *)(temp_v1 + 10),&temp_v6,&temp_v7,temp_v9);
      FUN_001835b4(2,0x1a,0x16f,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x170,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x26f,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_001835b4(2,0x1a,0x270,*(short *)(temp_v1 + 8) + temp_v6,*(short *)(temp_v1 + 10) + temp_v7,
                   0x65);
      FUN_003c33e8(param_1,temp_v5,temp_v10,param_5,*(short *)(temp_v1 + 8) + temp_v6,
                   *(short *)(temp_v1 + 10) + temp_v7);
      if ((param_4 == 1) && (*(int *)(param_1 + 0x3fc) >= 5)) {
        temp_v2 = FUN_002a4860(temp_v8);
        temp_v3 = FUN_002a4894(temp_v8);
        if (*(short *)(param_1 + temp_v5 * 2 + 0x8b60) ==
            *(short *)(param_1 + (temp_v3 + temp_v2) * 2 + 0x8b70)) {
          FUN_001677c0();
          temp_v2 = DAT_0059dbb4;
          temp_v3 = FUN_00169294(6,1,0);
          piVar7 = (int *)(temp_v2 + 0x12b8);
          temp_v4 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v3;
          if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
            (**(romwright_code **)(temp_v2 + 0x12d4))();
            *(unsigned char *)(temp_v2 + 0x12d0) = 0;
          }
          FUN_001835b4(2,0x1a,0x173,*(short *)(temp_v1 + 8) + temp_v6,
                       *(short *)(temp_v1 + 10) + temp_v7,0x65);
          temp_v1 = DAT_0059dbb4;
          temp_v2 = FUN_00169294(6,7,0);
          piVar7 = (int *)(temp_v1 + 0x12b8);
          temp_v3 = piVar7[*piVar7 + 2];
          piVar7[*piVar7 + 2] = temp_v2;
          if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
            (**(romwright_code **)(temp_v1 + 0x12d4))();
            *(unsigned char *)(temp_v1 + 0x12d0) = 0;
          }
        }
      }
      FUN_001677c0();
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 8);
  if ((*(char *)(param_1 + 0x8e8a) == '\0') && (temp_v11 != 0)) {
    FUN_003cce74(param_1,temp_v10,temp_v6,temp_v7);
  }
  return;
}
