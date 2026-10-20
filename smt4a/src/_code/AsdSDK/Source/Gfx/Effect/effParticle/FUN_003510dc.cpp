/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003510dc` (_code @ 0x3510dc, 0x4b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resourceDestroy(unsigned int);
int memAlloc(...);
int asdTextureRelease(...);
int resourceListDestroy(...);
int asdMemFree(...);
int FUN_001abbc4(void);
int refCountIncrement(...);
int FUN_00221f20(void);
int handleBlockRefDrop(void);
int FUN_00222180(void);
int effTlpCreate(void);
int handleBlockUnref(void);
int FUN_00243c24(void);
int FUN_00291038(void);
int FUN_002b2d74(unsigned int, unsigned int, unsigned int);
int objectBufferFree(void);
int rt_memclr(void);
int FUN_0035105c(...);
int asdEffectTextureCreate(void);
int VectorSignedToFloat(...);

typedef struct fn_003510dc_arg0 fn_003510dc_arg0;
struct fn_003510dc_arg0 {
    unsigned char pad_0x0[0xc];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xe];
    ushort field_0x1c; /* +0x1c */
    unsigned char pad_0x1e[0x2];
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x90];
    undefined4 field_0xb8; /* +0xb8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: resourceDestroy. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdTextureRelease. */
/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001abbc4. */
/* Supplied declaration required: refCountIncrement. */
/* Supplied declaration required: FUN_00221f20. */
/* Supplied declaration required: handleBlockRefDrop. */
/* Supplied declaration required: FUN_00222180. */
/* Supplied declaration required: effTlpCreate. */
/* Supplied declaration required: handleBlockUnref. */
/* Supplied declaration required: FUN_00243c24. */
extern unsigned int *FUN_002721e4(fn_003510dc_arg0 *);
/* Supplied declaration required: FUN_00291038. */
/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
extern unsigned int FUN_002b41c4(void);
/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: FUN_0035105c. */
extern int FUN_0037a7f4(unsigned int *);
extern int FUN_0037a834(unsigned int);
/* Supplied declaration required: asdEffectTextureCreate. */


unsigned int * FUN_003510dc(fn_003510dc_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 20 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  
  temp_v0 = FUN_002b41c4();
  temp_v1 = *(int *)(temp_v0 + 0x20);
  if (temp_v1 == 0) {
    temp_v1 = *(int *)(temp_v0 + 0xb8);
  }
  temp_v3 = temp_v1 * *(int *)(temp_v0 + 0x24);
  if (temp_v3 >= 301) {
    temp_v3 = 300;
  }
  puVar3 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x5c,0x10,1);
  rt_memclr();
  puVar3[1] = 0xffffffff;
  *puVar3 = temp_v3;
  puVar3[2] = 0x3f800000;
  temp_v3 = (unsigned int)param_1->field_0xc;
  if (puVar3[0x13] != 0) {
    objectBufferFree();
  }
  FUN_002b2d74(temp_v3,*puVar3,temp_v0);
  puVar3[0x13] = temp_v3;
  *(unsigned char *)((int)puVar3 + 0xe) = *(unsigned char *)((int)puVar3 + 0xe) | 1;
  if ((*puVar3 != 0) && (puVar4 = (unsigned int *)FUN_002721e4(param_1), puVar4 != (unsigned int *)0x0)) {
    switch(param_1->field_0x1c) {
    case 1:
      FUN_0035105c(puVar3,*(unsigned int *)(puVar3[0x13] + 8),1);
      temp_v1 = FUN_0037a7f4(puVar4);
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      puVar3[0x15] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      *(int *)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = temp_v1;
      refCountIncrement(temp_v1);
      asdTextureRelease(temp_v1);
      break;
    case 2:
      FUN_0035105c(puVar3,*(unsigned int *)(puVar3[0x13] + 8),2);
      if (puVar3[0x11] != 0) {
        handleBlockRefDrop();
      }
      FUN_00221f20();
      puVar3[0x11] = (unsigned int)puVar4;
      break;
    case 4:
      FUN_0035105c(puVar3,*(unsigned int *)(puVar3[0x13] + 8),4);
      temp_v1 = FUN_0037a834(*puVar4 & 0xffff);
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      puVar3[0x15] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      *(int *)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = temp_v1;
      refCountIncrement();
      break;
    case 5:
      temp_v3 = puVar3[0x13];
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned int *)(temp_v3 + 8);
      }
      if (temp_v3 == 0) {
        temp_v0 = *puVar3;
      }
      if (puVar3[0xe] != 0) {
        temp_v3 = 0;
        if (temp_v3 < temp_v0) {
          do {
            resourceDestroy(*(unsigned int *)(puVar3[0xd] + temp_v3 * 4));
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        asdMemFree(puVar3[0xe]);
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
      }
      if (temp_v0 << 2 != 0) {
        temp_v3 = 0x10000;
        memAlloc(0x10000,0x100,0,temp_v0 << 2,0x10,1);
        puVar3[0xe] = temp_v3;
        puVar3[0xd] = temp_v3;
        FUN_00243c24();
        temp_v3 = 1;
        *(unsigned int **)puVar3[0xd] = puVar4;
        if (temp_v0 >= 2) {
          do {
            temp_v2 = *(unsigned int *)puVar3[0xd];
            FUN_00222180();
            *(unsigned int *)(puVar3[0xd] + temp_v3 * 4) = temp_v2;
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
      }
      break;
    case 6:
      temp_v3 = puVar3[0x13];
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned int *)(temp_v3 + 8);
      }
      if (temp_v3 == 0) {
        temp_v0 = *puVar3;
      }
      if (puVar3[0x10] != 0) {
        temp_v3 = 0;
        if (temp_v3 < temp_v0) {
          do {
            resourceListDestroy(*(unsigned int *)(puVar3[0xf] + temp_v3 * 4));
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        asdMemFree(puVar3[0x10]);
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
      }
      if (temp_v0 << 2 != 0) {
        temp_v3 = 0x10000;
        memAlloc(0x10000,0x100,0,temp_v0 << 2,0x10,1);
        puVar3[0x10] = temp_v3;
        puVar3[0xf] = temp_v3;
        FUN_001abbc4();
        temp_v3 = 1;
        *(unsigned int **)puVar3[0xf] = puVar4;
        if (temp_v0 >= 2) {
          do {
            temp_v2 = *(unsigned int *)puVar3[0xf];
            FUN_00291038();
            *(unsigned int *)(puVar3[0xf] + temp_v3 * 4) = temp_v2;
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
      }
      break;
    case 7:
      FUN_0035105c(puVar3,*(unsigned int *)(puVar3[0x13] + 8),7);
      if (puVar3[0x12] != 0) {
        handleBlockUnref();
      }
      effTlpCreate();
      puVar3[0x12] = (unsigned int)puVar4;
      break;
    case 9:
      FUN_0035105c(puVar3,*(unsigned int *)(puVar3[0x13] + 8),9);
      asdEffectTextureCreate();
      temp_v5 = (float)VectorSignedToFloat(puVar4[5],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (float)VectorSignedToFloat(puVar4[6],(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[0x15] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      *(unsigned int **)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = puVar4;
      refCountIncrement(puVar4);
      asdTextureRelease(puVar4);
    }
    *(unsigned short *)(puVar3 + 3) = param_1->field_0x1c;
  }
  return puVar3;
}

} /* extern "C" */
