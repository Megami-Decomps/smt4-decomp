/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb5d4` (_code @ 0x3fb5d4, 0x39c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
struct TexNode;

extern "C" {

int textFormatBuffer(...);
int refIsNullOrZero(...);
int asdLoadFileWithSize(...);
int FUN_001883b0(...);
int vcallSlot12IfValid(...);
int sysFatalBreak(...);
int asdMemFree(...);
int asdTextureCreate(...);
int FUN_001f4a98(...);
int FUN_002e3c44(...);
int FUN_003fc294(...);
int aocReleaseObjectBufferAndFlag(...);

typedef struct fn_003fb5d4_arg0 fn_003fb5d4_arg0;
struct fn_003fb5d4_arg0 {
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

extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: refIsNullOrZero. */
extern int FUN_00100836(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: asdLoadFileWithSize. */
extern int FUN_0014afd0(void *, unsigned int);
/* Supplied declaration required: FUN_001883b0. */
/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: sysFatalBreak. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTextureCreate. */
extern int aocRunByName(unsigned int, void *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001f4a98. */
/* Supplied declaration required: FUN_002e3c44. */
extern int FUN_003598c4(void *, unsigned int);
extern TexNode* asdTMTexTableActivateImage(int, int);
/* Supplied declaration required: FUN_003fc294. */
extern int aocTextureRequestHasNewContent(fn_003fb5d4_arg0 *);
/* Supplied declaration required: aocReleaseObjectBufferAndFlag. */


void FUN_003fb5d4(fn_003fb5d4_arg0 *param_1,unsigned int param_2,int param_3)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar8;
  unsigned char *puVar9;
  unsigned short temp_v4 [264];
  char temp_v5 [4];
  unsigned int temp_v6 [6];
  unsigned int temp_v7 [3];
  unsigned char temp_v8 [64];
  int temp_v9;
  unsigned int temp_v10;
  fn_003fb5d4_arg0 *pfStack_30;
  unsigned int temp_v11;
  int iStack_28;
  
  if (param_1->field_0x10 == (void *)0x0) {
    return;
  }
  pfStack_30 = param_1;
  temp_v11 = param_2;
  iStack_28 = param_3;
  if (param_3 != 0) {
    temp_v3 = 0;
    if ((param_2 & 8) != 0) {
      temp_v3 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v3 != 0) {
        temp_v3 = aocLoadTextureNode(g_aocSystem, reinterpret_cast<u32>(param_1->field_0x8), param_1->field_0xc, 0x20000);
      }
      else {
        temp_v3 = FUN_003598c4(param_1->field_0x8,param_1->field_0xc);
      }
    }
    else if ((param_2 & 0x40) != 0) {
      temp_v3 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v3 != 0) {
        temp_v3 = aocLoadTextureNode(g_aocSystem, reinterpret_cast<u32>(param_1->field_0x8), param_1->field_0xc, 0x30000);
      }
      else {
        temp_v3 = (int)asdTMTexTableActivateImage((int)param_1->field_0x8,(int)param_1->field_0xc);
      }
    }
    else if ((param_2 & 1) != 0) {
      temp_v3 = aocRunByName(g_aocSystem,param_1->field_0x8,param_1->field_0xc,1);
      if (temp_v3 != 0) {
        temp_v3 = aocLoadTextureNode(g_aocSystem, reinterpret_cast<u32>(param_1->field_0x8), param_1->field_0xc, 0x10000);
      }
      else {
        temp_v3 = FUN_0014afd0(param_1->field_0x8,param_1->field_0xc);
      }
    }
    temp_v0 = aocTextureRequestHasNewContent(param_1);
    if (temp_v0 != 0) {
      aocReleaseObjectBufferAndFlag(param_1);
    }
    temp_v1 = *(unsigned int *)(temp_v3 + 8);
    temp_v2 = param_1->field_0xc;
    param_1->field_0x3d = 1;
    if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
      pvVar2 = param_1->field_0x14;
      *(unsigned int *)((int)pvVar2 + 0x18) = temp_v1;
      *(unsigned int *)((int)pvVar2 + 0x1c) = temp_v2;
    }
  }
  else {
    temp_v6[0] = 0;
    temp_v6[1] = 0;
    temp_v6[2] = 0;
    temp_v6[3] = 0;
    temp_v6[4] = 0;
    temp_v3 = 0;
    temp_v5[0] = 'D';
    temp_v5[1] = -0x7f;
    temp_v5[2] = 'U';
    temp_v5[3] = '\0';
    if (*(short *)((int)param_1->field_0x10 + 4) != 0) {
      do {
        textFormatBuffer(temp_v8,"battle/devil/%s.bcmdl",(void *)((int)param_1->field_0x14 + temp_v3 * 0x20));
        puVar9 = temp_v8;
        puVar4 = temp_v6;
        temp_v9 = 0;
        temp_v10 = 0;
        refIsNullOrZero(&temp_v9);
        puVar8 = temp_v4;
        while ((temp_v0 = FUN_00100836(puVar9,0x105,(unsigned int *)&temp_v9), temp_v0 != 0 &&
               (puVar3 = puVar8, FUN_002e3c44(puVar8,puVar9,temp_v0,&temp_v9),
               puVar3 != (unsigned short *)0x0))) {
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + temp_v0;
        }
        *puVar8 = 0;
        temp_v6[3] = 0;
        temp_v6[4] = 0;
        temp_v6[1] = 0;
        temp_v6[2] = 0;
        FUN_001883b0(puVar4,temp_v4,1);
        if ((temp_v6[0] & 0xfffffffe) != 0) {
          if ((temp_v6[0] & 1) != 0) {
            sysFatalBreak();
          }
          vcallSlot12IfValid(temp_v6[0] & 0xfffffffe);
          temp_v6[0] = 0;
        }
        if (-1 < (int)puVar4) {
          temp_v0 = 0;
          asdTextureCreate();
          puVar9 = temp_v8;
          asdLoadFileWithSize(puVar9,temp_v7,0);
          FUN_001f4a98(temp_v0,puVar9,temp_v7[0]);
          if ((temp_v11 & 8) != 0) {
            *(unsigned int *)(temp_v0 + 8) = 0x20000;
            *(unsigned int *)(temp_v0 + 0xc) = 0x1000000;
          }
          else if ((temp_v11 & 0x40) != 0) {
            temp_v1 = 0x30000;
            temp_v2 = 0x1000000;
            *(unsigned int *)(temp_v0 + 8) = temp_v1;
            *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
          }
          else if ((temp_v11 & 1) != 0) {
            temp_v1 = 0x10000;
            temp_v2 = 0x2000000;
            *(unsigned int *)(temp_v0 + 8) = temp_v1;
            *(unsigned int *)(temp_v0 + 0xc) = temp_v2;
          }
          asdTextureSetImage((AsdTexture*)temp_v0);
          asdMemFree(puVar9);
          param_1->field_0x3d = 1;
          if (temp_v3 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4)) {
            pvVar2 = param_1->field_0x14;
            *(int *)((int)pvVar2 + temp_v3 * 0x20 + 0x18) = temp_v0;
            *(unsigned int *)((int)pvVar2 + temp_v3 * 0x20 + 0x1c) = 0xffffffff;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)(unsigned int)*(unsigned short *)((int)param_1->field_0x10 + 4));
    }
    if ((temp_v6[0] & 0xfffffffe) != 0) {
      if ((temp_v6[0] & 1) != 0) {
        sysFatalBreak();
      }
      vcallSlot12IfValid(temp_v6[0] & 0xfffffffe);
      temp_v6[0] = 0;
    }
  }
  FUN_003fc294(param_1,1);
  return;
}

} /* extern "C" */
