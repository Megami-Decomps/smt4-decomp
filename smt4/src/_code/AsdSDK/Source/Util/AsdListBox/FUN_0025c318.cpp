/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c318` (_code @ 0x25c318, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00259b50(...);
int FUN_002b265c(...);
int FUN_002c498c(...);
int FUN_002d5728(...);
int VectorSignedToFloat(...);
int strncpy(...);

typedef struct fn_0025c318_arg0 fn_0025c318_arg0;
struct fn_0025c318_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x40];
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
};

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_002e11f0; /* 0x2e11f0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00254db0(fn_0025c318_arg0 *, unsigned int);
/* Supplied declaration required: FUN_00259b50. */
/* Supplied declaration required: FUN_002b265c. */
extern int FUN_002c08f0(fn_0025c318_arg0 *);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002d5728. */


void FUN_0025c318(fn_0025c318_arg0 *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned long long temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = 0;
  if (temp_v3 < param_3) {
    do {
      puVar5 = (unsigned int *)(param_2 + temp_v3 * 0x20);
      temp_v4 = *puVar5;
      temp_v1 = FUN_002c08f0(param_1);
      puVar3 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0x220,1);
      strncpy((int)puVar3 + 6,temp_v4,0x100);
      *(unsigned char *)(puVar3 + 1) = 0;
      *puVar3 = *(unsigned int *)(temp_v1 + 0x70);
      *(int *)(temp_v1 + 0x70) = *(int *)(temp_v1 + 0x70) + 1;
      FUN_002b265c(temp_v1,puVar3,&LAB_002e11f0);
      FUN_00259b50(param_1);
      FUN_002d5728(temp_v1 + 0xc);
      *(unsigned int *)(temp_v1 + 0x6c) = *(unsigned int *)(temp_v1 + 0x28);
      temp_v4 = *puVar3;
      switch(*(unsigned char *)(puVar5 + 1)) {
      case 1:
        temp_v2 = puVar5[2];
        temp_v1 = FUN_00254db0(param_1,temp_v4);
        if (temp_v1 != 0) {
          *(unsigned char *)(temp_v1 + 4) = 1;
          if (temp_v2 != 0) {
            strncpy(temp_v1 + 0x106,temp_v2,0x100);
          }
          FUN_00259b50(param_1);
        }
        break;
      case 2:
        temp_v1 = puVar5[3];
        temp_v2 = FUN_00254db0(param_1,temp_v4);
        if (temp_v2 != 0) {
          *(unsigned char *)(temp_v2 + 4) = 2;
          *(unsigned int *)(temp_v2 + 0x208) = (unsigned int)(temp_v1 != 0);
          *(unsigned int *)(temp_v2 + 0x210) = 0;
          *(unsigned int *)(temp_v2 + 0x214) = 1;
          FUN_00259b50(param_1);
        }
        break;
      case 3:
        temp_v0 = *(unsigned char *)(puVar5 + 6);
        temp_v6 = *(unsigned long long *)(puVar5 + 4);
        temp_v5 = puVar5[3];
        temp_v1 = FUN_00254db0(param_1,temp_v4);
        if (temp_v1 != 0) {
          *(unsigned int *)(temp_v1 + 0x208) = temp_v5;
          *(unsigned char *)(temp_v1 + 4) = 3;
          *(int *)(temp_v1 + 0x210) = (int)temp_v6;
          *(int *)(temp_v1 + 0x214) = (int)((unsigned long long)temp_v6 >> 0x20);
          *(unsigned char *)(temp_v1 + 5) = temp_v0;
          FUN_00259b50(param_1);
        }
        break;
      case 4:
        temp_v5 = VectorSignedToFloat(puVar5[3],(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = puVar5[4];
        temp_v8 = puVar5[5];
        temp_v1 = FUN_00254db0(param_1,temp_v4);
        if (temp_v1 != 0) {
          *(unsigned int *)(temp_v1 + 0x20c) = temp_v5;
          *(unsigned int *)(temp_v1 + 0x210) = temp_v7;
          *(unsigned char *)(temp_v1 + 4) = 4;
          *(unsigned int *)(temp_v1 + 0x214) = temp_v8;
          FUN_00259b50(param_1);
        }
      }
      temp_v1 = puVar5[7];
      if ((temp_v1 != 0) && (temp_v2 = FUN_00254db0(param_1,temp_v4), temp_v2 != 0)) {
        *(int *)(temp_v2 + 0x21c) = temp_v1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < param_3);
  }
  return;
}

} /* extern "C" */
