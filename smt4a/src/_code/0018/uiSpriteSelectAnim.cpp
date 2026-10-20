/* NON_MATCHING: romwright 0.5.0 decompilation of `uiSpriteSelectAnim` (_code @ 0x1846d0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int uiSpriteSetKeyframe(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: uiSpriteSetKeyframe. */


void uiSpriteSelectAnim(int param_1,int param_2)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  char temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  short *psVar7;
  int *piVar8;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v7 = 0;
  temp_v9 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x48) + 8) * 0x9249 + 0x9249;
  if (temp_v9 >> 0x14 != 0) {
    temp_v10 = *(int *)(*(int *)(param_1 + 0x48) + 0x1c);
    temp_v5 = 0;
    do {
      if (temp_v7 == param_2) {
        piVar8 = (int *)(temp_v10 + temp_v5 * 0x1c);
        goto LAB_0018473c;
      }
      temp_v6 = temp_v5 + 1;
      if (*(int *)(temp_v10 + temp_v5 * 0x1c) == -1) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v5 = temp_v6;
    } while (temp_v6 < temp_v9 >> 0x14);
  }
  piVar8 = (int *)0x0;
LAB_0018473c:
  *(int **)(param_1 + 0x78) = piVar8;
  if (piVar8 == (int *)0x0) {
    return;
  }
  *(unsigned short *)(param_1 + 0x7c) = 0;
  *(unsigned short *)(param_1 + 0x7e) = 0;
  *(unsigned short *)(param_1 + 0x80) = 0;
  *(unsigned short *)(param_1 + 0x82) = 0;
  *(unsigned char *)(param_1 + 0x84) = 1;
  if (-1 < *piVar8) {
    uiSpriteSetKeyframe(param_1,(int)(short)*piVar8,(int)(char)piVar8[1]);
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x78) + 0xc);
  if (-1 < temp_v7) {
    temp_v3 = *(char *)(*(int *)(param_1 + 0x78) + 0x10);
    temp_v1 = (short)temp_v7;
    if (*(int *)(param_1 + 0x58) != 0) {
      *(short *)(param_1 + 0x5c) = temp_v1;
      *(unsigned short *)(param_1 + 0x5e) = 0;
      *(unsigned char *)(param_1 + 0x87) = 0;
      *(unsigned char *)(param_1 + 0x8a) = 0;
      *(char *)(param_1 + 0x60) = temp_v3;
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x58) + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      *(unsigned int *)(param_1 + 0x20) = temp_v4;
    }
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x78) + 0x14);
  if (-1 < temp_v7) {
    temp_v3 = *(char *)(*(int *)(param_1 + 0x78) + 0x18);
    temp_v1 = (short)temp_v7;
    if (*(int *)(param_1 + 100) != 0) {
      *(short *)(param_1 + 0x68) = temp_v1;
      *(unsigned short *)(param_1 + 0x6a) = 0;
      *(unsigned char *)(param_1 + 0x88) = 0;
      *(unsigned char *)(param_1 + 0x8a) = 0;
      *(char *)(param_1 + 0x6c) = temp_v3;
      puVar5 = (unsigned int *)(*(int *)(param_1 + 100) + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      *(unsigned int *)(param_1 + 0x24) = temp_v4;
      *(unsigned int *)(param_1 + 0x28) = temp_v4;
      *(unsigned int *)(param_1 + 0x2c) = temp_v4;
    }
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x78) + 8);
  if (-1 < temp_v7) {
    temp_v10 = 0;
    temp_v9 = 0;
    temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x48) + 6);
    if (temp_v2 >> 2 != 0) {
      temp_v8 = *(int *)(*(int *)(param_1 + 0x48) + 0x18);
      do {
        if (temp_v10 == (short)temp_v7) {
          psVar7 = (short *)(temp_v8 + temp_v9 * 4);
          goto code_r0x00185af4;
        }
        temp_v0 = temp_v9 * 4;
        temp_v9 = temp_v9 + 1;
        if (*(short *)(temp_v8 + temp_v0) == -1) {
          temp_v10 = temp_v10 + 1;
        }
      } while (temp_v9 < temp_v2 >> 2);
    }
    psVar7 = (short *)0x0;
code_r0x00185af4:
    *(short **)(param_1 + 0x70) = psVar7;
    if (psVar7 != (short *)0x0) {
      *(unsigned short *)(param_1 + 0x74) = 0;
      *(unsigned short *)(param_1 + 0x76) = 0;
      *(unsigned char *)(param_1 + 0x89) = 0;
      *(unsigned char *)(param_1 + 0x8a) = 0;
      *(int *)(param_1 + 4) = (int)*psVar7;
      *(unsigned int *)(param_1 + 8) = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
