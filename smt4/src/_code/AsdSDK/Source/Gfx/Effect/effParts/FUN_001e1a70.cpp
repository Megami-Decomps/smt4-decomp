/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1a70` (_code @ 0x1e1a70, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c650(unsigned int *, int, int);
int FUN_0025c870(void);
int effBlockCloneDeep(void);
int FUN_002a3d58(...);
int libc_strcpy(int, int);
int memAlloc(int, int, int, int, int, int);
int asdMemFree(unsigned int *);
int memClear(...);
int rt_memcpy_w(...);

typedef struct fn_001e1a70_arg0 fn_001e1a70_arg0;
struct fn_001e1a70_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x58];
    undefined4 field_0x68; /* +0x68 */
    unsigned char pad_0x6c[0x8];
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x8];
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x4];
    undefined4 field_0x88; /* +0x88 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_0025c650. */
/* Supplied declaration required: FUN_0025c870. */
/* Supplied declaration required: effBlockCloneDeep. */
/* Supplied declaration required: FUN_002a3d58. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
extern unsigned int *asdLoadFileSync(fn_001e1a70_arg0 *, unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_001e1a70(fn_001e1a70_arg0 *param_1)

{
/* irregular: 2 goto(s); 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [4];
  
  puVar2 = (unsigned int *)asdLoadFileSync(param_1,temp_v9,1,0x80);
  puVar3 = (unsigned int *)0x10000;
  memAlloc(0x10000,0x100,0,0x90,0x10,1);
  memClear();
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  FUN_002a3d58(puVar3);
  temp_v2 = puVar2[1];
  temp_v3 = puVar2[2];
  temp_v4 = puVar2[3];
  temp_v6 = 0;
  *puVar3 = *puVar2;
  puVar3[1] = temp_v2;
  puVar3[2] = temp_v3;
  puVar3[3] = temp_v4;
  temp_v2 = puVar2[1];
  temp_v3 = puVar2[2];
  temp_v4 = puVar2[3];
  puVar3[4] = *puVar2;
  puVar3[5] = temp_v2;
  puVar3[6] = temp_v3;
  puVar3[7] = temp_v4;
  puVar3[0x1d] = puVar2[0x1d];
  puVar3[0x1a] = puVar2[0x1a];
  temp_v5 = puVar2[0x22] + (int)puVar2;
  if (puVar2[0x20] != 0) {
    do {
      temp_v0 = *(int *)(temp_v5 + 0x90);
      if ((*(unsigned int *)(temp_v5 + 0x98) & 1) != 0) {
        for (temp_v7 = puVar3[0x23]; temp_v7 != 0; temp_v7 = *(int *)(temp_v7 + 0xac)) {
          temp_v8 = temp_v0 == 0;
          temp_v0 = temp_v0 - 1;
          if (temp_v8) goto LAB_001e1b4c;
        }
        temp_v7 = 0;
LAB_001e1b4c:
        FUN_0025c870();
        rt_memcpy_w();
        memClear(temp_v0,0x90);
        *(unsigned int *)(temp_v0 + 0x84) = 1;
        *(unsigned char *)(temp_v0 + 0x88) = 8;
        *(unsigned char *)(temp_v0 + 0x89) = 0;
        *(unsigned char *)(temp_v0 + 0x8a) = 0;
        FUN_002a3d58(temp_v0);
        *(unsigned int *)(temp_v0 + 0x98) = *(unsigned int *)(temp_v0 + 0x98) | 1;
        *(unsigned int *)(temp_v0 + 0x90) = *(unsigned int *)(temp_v7 + 0x90);
        if (*(int *)(temp_v7 + 0xac) != 0) {
          *(int *)(*(int *)(temp_v7 + 0xac) + 0xb0) = temp_v0;
          *(unsigned int *)(temp_v0 + 0xac) = *(unsigned int *)(temp_v7 + 0xac);
        }
        else {
          *(unsigned int *)(temp_v0 + 0xac) = 0;
          puVar3[0x22] = temp_v0;
        }
        *(int *)(temp_v7 + 0xac) = temp_v0;
        *(int *)(temp_v0 + 0xb0) = temp_v7;
        puVar3[0x20] = puVar3[0x20] + 1;
      }
      else {
        temp_v7 = temp_v0 + (int)puVar2;
        effBlockCloneDeep();
        temp_v0 = temp_v7;
        FUN_0025c870();
        *(int *)(temp_v0 + 0x90) = temp_v7;
        *(unsigned int *)(temp_v0 + 0xac) = 0;
        if (puVar3[0x22] != 0) {
          *(int *)(puVar3[0x22] + 0xac) = temp_v0;
          *(unsigned int *)(temp_v0 + 0xb0) = puVar3[0x22];
        }
        else {
          puVar3[0x23] = temp_v0;
          *(unsigned int *)(temp_v0 + 0xb0) = 0;
        }
        puVar3[0x22] = temp_v0;
        puVar3[0x20] = puVar3[0x20] + 1;
      }
      if ((*(unsigned int *)(temp_v5 + 0x98) & 2) != 0) {
        temp_v1 = *(int *)(temp_v5 + 0x94);
        for (temp_v7 = puVar3[0x23]; temp_v7 != 0; temp_v7 = *(int *)(temp_v7 + 0xac)) {
          temp_v8 = temp_v1 == 0;
          temp_v1 = temp_v1 - 1;
          if (temp_v8) goto LAB_001e1c50;
        }
        temp_v7 = 0;
LAB_001e1c50:
        FUN_0025c650(puVar3,temp_v0,temp_v7);
      }
      rt_memcpy_w(temp_v0,temp_v5);
      libc_strcpy(temp_v0 + 0x9c,temp_v5 + 0x9c);
      puVar1 = (unsigned int *)(temp_v5 + 0x98);
      temp_v6 = temp_v6 + 1;
      temp_v5 = temp_v5 + 0xc0;
      *(unsigned int *)(temp_v0 + 0x98) = *puVar1;
    } while (temp_v6 < (unsigned int)puVar2[0x20]);
  }
  asdMemFree(puVar2);
  return puVar3;
}

} /* extern "C" */
