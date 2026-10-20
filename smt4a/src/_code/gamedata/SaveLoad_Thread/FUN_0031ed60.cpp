/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ed60` (_code @ 0x31ed60, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014a930(...);
int memAlloc(...);
int resultReportIfFailed(...);
int FUN_0019a364(...);
int FUN_002e3140(...);
int FUN_002fb0d4(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int FUN_00349b38(...); /* 0x349b38 */
extern int FUN_00349ca4(...); /* 0x349ca4 */
extern int FUN_00349e60(...); /* 0x349e60 */
extern int FUN_00371100(...); /* 0x371100 */
extern unsigned char LAB_00514a34; /* 0x514a34 */
extern unsigned char LAB_00514af0; /* 0x514af0 */
extern unsigned char LAB_00514b78; /* 0x514b78 */

/* Supplied declaration required: FUN_0014a930. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: resultReportIfFailed. */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */
extern int FUN_0032c8c8(unsigned int);


unsigned char FUN_0031ed60(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int temp_v4 [2];
  int temp_v5;
  int temp_v6;
  unsigned char *puStack_2c;
  unsigned char *puStack_28;
  unsigned char *puStack_24;
  
  piVar2 = &temp_v3;
  *(char *)(param_1 + 1) = (char)param_2;
  temp_v4[0] = 0;
  temp_v2 = 0xe7e3ffff;
  if (*(int *)(param_1 + 0x4c) != 0) {
    puVar1 = (unsigned int *)0xe0a0183b;
  }
  else {
    puVar1 = temp_v4;
    FUN_0014a930(puVar1,0,1);
    if (-1 < (int)puVar1) {
      puVar1 = (unsigned int *)0x0;
      *(unsigned int *)(param_1 + 0x4c) = temp_v4[0];
    }
  }
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  FUN_0019a364(&temp_v3,*(unsigned int *)(param_1 + 0x4c),1);
  if ((int)piVar2 < 0) {
    FUN_002e3140();
  }
  temp_v3 = 0x1000;
  uStack_44 = 1;
  temp_v0 = 0x100;
  memAlloc(0x100,0x100,0,0x2000);
  *(unsigned int *)(param_1 + 0x28) = temp_v0;
  resultReportIfFailed(param_1 + 0x2c,temp_v0,0x2000);
  if (param_2 != 1) {
    if (!((param_2 == 0 || param_2 == 3) || param_2 == 5)) {
      if (param_2 != 2) {
        if (param_2 != 4) {
          temp_v1 = FUN_0032c8c8(temp_v2);
          return temp_v1 == 0;
        }
        temp_v6 = 4;
        puStack_2c = &LAB_00514a34;
        puStack_28 = &LAB_00514b78;
        puStack_24 = &LAB_00514af0;
        temp_v2 = param_1 + 0x44;
        temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
        uStack_44 = 0x11;
        uStack_40 = 0xfffffffe;
        temp_v4[0] = 0;
        temp_v5 = param_1;
        FUN_002fb0d4(temp_v2,&temp_v6,FUN_00349e60,&temp_v5);
      }
      else {
        temp_v6 = 4;
        puStack_2c = &LAB_00514a34;
        puStack_28 = &LAB_00514b78;
        puStack_24 = &LAB_00514af0;
        temp_v2 = param_1 + 0x44;
        temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
        uStack_44 = 0x11;
        uStack_40 = 0xfffffffe;
        temp_v4[0] = 0;
        temp_v5 = param_1;
        FUN_002fb0d4(temp_v2,&temp_v6,FUN_00349ca4,&temp_v5);
      }
    }
    else {
      temp_v6 = 4;
      puStack_2c = &LAB_00514a34;
      puStack_28 = &LAB_00514b78;
      puStack_24 = &LAB_00514af0;
      temp_v2 = param_1 + 0x44;
      temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
      uStack_44 = 0x11;
      uStack_40 = 0xfffffffe;
      temp_v4[0] = 0;
      temp_v5 = param_1;
      FUN_002fb0d4(temp_v2,&temp_v6,FUN_00349b38,&temp_v5);
    }
  }
  else {
    temp_v6 = 4;
    puStack_2c = &LAB_00514a34;
    puStack_28 = &LAB_00514b78;
    puStack_24 = &LAB_00514af0;
    temp_v2 = param_1 + 0x44;
    temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
    uStack_44 = 0x11;
    uStack_40 = 0xfffffffe;
    temp_v4[0] = 0;
    temp_v5 = param_1;
    FUN_002fb0d4(temp_v2,&temp_v6,FUN_00371100,&temp_v5);
  }
  if (((temp_v2 & 0x7e00000) != 0x600000) && ((int)temp_v2 < 0)) {
    FUN_002e3140(temp_v2);
  }
  temp_v1 = FUN_0032c8c8(temp_v2);
  return temp_v1 == 0;
}

} /* extern "C" */
