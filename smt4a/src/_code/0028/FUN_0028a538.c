/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a538` (_code @ 0x28a538, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
} param_3_stack;

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_0032fea0. */
/* Supplied declaration required: FUN_0032ff20. */
/* Supplied declaration required: FUN_0034c340. */
/* Supplied declaration required: FUN_003c3f1c. */
/* Supplied declaration required: FUN_004bd21c. */


void FUN_0028a538(unsigned short *param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [300];
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned short *temp_v12;
  int iStack_2c;
  int iStack_28;
  
  temp_v0 = DAT_0057f290;
  temp_v5 = 0;
  temp_v7 = 0;
  temp_v12 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  FUN_00184310();
  *(unsigned int *)(temp_v0 + 0x8b70) = 0;
  *(unsigned int *)(temp_v0 + 0x8b74) = 0;
  *(unsigned int *)(temp_v0 + 0x8b78) = 0;
  *(unsigned int *)(temp_v0 + 0x8b7c) = 0;
  *(unsigned int *)(temp_v0 + 0x8b80) = 0;
  *(unsigned int *)(temp_v0 + 0x8b84) = 0;
  *(unsigned int *)(temp_v0 + 0x8b88) = 0;
  *(unsigned int *)(temp_v0 + 0x8b8c) = 0;
  *(unsigned int *)(temp_v0 + 0x8b90) = 0;
  *(unsigned int *)(temp_v0 + 0x8b94) = 0;
  *(unsigned int *)(temp_v0 + 0x8b98) = 0;
  *(unsigned int *)(temp_v0 + 0x8b9c) = 0;
  *(unsigned int *)(temp_v0 + 0x8c30) = 0;
  *(unsigned int *)(temp_v0 + 0x8c34) = 0;
  *(unsigned int *)(temp_v0 + 0x8c38) = 0;
  *(unsigned int *)(temp_v0 + 0x8c3c) = 0;
  *(unsigned int *)(temp_v0 + 0x8c40) = 0;
  *(unsigned int *)(temp_v0 + 0x8c44) = 0;
  *(unsigned int *)(temp_v0 + 0x8c48) = 0;
  *(unsigned int *)(temp_v0 + 0x8c4c) = 0;
  *(unsigned int *)(temp_v0 + 0x8c50) = 0;
  *(unsigned int *)(temp_v0 + 0x8c54) = 0;
  *(unsigned int *)(temp_v0 + 0x8c58) = 0;
  *(unsigned int *)(temp_v0 + 0x8c5c) = 0;
  temp_v8 = temp_v0 + 0x8b70;
  temp_v9 = temp_v0 + 0x8c30;
  temp_v3 = 0;
  do {
    temp_v4 = param_2 + temp_v3 * 2;
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v4 + 0x34);
    if (temp_v1 != 0) {
      FUN_003c3f1c();
      if ((*(unsigned char *)(temp_v1 + 3) & 0x20) != 0) {
        temp_v2 = temp_v8;
        FUN_0032fea0(temp_v8,0x18,*(unsigned short *)(temp_v4 + 0x34));
        if (temp_v2 == 0) {
          puVar4 = param_1 + 0x20;
          FUN_0032fea0(puVar4,8,*(unsigned short *)(temp_v4 + 0x34));
          if (puVar4 == (unsigned short *)0x0) {
            temp_v2 = temp_v7 * 2;
            temp_v7 = temp_v7 + 1;
            *(unsigned short *)(temp_v0 + temp_v2 + 0x8b70) = *(unsigned short *)(temp_v4 + 0x34);
          }
        }
        if ((*(unsigned char *)(temp_v1 + 3) & 0x20) != 0) goto LAB_0028a6c4;
      }
      temp_v2 = temp_v9;
      FUN_0032fea0(temp_v9,0x18,*(unsigned short *)(temp_v4 + 0x34));
      if (temp_v2 == 0) {
        puVar4 = param_1 + 0x20;
        FUN_0032fea0(puVar4,8,*(unsigned short *)(temp_v4 + 0x34));
        if (puVar4 == (unsigned short *)0x0) {
          temp_v2 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)(temp_v0 + temp_v2 + 0x8c30) = *(unsigned short *)(temp_v4 + 0x34);
        }
      }
    }
LAB_0028a6c4:
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  temp_v3 = 0;
  do {
    temp_v4 = param_3 + temp_v3 * 2;
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v4 + 0x34);
    if (temp_v1 != 0) {
      FUN_003c3f1c();
      if ((*(unsigned char *)(temp_v1 + 3) & 0x20) != 0) {
        temp_v2 = temp_v8;
        FUN_0032fea0(temp_v8,0x18,*(unsigned short *)(temp_v4 + 0x34));
        if (temp_v2 == 0) {
          puVar4 = param_1 + 0x20;
          FUN_0032fea0(puVar4,8,*(unsigned short *)(temp_v4 + 0x34));
          if (puVar4 == (unsigned short *)0x0) {
            temp_v2 = temp_v7 * 2;
            temp_v7 = temp_v7 + 1;
            *(unsigned short *)(temp_v0 + temp_v2 + 0x8b70) = *(unsigned short *)(temp_v4 + 0x34);
          }
        }
        if ((*(unsigned char *)(temp_v1 + 3) & 0x20) != 0) goto LAB_0028a7a8;
      }
      temp_v2 = temp_v9;
      FUN_0032fea0(temp_v9,0x18,*(unsigned short *)(temp_v4 + 0x34));
      if (temp_v2 == 0) {
        puVar4 = param_1 + 0x20;
        FUN_0032fea0(puVar4,8,*(unsigned short *)(temp_v4 + 0x34));
        if (puVar4 == (unsigned short *)0x0) {
          temp_v2 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)(temp_v0 + temp_v2 + 0x8c30) = *(unsigned short *)(temp_v4 + 0x34);
        }
      }
    }
LAB_0028a7a8:
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 8) {
      temp_v11 = (((unsigned int)temp_v12 & 0x3fff7fff) << 2) | (temp_v11 & 0xfffe0000) | 1;
      temp_v10 = ((*(unsigned short *)(param_3 + 0x62) & 0x7fff) << 0xf) |
                 (*(unsigned short *)(param_2 + 0x62) & 0xffff7fff) | 0x40000000;
      FUN_00203b40(temp_v0 + 0x8e14,temp_v7,8,1,1,1);
      FUN_0034c340(temp_v8,temp_v7,&temp_v10,0);
      FUN_0034c340(temp_v9,temp_v5,&temp_v10,0);
      FUN_0032ff20(*param_1,temp_v6);
      FUN_004bd21c(temp_v6);
      return;
    }
  } while( 1 );
}
