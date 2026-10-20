/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de490` (_code @ 0x2de490, 0x4b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248f70(void);
int FUN_002491b4(void);
int FUN_002493a4(...);
int FUN_00249424(void);
int FUN_0024fb58(void);
int FUN_0024fc18(void);
int FUN_00257108(void);
int FUN_0025715c(void);
int FUN_002691d8(unsigned int, unsigned int, unsigned int);
int FUN_00269334(void);
int FUN_002694f8(...);
int FUN_0028c854(void);
int FUN_002a4e98(void);
int FUN_002c0894(...);
int FUN_002c2264(...);
int FUN_002c2318(unsigned int);
int FUN_002c32a0(...);
int FUN_002c3944(void);
int FUN_002c415c(...);
int VectorSignedToFloat(...);

typedef struct fn_002de490_arg0 fn_002de490_arg0;
struct fn_002de490_arg0 {
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
/* Supplied declaration required: FUN_00248f70. */
/* Supplied declaration required: FUN_002491b4. */
/* Supplied declaration required: FUN_002493a4. */
/* Supplied declaration required: FUN_00249424. */
extern int FUN_0024c3c8(unsigned int);
extern unsigned int *FUN_0024c3d8(fn_002de490_arg0 *);
extern unsigned int FUN_0024c3f8(void);
/* Supplied declaration required: FUN_0024fb58. */
/* Supplied declaration required: FUN_0024fc18. */
/* Supplied declaration required: FUN_00257108. */
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002691d8. */
/* Supplied declaration required: FUN_00269334. */
/* Supplied declaration required: FUN_002694f8. */
extern int FUN_0028c814(unsigned int *);
/* Supplied declaration required: FUN_0028c854. */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c2318. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c415c. */


unsigned int * FUN_002de490(fn_002de490_arg0 *param_1)

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
  
  temp_v0 = FUN_0024c3f8();
  temp_v1 = *(int *)(temp_v0 + 0x20);
  if (temp_v1 == 0) {
    temp_v1 = *(int *)(temp_v0 + 0xb8);
  }
  temp_v3 = temp_v1 * *(int *)(temp_v0 + 0x24);
  if (temp_v3 >= 301) {
    temp_v3 = 300;
  }
  puVar3 = (unsigned int *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x5c,0x10,1);
  FUN_002c3944();
  puVar3[1] = 0xffffffff;
  *puVar3 = temp_v3;
  puVar3[2] = 0x3f800000;
  temp_v3 = (unsigned int)param_1->field_0xc;
  if (puVar3[0x13] != 0) {
    FUN_00269334();
  }
  FUN_002691d8(temp_v3,*puVar3,temp_v0);
  puVar3[0x13] = temp_v3;
  *(unsigned char *)((int)puVar3 + 0xe) = *(unsigned char *)((int)puVar3 + 0xe) | 1;
  if ((*puVar3 != 0) && (puVar4 = (unsigned int *)FUN_0024c3d8(param_1), puVar4 != (unsigned int *)0x0)) {
    switch(param_1->field_0x1c) {
    case 1:
      FUN_002493a4(puVar3,*(unsigned int *)(puVar3[0x13] + 8),1);
      temp_v1 = FUN_0028c814(puVar4);
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      puVar3[0x15] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      *(int *)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = temp_v1;
      FUN_002694f8(temp_v1);
      FUN_002c0894(temp_v1);
      break;
    case 2:
      FUN_002493a4(puVar3,*(unsigned int *)(puVar3[0x13] + 8),2);
      if (puVar3[0x11] != 0) {
        FUN_0025715c();
      }
      FUN_002491b4();
      puVar3[0x11] = (unsigned int)puVar4;
      break;
    case 4:
      FUN_002493a4(puVar3,*(unsigned int *)(puVar3[0x13] + 8),4);
      temp_v1 = FUN_0024c3c8(*puVar4 & 0xffff);
      temp_v4 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      puVar3[0x15] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      *(int *)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = temp_v1;
      FUN_002694f8();
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
            FUN_002c2318(*(unsigned int *)(puVar3[0xd] + temp_v3 * 4));
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        FUN_002c415c(puVar3[0xe]);
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
      }
      if (temp_v0 << 2 != 0) {
        temp_v3 = 0x10000;
        FUN_002c32a0(0x10000,0x100,0,temp_v0 << 2,0x10,1);
        puVar3[0xe] = temp_v3;
        puVar3[0xd] = temp_v3;
        FUN_0024fc18();
        temp_v3 = 1;
        *(unsigned int **)puVar3[0xd] = puVar4;
        if (temp_v0 >= 2) {
          do {
            temp_v2 = *(unsigned int *)puVar3[0xd];
            FUN_0024fb58();
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
            FUN_002c2264(*(unsigned int *)(puVar3[0xf] + temp_v3 * 4));
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
        FUN_002c415c(puVar3[0x10]);
        puVar3[0xf] = 0;
        puVar3[0x10] = 0;
      }
      if (temp_v0 << 2 != 0) {
        temp_v3 = 0x10000;
        FUN_002c32a0(0x10000,0x100,0,temp_v0 << 2,0x10,1);
        puVar3[0x10] = temp_v3;
        puVar3[0xf] = temp_v3;
        FUN_002a4e98();
        temp_v3 = 1;
        *(unsigned int **)puVar3[0xf] = puVar4;
        if (temp_v0 >= 2) {
          do {
            temp_v2 = *(unsigned int *)puVar3[0xf];
            FUN_00248f70();
            *(unsigned int *)(puVar3[0xf] + temp_v3 * 4) = temp_v2;
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v0);
        }
      }
      break;
    case 7:
      FUN_002493a4(puVar3,*(unsigned int *)(puVar3[0x13] + 8),7);
      if (puVar3[0x12] != 0) {
        FUN_00257108();
      }
      FUN_00249424();
      puVar3[0x12] = (unsigned int)puVar4;
      break;
    case 9:
      FUN_002493a4(puVar3,*(unsigned int *)(puVar3[0x13] + 8),9);
      FUN_0028c854();
      temp_v5 = (float)VectorSignedToFloat(puVar4[5],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v4 = (float)VectorSignedToFloat(puVar4[6],(unsigned char)(in_fpscr >> 0x16) & 3);
      puVar3[0x15] = (unsigned int)(temp_v5 * 0.5f * 0.0625f);
      puVar3[0x16] = (unsigned int)(temp_v4 * 0.5f * 0.0625f);
      *(unsigned int **)(*(int *)(puVar3[0x14] + 0xc) + 0xb4) = puVar4;
      FUN_002694f8(puVar4);
      FUN_002c0894(puVar4);
    }
    *(unsigned short *)(puVar3 + 3) = param_1->field_0x1c;
  }
  return puVar3;
}

} /* extern "C" */
