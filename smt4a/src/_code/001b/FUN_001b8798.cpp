/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8798` (_code @ 0x1b8798, 0x3e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bd12c(unsigned int *, unsigned int, int, int, unsigned int, int, int *);
int FUN_001c398c(...);
int FUN_001c3bb8(...);
int FUN_001cd01c(unsigned int *, unsigned int);
int FUN_002f5020(int, unsigned char *, int, int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern unsigned char LAB_001b8b7c; /* 0x1b8b7c */
extern unsigned char LAB_001b8b84; /* 0x1b8b84 */
extern unsigned char LAB_001b8b8c; /* 0x1b8b8c */
extern unsigned char LAB_001b8b94; /* 0x1b8b94 */
extern unsigned char LAB_001b8b9c; /* 0x1b8b9c */
extern unsigned char LAB_001b8ba4; /* 0x1b8ba4 */
extern unsigned char LAB_001b8bac; /* 0x1b8bac */
extern unsigned char LAB_001bd330; /* 0x1bd330 */

extern int FUN_001af0d0(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_001bd12c. */
extern int FUN_001bd300(void);
/* Supplied declaration required: FUN_001c398c. */
/* Supplied declaration required: FUN_001c3bb8. */
extern unsigned int *FUN_001c3d20(unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_001cd01c. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_001b8798(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *unaff_r5;
  unsigned int *puVar7;
  int temp_v3;
  unsigned int *puVar9;
  int *piVar10;
  
  puVar7 = *(unsigned int **)(*(int *)(param_1 + 0x30) + 0x18);
  temp_v3 = *param_3;
  puVar9 = puVar7 + *(unsigned short *)(*(int *)(param_1 + 0x30) + 0x1c);
  piVar10 = param_2;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    puVar6 = (unsigned int *)*puVar7;
    if (puVar6[1] != 0) {
      temp_v0 = (*param_2 + 3U) & 0xfffffffc;
      if (temp_v0 == 0) {
        unaff_r5 = (unsigned int *)0x0;
      }
      *param_2 = temp_v0 + 0x104;
      if (temp_v0 != 0) {
        temp_v1 = FUN_001bd300();
        temp_v1 = temp_v1 + 0xcc;
        FUN_002f5020(temp_v1,&LAB_001bd330,8,3);
        unaff_r5 = (unsigned int *)(temp_v1 - 0xcc);
        *(unsigned char *)(temp_v1 + 0x18) = 0;
        *(unsigned char *)(temp_v1 + 0x19) = 2;
        *(unsigned char *)(temp_v1 + 0x1a) = 0xff;
        *(unsigned char *)(temp_v1 + 0x1b) = 0xff;
        *(unsigned int *)(temp_v1 + 0x1c) = 0;
        *(unsigned char *)(temp_v1 + 0x20) = 0;
        *(unsigned char *)(temp_v1 + 0x21) = 2;
        *(unsigned char *)(temp_v1 + 0x22) = 0xff;
        *(unsigned char *)(temp_v1 + 0x23) = 0xff;
        *(unsigned int *)(temp_v1 + 0x24) = 0;
        *(unsigned char *)(temp_v1 + 0x28) = 0;
        *(unsigned char *)(temp_v1 + 0x29) = 2;
        *(unsigned char *)(temp_v1 + 0x2a) = 0xff;
        *(unsigned char *)(temp_v1 + 0x2b) = 0xff;
        *(unsigned int *)(temp_v1 + 0x2c) = 0;
        *(unsigned char *)(temp_v1 + 0x30) = 0;
        *(unsigned char *)(temp_v1 + 0x31) = 2;
        *(unsigned char *)(temp_v1 + 0x32) = 0xff;
        *(unsigned char *)(temp_v1 + 0x33) = 0xff;
        *(unsigned int *)(temp_v1 + 0x34) = 0;
      }
      puVar3 = unaff_r5;
      FUN_001cd01c(unaff_r5,*puVar6);
      temp_v0 = 0;
      if (puVar3 != (unsigned int *)0x0) {
        temp_v0 = (*param_2 + 3U) & 0xfffffffc;
        *param_2 = (int)puVar3 + temp_v0;
      }
      FUN_001bd12c(unaff_r5,*puVar6,(int)*(short *)(puVar6 + 8),(int)*(short *)((int)puVar6 + 0x22),
                   temp_v0,param_1,piVar10);
      if (*(short *)((int)puVar6 + 0x22) != -1) {
        *(unsigned char *)(unaff_r5 + 0x28) = 3;
      }
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x33,&LAB_001b8b7c);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x35,&LAB_001b8b84);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x37,&LAB_001b8b8c);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x39,&LAB_001b8b94);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x3b,&LAB_001b8b9c);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x3d,&LAB_001b8ba4);
      FUN_001c3bb8(unaff_r5,unaff_r5 + 0x3f,&LAB_001b8bac);
      puVar3 = unaff_r5;
      FUN_001c398c(unaff_r5,temp_v3);
      temp_v0 = (((int)puVar3 - temp_v3) & 0xfffffffcU) + 8;
      if (((temp_v0 & 0xf) != 0) && (temp_v0 = 4 - ((temp_v0 & 0xf) >> 2), 0 < (int)temp_v0)) {
        puVar5 = puVar3 + -1;
        if ((temp_v0 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + temp_v0;
      }
      temp_v1 = FUN_001af0d0(puVar3,1);
      puVar6[3] = (temp_v1 - temp_v3) >> 2;
      puVar6[2] = temp_v3;
      puVar3 = (unsigned int *)FUN_001c3d20(unaff_r5,temp_v1,0);
      temp_v0 = (((int)puVar3 - temp_v1) & 0xfffffffcU) + 8;
      if (((temp_v0 & 0xf) != 0) && (temp_v0 = 4 - ((temp_v0 & 0xf) >> 2), 0 < (int)temp_v0)) {
        puVar5 = puVar3 + -1;
        if ((temp_v0 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (temp_v3 = (int)temp_v0 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + temp_v0;
      }
      temp_v2 = FUN_001af0d0(puVar3,1);
      puVar6[5] = (temp_v2 - temp_v1) >> 2;
      puVar6[4] = temp_v1;
      puVar3 = (unsigned int *)FUN_001c3d20(unaff_r5,temp_v2,1);
      temp_v0 = (((int)puVar3 - temp_v2) & 0xfffffffcU) + 8;
      if (((temp_v0 & 0xf) != 0) && (temp_v0 = 4 - ((temp_v0 & 0xf) >> 2), 0 < (int)temp_v0)) {
        puVar5 = puVar3 + -1;
        if ((temp_v0 & 1) != 0) {
          *puVar3 = 0;
          puVar5 = puVar3;
        }
        for (temp_v3 = (int)temp_v0 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar3 = puVar3 + temp_v0;
      }
      temp_v3 = FUN_001af0d0(puVar3,1);
      temp_v1 = (temp_v3 - temp_v2) >> 2;
      puVar6[7] = temp_v1;
      puVar6[6] = temp_v2;
      if (param_4 != 0) {
        temp_v1 = param_5;
      }
      if (param_4 != 0 && temp_v1 != 0) {
        puVar6[2] = ((puVar6[2] - param_4) & 0xfffffffcU) + param_5;
        puVar6[4] = ((puVar6[4] - param_4) & 0xfffffffcU) + param_5;
        puVar6[6] = param_5 + ((puVar6[6] - param_4) & 0xfffffffcU);
      }
      puVar6[9] = (unsigned int)unaff_r5;
    }
  }
  *param_3 = temp_v3;
  return;
}

} /* extern "C" */
