/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b6bc4` (_code @ 0x4b6bc4, 0x3e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [32], unsigned char *, int);
int FUN_001b4a74(int);
int FUN_00275f44(unsigned int, unsigned int);
int FUN_002e6354(char [256], int);
int FUN_0046eb24(int, int);
int FUN_00470080(int, int, int);
int FUN_004b75d0(...);
int FUN_004b9ff4(...);
int FUN_004ba83c(int, int);
int FUN_004baa7c(int, int, int);
int FUN_004bad28(...);
int FUN_004bb064(int);
int FUN_004bb140(void);
int FUN_004bb158(unsigned char *, unsigned int);
int VectorSignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char DAT_005328fc; /* 0x5328fc */
extern int DAT_00570280; /* 0x570280 */
extern int DAT_0058800c; /* 0x58800c */
extern int DAT_005f1b78; /* 0x5f1b78 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_001b4a74. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0032482c(void);
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0046eb24. */
/* Supplied declaration required: FUN_00470080. */
/* Supplied declaration required: FUN_004b75d0. */
/* Supplied declaration required: FUN_004b9ff4. */
extern int FUN_004ba790(int);
/* Supplied declaration required: FUN_004ba83c. */
/* Supplied declaration required: FUN_004baa7c. */
/* Supplied declaration required: FUN_004bad28. */
/* Supplied declaration required: FUN_004bb064. */
extern int FUN_004bb0bc(unsigned char *, unsigned int);
extern int FUN_004bb0f8(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bb140. */
/* Supplied declaration required: FUN_004bb158. */


void FUN_004b6bc4(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  char acStack_168 [256];
  unsigned int temp_v8;
  unsigned char temp_v9 [32];
  unsigned char temp_v10 [20];
  
  temp_v0 = FUN_004bb0bc(temp_v10,0);
  puVar2 = temp_v10;
  FUN_004bb140();
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x1118) = 0;
  if (0 < (int)puVar2) {
    do {
      if (*(char *)(temp_v0 + temp_v1 * 0x88) == param_2) {
        *(int *)(param_1 + 0x1118) = temp_v0 + temp_v1 * 0x88;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  FUN_001b4a74(param_1 + 0x9c);
  if (param_3 != -1) {
    *(int *)(param_1 + 0x1120) = param_3;
  }
  else {
    *(int *)(param_1 + 0x1120) = (int)*(char *)(*(int *)(param_1 + 0x1118) + 1);
  }
  temp_v0 = FUN_004bb0f8(temp_v10,*(unsigned int *)(param_1 + 0x1120),0);
  puVar2 = temp_v10;
  FUN_004bb158(puVar2,*(unsigned int *)(param_1 + 0x1120));
  FUN_002e6354(acStack_168,0x100);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar2) {
    do {
      temp_v3 = temp_v0 + temp_v1 * 0xd0;
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_168[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0x114c);
        temp_v8 = *(unsigned int *)(param_1 + 0x1144);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0058800c = 0;
          FUN_00100388(temp_v9,&DAT_005328fc,temp_v3 + 0x2c);
          temp_v5 = FUN_00357bc8(temp_v8,temp_v9);
          FUN_00275f44(temp_v4,temp_v5);
          do {
            temp_v2 = FUN_00224880(temp_v4);
          } while (temp_v2 != 2);
          if (DAT_0058800c != 0) goto LAB_004b6d80;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_0018719c(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))) {
          acStack_168[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_004baa7c(param_1 + 0x9c,temp_v3,param_2);
        }
      }
LAB_004b6d80:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  temp_v0 = DAT_00570280;
  FUN_0046eb24(DAT_00570280,*(int *)(param_1 + 0x1120) + 1);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      temp_v3 = DAT_00570280;
      FUN_00470080(DAT_00570280,*(int *)(param_1 + 0x1120) + 1,temp_v1);
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_168[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0x1144);
        temp_v5 = *(unsigned int *)(param_1 + 0x114c);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0058800c = 0;
          FUN_00100388(temp_v9,&DAT_005328fc,temp_v3 + 0x2c);
          temp_v4 = FUN_00357bc8(temp_v4,temp_v9);
          FUN_00275f44(temp_v5,temp_v4);
          do {
            temp_v2 = FUN_00224880(temp_v5);
          } while (temp_v2 != 2);
          if (DAT_0058800c != 0) goto LAB_004b6ea0;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = FUN_0018719c(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = FUN_0018719c(), temp_v2 == 0)))) {
          acStack_168[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_004baa7c(param_1 + 0x9c,temp_v3,param_2);
        }
      }
LAB_004b6ea0:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_004bb064(param_1 + 0x9c);
  temp_v1 = FUN_0032482c();
  temp_v0 = -1;
  if (temp_v1 != 0) {
    temp_v0 = DAT_005f1b78;
  }
  if (*(short *)(param_1 + 0x40) != 0) {
    temp_v0 = (int)*(short *)(param_1 + 0x40);
  }
  if (temp_v0 != -1) {
    FUN_004ba83c(param_1 + 0x9c,temp_v0);
  }
  temp_v0 = FUN_004ba790(param_1 + 0x9c);
  temp_v1 = (int)*(short *)(temp_v0 + 0x22);
  temp_v0 = (int)*(short *)(temp_v0 + 0x24);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
  temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x68) = temp_v7 - 200.0f;
  *(float *)(param_1 + 0x6c) = temp_v6 - 120.0f;
  FUN_004b9ff4(param_1,param_1 + 0x60);
  FUN_004b9ff4(param_1,param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
  temp_v5 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x80) = temp_v5;
  *(unsigned int *)(param_1 + 0x84) = temp_v4;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 1;
  FUN_004b75d0(param_1);
  FUN_004bad28(param_1 + 0x9c);
  return;
}

} /* extern "C" */
