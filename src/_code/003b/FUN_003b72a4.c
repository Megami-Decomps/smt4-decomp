/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b72a4` (_code @ 0x3b72a4, 0xab0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_003b76cc; /* 0x3b76cc */
extern unsigned char LAB_003b76d0; /* 0x3b76d0 */
extern unsigned char LAB_003b7d70; /* 0x3b7d70 */
extern int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_0029f248(int);
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_003b72a4(int param_1,int param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  
  FUN_002bf558(2,0x28,4,param_2,param_3,0x65);
  temp_v2 = FUN_002bf6d0(0x28,0x87);
  FUN_002be4dc(0x7a4c00ff);
  temp_v3 = FUN_002b66ec();
  FUN_002be16c(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b76cc,((unsigned int)*(unsigned char *)(temp_v3 + 0x76) - (int)*(char *)(param_1 + 0xd530)) * 5)
  ;
  temp_v2 = FUN_002bf6d0(0x28,0x88);
  FUN_002be16c(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b76d0);
  temp_v2 = FUN_002bf6d0(0x28,0x8a);
  FUN_002be4dc(0xff);
  FUN_002be16c(0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0,0,0x6a,
               &LAB_003b76cc,*(unsigned int *)(param_1 + 0xcfcc));
  FUN_002bef14();
  temp_v2 = FUN_002b66ec();
  piVar11 = (int *)(param_1 + 0xcf78);
  temp_v0 = *(short *)(temp_v2 + 0x1c);
  temp_v1 = *(short *)(param_1 + *piVar11 * 0x620 + 0x3674);
  temp_v2 = FUN_002bf6d0(0x28,0x9a);
  FUN_002bf558(2,0x28,5,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x65);
  FUN_002bf460(2,0x28,0x8f,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  FUN_002bf460(2,0x28,0x91,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  temp_v3 = FUN_002bf6d0(0x28,0x95);
  FUN_002be16c(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_3,1,4,0x6a,
               &LAB_003b76cc,(int)temp_v1);
  temp_v3 = FUN_002bf6d0(0x28,0x99);
  FUN_002be4dc(0x72e027ff);
  FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b76cc,(int)temp_v0);
  FUN_002bef14();
  temp_v2 = FUN_002b66ec();
  temp_v8 = (int)*(short *)(temp_v2 + 0x1e);
  temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3676);
  temp_v2 = FUN_002bf6d0(0x28,0x9b);
  FUN_002bf558(2,0x28,5,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x65);
  FUN_002bf460(2,0x28,0x90,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  FUN_002bf460(2,0x28,0x91,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,0x6a);
  temp_v3 = FUN_002bf6d0(0x28,0x95);
  FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b76cc,temp_v9);
  temp_v3 = FUN_002bf6d0(0x28,0x99);
  FUN_002be4dc(0x72e027ff);
  FUN_002be16c(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,4,0x6a,
               &LAB_003b76cc,temp_v8);
  FUN_002bef14();
  temp_v2 = 0;
  do {
    temp_v3 = FUN_0029f248(param_1 + 0xcfd4);
    if (temp_v3 != temp_v2) {
      switch(temp_v2) {
      case 0:
        temp_v3 = FUN_002b66ec();
        temp_v8 = (int)*(short *)(temp_v3 + 0x20);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3678);
        break;
      case 1:
        temp_v3 = FUN_002b66ec();
        temp_v8 = (int)*(short *)(temp_v3 + 0x22);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367a);
        break;
      case 2:
        temp_v3 = FUN_002b66ec();
        temp_v8 = (int)*(short *)(temp_v3 + 0x24);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367c);
        break;
      case 3:
        temp_v3 = FUN_002b66ec();
        temp_v8 = (int)*(short *)(temp_v3 + 0x26);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367e);
        break;
      case 4:
        temp_v3 = FUN_002b66ec();
        temp_v8 = (int)*(short *)(temp_v3 + 0x28);
        temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3680);
      }
      temp_v3 = FUN_002bf6d0(0x28,temp_v2 + 0xba);
      FUN_002bf558(2,0x28,6,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x65);
      FUN_002bf460(2,0x28,temp_v2 + 0x9e,*(short *)(temp_v3 + 8) + param_2,
                   *(short *)(temp_v3 + 10) + param_3,0x6a);
      temp_v4 = FUN_002bf6d0(0x28,0xb6);
      FUN_002be4dc(0x5a5a5aff);
      FUN_002be16c(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                   (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,3,0x6a,
                   &LAB_003b76cc,temp_v9);
      FUN_002bef14();
      temp_v4 = FUN_002bf6d0(0x28,0xb9);
      temp_v5 = *(short *)(temp_v3 + 10) + param_3;
      temp_v7 = *(short *)(temp_v3 + 8) + param_2;
      if (temp_v9 < temp_v8) {
        FUN_002bf460(2,0x28,0xa4,temp_v7,temp_v5,0x6a);
        temp_v6 = 0x8400ff;
      }
      else {
        FUN_002bf460(2,0x28,0xa3,temp_v7,temp_v5,0x6a);
        temp_v6 = 0x5a5a5aff;
      }
      FUN_002be4dc(temp_v6);
      FUN_002be16c(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_2,
                   (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_3,1,3,0x6a,
                   &LAB_003b76cc,temp_v8);
      FUN_002bef14();
      FUN_002bf460(2,0x28,0xa5,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a
                  );
      FUN_002bf460(2,0x28,0xa6,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a
                  );
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 5);
  temp_v2 = FUN_0029f248(param_1 + 0xcfd4);
  temp_v3 = FUN_002bf6d0(0x28,temp_v2 + 0xba);
  switch(temp_v2) {
  case 0:
    temp_v8 = FUN_002b66ec();
    temp_v8 = (int)*(short *)(temp_v8 + 0x20);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3678);
    break;
  case 1:
    temp_v8 = FUN_002b66ec();
    temp_v8 = (int)*(short *)(temp_v8 + 0x22);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367a);
    break;
  case 2:
    temp_v8 = FUN_002b66ec();
    temp_v8 = (int)*(short *)(temp_v8 + 0x24);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367c);
    break;
  case 3:
    temp_v8 = FUN_002b66ec();
    temp_v8 = (int)*(short *)(temp_v8 + 0x26);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x367e);
    break;
  case 4:
    temp_v8 = FUN_002b66ec();
    temp_v8 = (int)*(short *)(temp_v8 + 0x28);
    temp_v9 = (int)*(short *)(param_1 + *piVar11 * 0x620 + 0x3680);
  }
  FUN_002bf710();
  FUN_002bf558(2,0x28,7,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x65);
  FUN_002bf710();
  FUN_002bf460(2,0x28,0xa9,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6a);
  FUN_002bf460(2,0x28,temp_v2 + 0xaa,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
               0x6a);
  temp_v2 = FUN_002bf6d0(0x28,0xb6);
  FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v3 + 8) + param_2,
               (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v2 + 10) + param_3,1,3,0x6f,
               &LAB_003b7d70,temp_v9);
  temp_v2 = FUN_002bf6d0(0x28,0xb9);
  if (temp_v9 < temp_v8) {
    temp_v6 = 0x72e027ff;
  }
  else {
    temp_v6 = 0xffffffff;
  }
  FUN_002be4dc(temp_v6);
  FUN_002be16c(0,(int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v2 + 8) + param_2,
               (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10) + param_3,1,3,0x6f,
               &LAB_003b7d70,temp_v8);
  FUN_002bef14();
  FUN_002bf460(2,0x28,0xaf,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf460(2,0x28,0xb2,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf460(2,0x28,0xb3,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x6f);
  FUN_002bf710();
  temp_v2 = DAT_0044ea00;
  temp_v8 = FUN_002c5fa4(6,1,0);
  piVar11 = (int *)(temp_v2 + 0x12ac);
  temp_v9 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v8;
  if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v9 != temp_v8) {
    (**(romwright_code **)(temp_v2 + 0x12c8))();
    *(unsigned char *)(temp_v2 + 0x12c4) = 0;
  }
  FUN_002bf460(2,0x28,0xb0,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x74);
  FUN_002bf460(2,0x28,0xb1,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x74);
  temp_v2 = DAT_0044ea00;
  temp_v3 = FUN_002c5fa4(6,7,0);
  piVar11 = (int *)(temp_v2 + 0x12ac);
  temp_v8 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v3;
  if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v8 != temp_v3) {
    (**(romwright_code **)(temp_v2 + 0x12c8))();
    *(unsigned char *)(temp_v2 + 0x12c4) = 0;
  }
  FUN_002bf710();
  return;
}
