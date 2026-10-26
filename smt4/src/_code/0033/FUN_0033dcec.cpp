#include "code/Code002a.h"
/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033dcec` (_code @ 0x33dcec, 0x398 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "addon/aocMain.h"

extern "C" {

int FUN_0017fa3c(...);
int refIsNullOrZero(...);
int FUN_002bb5a4(...);
int asdTextureCreate(...);
int textFormatBuffer(...);
int asdMemFree(...);
int asdFatalError(...);
int FUN_002c618c(...);
int FUN_0033e8a8(...);
int resourceReleaseAllocationAndDispatchUpdate(...);
int builtin_strncpy(...);

typedef struct fn_0033dcec_arg0 fn_0033dcec_arg0;
struct fn_0033dcec_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x25];
    undefined1 field_0x3d; /* +0x3d */
};

/* stack frame of param_3: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_3_stack;

extern unsigned char LAB_0033e08c; /* 0x33e08c */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_0017fa3c. */
extern int aocRunByName(unsigned int, void *, unsigned int, unsigned int);
extern int FUN_002b90c8(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: refIsNullOrZero. */
/* Supplied declaration required: FUN_002bb5a4. */
/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int fileLoadSync(unsigned char *, unsigned int *, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdFatalError. */
extern int FUN_002c58c8(void *, unsigned int);
/* Supplied declaration required: FUN_002c618c. */
extern int FUN_002e151c(void *, unsigned int);
extern int asdTMTexTableActivateImage(void *, unsigned int);
/* Supplied declaration required: FUN_0033e8a8. */
extern int aocTextureRequestHasNewContent(fn_0033dcec_arg0 *);
/* Supplied declaration required: resourceReleaseAllocationAndDispatchUpdate. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


void FUN_0033dcec(fn_0033dcec_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short *puVar9;
  unsigned char *puVar10;
  unsigned short temp_v5 [264];
  char temp_v6 [4];
  unsigned int temp_v7 [6];
  unsigned int temp_v8 [3];
  unsigned char temp_v9 [64];
  int temp_v10;
  unsigned int temp_v11;
  fn_0033dcec_arg0 *pfStack_30;
  unsigned int temp_v12;
  int iStack_28;
  
  if (param_1->field_0x10 == (void *)0x0) {
    return;
  }
  pfStack_30 = param_1;
  temp_v12 = param_2;
  iStack_28 = param_3;
  if (param_3 != 0) {
    temp_v4 = 0;
    if ((param_2 & 8) != 0) {
      temp_v4 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v4 != 0) {
        temp_v4 = FUN_002ae8e4(g_aocSystem,reinterpret_cast<u32>(param_1->field_0x8),param_1->field_0xc,0x20000);
      }
      else {
        temp_v4 = FUN_002e151c(param_1->field_0x8,param_1->field_0xc);
      }
    }
    else if ((param_2 & 0x40) != 0) {
      temp_v4 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v4 != 0) {
        temp_v4 = FUN_002ae8e4(g_aocSystem,reinterpret_cast<u32>(param_1->field_0x8),param_1->field_0xc,0x30000);
      }
      else {
        temp_v4 = asdTMTexTableActivateImage(param_1->field_0x8,param_1->field_0xc);
      }
    }
    else if ((param_2 & 1) != 0) {
      temp_v4 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v4 != 0) {
        temp_v4 = FUN_002ae8e4(g_aocSystem,reinterpret_cast<u32>(param_1->field_0x8),param_1->field_0xc,0x10000);
      }
      else {
        temp_v4 = FUN_002c58c8(param_1->field_0x8,param_1->field_0xc);
      }
    }
    temp_v0 = aocTextureRequestHasNewContent(param_1);
    if (temp_v0 != 0) {
      resourceReleaseAllocationAndDispatchUpdate(param_1);
    }
    temp_v1 = *(unsigned int *)(temp_v4 + 8);
    temp_v3 = param_1->field_0xc;
    param_1->field_0x3d = 1;
    if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
      pvVar2 = param_1->field_0x14;
      *(unsigned int *)((int)pvVar2 + 0x18) = temp_v1;
      *(unsigned int *)((int)pvVar2 + 0x1c) = temp_v3;
    }
  }
  else {
    temp_v7[0] = 0;
    temp_v7[1] = 0;
    temp_v7[2] = 0;
    temp_v7[3] = 0;
    temp_v7[4] = 0;
    temp_v4 = 0;
    builtin_strncpy(temp_v6,"h\fB",4);
    if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
      do {
        textFormatBuffer(temp_v9,&LAB_0033e08c,(void *)((int)param_1->field_0x14 + temp_v4 * 0x20));
        puVar10 = temp_v9;
        puVar4 = temp_v7;
        temp_v10 = 0;
        temp_v11 = 0;
        refIsNullOrZero(&temp_v10);
        puVar9 = temp_v5;
        while ((temp_v0 = FUN_002b90c8(puVar10,0x105,(unsigned int *)&temp_v10), temp_v0 != 0 &&
               (puVar3 = puVar9, FUN_002c618c(puVar9,puVar10,temp_v0,&temp_v10),
               puVar3 != (unsigned short *)0x0))) {
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + temp_v0;
        }
        *puVar9 = 0;
        temp_v7[3] = 0;
        temp_v7[4] = 0;
        temp_v7[1] = 0;
        temp_v7[2] = 0;
        FUN_002bb5a4(puVar4,temp_v5,1);
        if ((temp_v7[0] & 0xfffffffe) != 0) {
          if ((temp_v7[0] & 1) != 0) {
            asdFatalError();
          }
          nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v7[0] & 0xfffffffe);
          temp_v7[0] = 0;
        }
        if (-1 < (int)puVar4) {
          temp_v0 = 0;
          asdTextureCreate();
          temp_v1 = fileLoadSync(temp_v9,temp_v8,0);
          FUN_0017fa3c(temp_v0,temp_v1,temp_v8[0]);
          if ((temp_v12 & 8) != 0) {
            *(unsigned int *)(temp_v0 + 8) = 0x20000;
            *(unsigned int *)(temp_v0 + 0xc) = 0x1000000;
          }
          else if ((temp_v12 & 0x40) != 0) {
            temp_v3 = 0x30000;
            temp_v2 = 0x1000000;
            *(unsigned int *)(temp_v0 + 8) = temp_v3;
            *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
          }
          else if ((temp_v12 & 1) != 0) {
            temp_v3 = 0x10000;
            temp_v2 = 0x2000000;
            *(unsigned int *)(temp_v0 + 8) = temp_v3;
            *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
          }
          asdTextureSetImage((AsdTexture*)temp_v0);
          asdMemFree(temp_v1);
          param_1->field_0x3d = 1;
          if (temp_v4 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4)) {
            pvVar2 = param_1->field_0x14;
            *(int *)((int)pvVar2 + temp_v4 * 0x20 + 0x18) = temp_v0;
            *(unsigned int *)((int)pvVar2 + temp_v4 * 0x20 + 0x1c) = 0xffffffff;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4));
    }
    if ((temp_v7[0] & 0xfffffffe) != 0) {
      if ((temp_v7[0] & 1) != 0) {
        asdFatalError();
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v7[0] & 0xfffffffe);
      temp_v7[0] = 0;
    }
  }
  FUN_0033e8a8(param_1);
  return;
}

} /* extern "C" */
