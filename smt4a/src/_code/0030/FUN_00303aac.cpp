/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303aac` (_code @ 0x303aac, 0x11a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringCopyConstruct(...);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eca44(int);
int FUN_002f6be2(unsigned int, int);
int FUN_002fb008(int, unsigned int);

typedef struct fn_00303aac_arg0 fn_00303aac_arg0;
struct fn_00303aac_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x68];
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0x24];
    undefined4 field_0xa4; /* +0xa4 */
    undefined4 field_0xa8; /* +0xa8 */
    unsigned char pad_0xac[0x18];
    undefined4 field_0xc4; /* +0xc4 */
    undefined4 field_0xc8; /* +0xc8 */
};

typedef int romwright_code(...);
/* stack frame of param_14: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_14_stack;

extern unsigned char LAB_00303bcc; /* 0x303bcc */
extern unsigned char DAT_005592e4; /* 0x5592e4 */

extern int operatorNew(unsigned int);
/* Supplied declaration required: onlineStringCopyConstruct. */
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ec75c(int);
extern unsigned int *FUN_002eca10(fn_00303aac_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_002f6be2. */
extern int FUN_002fafc4(int, unsigned int);
extern int FUN_002fafd8(int, unsigned int);
/* Supplied declaration required: FUN_002fb008. */
extern unsigned int FUN_002fb018(void);


int FUN_00303aac(fn_00303aac_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                unsigned char param_9,int param_10,int param_11,int param_12,unsigned int param_13,
                unsigned int param_14)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [4];
  fn_00303aac_arg0 *pfStack_24;
  unsigned int uStack_20;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  pfStack_24 = param_1;
  uStack_20 = param_2;
  temp_v5 = param_3;
  temp_v6 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v4);
  puVar1[0x1a] = param_2;
  *puVar1 = (unsigned int)&DAT_005592e4;
  puVar1[0x1b] = temp_v5;
  temp_v0 = onlineStringCopyConstruct(puVar1 + 0x1c,temp_v6);
  *(unsigned int *)(temp_v0 + 0xc) = param_6;
  temp_v0 = onlineStringCopyConstruct(temp_v0 + 0x10,param_7);
  *(unsigned char *)(temp_v0 + 8) = param_9;
  temp_v0 = FUN_002fafc4(temp_v0 + 0xc,0);
  temp_v0 = FUN_002fafc4(temp_v0 + 8,0);
  temp_v0 = FUN_002fafc4(temp_v0 + 8,0);
  *(unsigned int *)(temp_v0 + 8) = param_13;
  *(unsigned int *)(temp_v0 + 0xc) = param_14;
  temp_v0 = FUN_002ec75c(temp_v0 + 0x10);
  temp_v1 = temp_v0 + 0x24;
  *(unsigned int *)(temp_v0 + 0x18) = param_8;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  FUN_002eca44(temp_v1);
  temp_v0 = FUN_002fafd8(temp_v1 + 0x60,0);
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  FUN_002f6be2(param_5,temp_v0 - 0xb8);
  if ((param_10 != 0) && (*(int **)(param_10 + 4) != (int *)0x0)) {
    temp_v2 = (**(romwright_code **)(**(int **)(param_10 + 4) + 8))();
    FUN_002fb008(temp_v0 - 0xa4,temp_v2);
  }
  if ((param_11 != 0) && (*(int **)(param_11 + 4) != (int *)0x0)) {
    temp_v2 = (**(romwright_code **)(**(int **)(param_11 + 4) + 8))();
    FUN_002fb008(temp_v0 - 0x9c,temp_v2);
  }
  if ((param_12 != 0) && (*(int **)(param_12 + 4) != (int *)0x0)) {
    temp_v2 = (**(romwright_code **)(**(int **)(param_12 + 4) + 8))();
  }
  else {
    temp_v1 = operatorNew(8);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_002fb018();
    }
  }
  FUN_002fb008(temp_v0 - 0x94,temp_v2);
  temp_v2 = FUN_002ea3c0(temp_v3,0x10fcfd,0,&LAB_00303bcc);
  FUN_002ea3d0(temp_v0 - 0x130,temp_v2);
  *(unsigned char *)(temp_v0 - 0xf8) = 0;
  return temp_v0 - 0x130;
}

} /* extern "C" */
