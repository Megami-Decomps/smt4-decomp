/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022cd3c` (_code @ 0x22cd3c, 0x5d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_0049375c; /* 0x49375c */

/* Supplied declaration required: FUN_00212394. */
/* Supplied declaration required: FUN_0022d944. */
/* Supplied declaration required: FUN_0022d994. */
/* Supplied declaration required: FUN_0022db5c. */
/* Supplied declaration required: FUN_0022dc40. */
/* Supplied declaration required: FUN_0022dd28. */
/* Supplied declaration required: FUN_0022de40. */
/* Supplied declaration required: FUN_00230e54. */
/* Supplied declaration required: FUN_00231d4c. */
/* Supplied declaration required: FUN_00231d60. */
extern int FUN_002337a0(int);
extern unsigned long long FUN_002338ac(int);
/* Supplied declaration required: FUN_00240e8c. */
extern int FUN_0029ebc4(int);
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_0039fe3c. */


/* WARNING: Removing unreachable block (ram,0x0022d09c) */

void FUN_0022cd3c(int param_1)

{
/* irregular: 1 goto(s); 23 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18 [3];
  
  FUN_00231d4c(param_1 + 200,&temp_v16);
  FUN_0039fe3c(param_1 + 200,temp_v18);
  if (((int)(temp_v16 + temp_v18[0]) < 0x43a00000) && ((unsigned int)(temp_v16 + temp_v18[0]) < 0xc3a00000))
  {
    temp_v16 = *(float *)(param_1 + 0x594);
    temp_v18[0] = temp_v16;
    FUN_00230e54(param_1 + 200,2,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231d60(param_1 + 200,0x4a4,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231d60(param_1 + 200,0x4a5,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231d60(param_1 + 200,0x4a6,0);
    temp_v16 = temp_v18[0];
    temp_v17 = 1.4013e-45f;
    FUN_00231d60(param_1 + 200,0x4a7,0);
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      temp_v16 = temp_v18[0];
      temp_v17 = 1.4013e-45f;
      FUN_00231d60(param_1 + 200,0x4a3,0);
    }
    else {
      temp_v16 = temp_v18[0];
      temp_v17 = 1.4013e-45f;
      FUN_00231d60(param_1 + 200,0x4a2,0);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      temp_v0 = FUN_0029ebc4(param_1 + 0x20);
      temp_v15 = FUN_002338ac(param_1 + 0x20);
      temp_v2 = (int)((unsigned long long)temp_v15 >> 0x20);
      temp_v1 = (int)temp_v15;
      temp_v14 = 1;
      do {
        temp_v11 = 0;
        if (temp_v11 < temp_v1) {
          do {
            if (*(int *)(param_1 + 0x14) == 2) {
              temp_v15 = FUN_00240e8c(param_1 + 0x20);
              temp_v2 = (int)((unsigned long long)temp_v15 >> 0x20);
              if ((int)temp_v15 != temp_v11) goto LAB_0022cec4;
            }
            else {
LAB_0022cec4:
              temp_v12 = *(float *)(param_1 + 0x594);
              temp_v2 = (int)*(short *)(param_1 + 0x5a8 + (temp_v0 + temp_v11) * 0x20 + 4);
              switch(temp_v14) {
              case 1:
                temp_v16 = 0.0f;
                temp_v17 = temp_v12;
                FUN_0022de40(param_1,*(char *)(param_1 + 0x5a4) == '\0',temp_v2,temp_v11);
                temp_v2 = temp_v3;
                break;
              case 2:
                temp_v16 = temp_v12;
                FUN_0022dd28(param_1,temp_v2,temp_v11);
                temp_v2 = temp_v4;
                break;
              case 3:
                temp_v16 = temp_v12;
                FUN_0022dc40(param_1,temp_v2,temp_v11);
                temp_v2 = temp_v5;
                break;
              case 4:
                temp_v17 = *(float *)(temp_v11 * 4 + 0x4935a4);
                temp_v16 = temp_v12;
                FUN_0022db5c(param_1,*(unsigned int *)(temp_v11 * 4 + 0x49357c),temp_v11);
                temp_v2 = temp_v6;
                break;
              case 5:
                if (temp_v11 != 0) {
                  if (*(int *)(temp_v11 * 4 + 0x493758) != (&DAT_0049375c)[temp_v11]) {
                    FUN_002be4dc();
                  }
                }
                else {
                  FUN_002be4dc(DAT_0049375c);
                }
                temp_v16 = (float)(temp_v11 * 0x20 + 0x49361c);
                FUN_00212394(param_1 + 200,*(unsigned int *)(temp_v11 * 4 + 0x4935cc),
                             *(unsigned int *)(temp_v11 * 4 + 0x4935f4),temp_v12);
                temp_v2 = temp_v7;
              }
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v1);
        }
        temp_v14 = temp_v14 + 1;
        if (temp_v14 >= 5) {
          temp_v0 = 0;
          if (temp_v0 < temp_v1) {
            do {
              if ((*(int *)(param_1 + 0x14) == 2) &&
                 (temp_v2 = FUN_00240e8c(param_1 + 0x20,temp_v2), temp_v2 == temp_v0)) {
                if (temp_v0 != 0) {
                  temp_v2 = *(int *)(temp_v0 * 4 + 0x493758);
                  if (temp_v2 != (&DAT_0049375c)[temp_v0]) {
                    FUN_002be4dc();
                    temp_v2 = temp_v8;
                  }
                }
                else {
                  FUN_002be4dc(DAT_0049375c);
                  temp_v2 = temp_v9;
                }
              }
              else {
                temp_v13 = *(unsigned int *)(param_1 + 0x594);
                if (temp_v0 != 0) {
                  if (*(int *)(temp_v0 * 4 + 0x493758) != (&DAT_0049375c)[temp_v0]) {
                    FUN_002be4dc();
                  }
                }
                else {
                  FUN_002be4dc(DAT_0049375c);
                }
                temp_v16 = (float)(temp_v0 * 0x20 + 0x49361c);
                FUN_00212394(param_1 + 200,*(unsigned int *)(temp_v0 * 4 + 0x4935cc),
                             *(unsigned int *)(temp_v0 * 4 + 0x4935f4),temp_v13);
                temp_v2 = temp_v10;
              }
              temp_v0 = temp_v0 + 1;
            } while (temp_v0 < temp_v1);
          }
          FUN_002bef14();
          temp_v2 = *(int *)(param_1 + 0x14);
          if (((temp_v2 == 2 || temp_v2 == 3) || (temp_v2 == 7 || temp_v2 == 4)) ||
             (temp_v2 == 5 || temp_v2 == 8)) {
            temp_v2 = FUN_002337a0(param_1 + 0x20);
            temp_v0 = (int)*(short *)(param_1 + 0x5a8 + temp_v2 * 0x20 + 4);
            temp_v2 = FUN_00240e8c(param_1 + 0x20);
            temp_v12 = (float)(*(int *)(param_1 + 0x594) + 1);
            FUN_0022d994(param_1,temp_v2,temp_v12,(int)*(char *)(param_1 + 0x56d));
            temp_v16 = 1.4013e-45f;
            temp_v17 = temp_v12;
            FUN_0022de40(param_1,*(char *)(param_1 + 0x5a4) == '\0',temp_v0,temp_v2);
            temp_v16 = temp_v12;
            FUN_0022dd28(param_1,temp_v0,temp_v2,1);
            temp_v16 = temp_v12;
            FUN_0022dc40(param_1,temp_v0,temp_v2,1);
            temp_v17 = *(float *)(temp_v2 * 4 + 0x4935a4);
            temp_v16 = temp_v12;
            FUN_0022db5c(param_1,*(unsigned int *)(temp_v2 * 4 + 0x49357c),temp_v2,1);
            FUN_002be4dc((&DAT_0049375c)[temp_v2]);
            temp_v16 = (float)(temp_v2 * 0x20 + 0x49361c);
            FUN_00212394(param_1 + 200,*(unsigned int *)(temp_v2 * 4 + 0x4935cc),
                         *(unsigned int *)(temp_v2 * 4 + 0x4935f4),temp_v12);
            FUN_002bef14();
          }
          FUN_0022d944(param_1,temp_v18[0]);
          return;
        }
      } while( 1 );
    }
  }
  return;
}
