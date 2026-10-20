/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184528` (_code @ 0x184528, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_00184758(...);
int FUN_00184c00(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00184528(int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
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
  
  switch(param_2) {
  case 0:
    FUN_00184758(param_1 + 0x20,0);
    return;
  case 1:
    FUN_00184758(param_1 + 0xac,1,0);
    return;
  case 2:
    FUN_001846d0(param_1 + 0x138,0);
    return;
  case 3:
    FUN_00184758(param_1 + 0x1c4,2,0);
    return;
  case 4:
    FUN_00184758(param_1 + 0x250,3,0);
    return;
  case 5:
    FUN_00184758(param_1 + 0x2dc,4,0);
    return;
  case 6:
    FUN_00184758(param_1 + 0x368,5,0);
    return;
  case 7:
    FUN_00184758(param_1 + 0x3f4,6,0);
    return;
  case 8:
    FUN_00184758(param_1 + 0x480,7,0);
    FUN_00184c00(param_1 + 0x480,2,0);
    return;
  case 9:
    FUN_00184758(param_1 + 0x50c,8,0);
    FUN_00184c00(param_1 + 0x50c,3,0);
    return;
  case 10:
    FUN_00184758(param_1 + 0x598,9,0);
    FUN_00184c00(param_1 + 0x598,2,0);
    return;
  case 0xb:
    FUN_00184758(param_1 + 0x624,10,0);
    FUN_00184c00(param_1 + 0x624,3,0);
    return;
  case 0xc:
    break;
  default:
    return;
  }
  temp_v7 = 0;
  temp_v9 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x6f8) + 8) * 0x9249 + 0x9249;
  if (temp_v9 >> 0x14 != 0) {
    temp_v10 = *(int *)(*(int *)(param_1 + 0x6f8) + 0x1c);
    temp_v5 = 0;
    do {
      if (temp_v7 == 1) {
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
  *(int **)(param_1 + 0x728) = piVar8;
  if (piVar8 == (int *)0x0) {
    return;
  }
  *(unsigned short *)(param_1 + 0x72c) = 0;
  *(unsigned short *)(param_1 + 0x72e) = 0;
  *(unsigned short *)(param_1 + 0x730) = 0;
  *(unsigned short *)(param_1 + 0x732) = 0;
  *(unsigned char *)(param_1 + 0x734) = 1;
  if (-1 < *piVar8) {
    FUN_00184758(param_1 + 0x6b0,(int)(short)*piVar8,(int)(char)piVar8[1]);
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x728) + 0xc);
  if (-1 < temp_v7) {
    temp_v3 = *(char *)(*(int *)(param_1 + 0x728) + 0x10);
    temp_v1 = (short)temp_v7;
    if (*(int *)(param_1 + 0x708) != 0) {
      *(short *)(param_1 + 0x70c) = temp_v1;
      *(unsigned short *)(param_1 + 0x70e) = 0;
      *(unsigned char *)(param_1 + 0x737) = 0;
      *(unsigned char *)(param_1 + 0x73a) = 0;
      *(char *)(param_1 + 0x710) = temp_v3;
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x708) + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      *(unsigned int *)(param_1 + 0x6d0) = temp_v4;
    }
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x728) + 0x14);
  if (-1 < temp_v7) {
    temp_v3 = *(char *)(*(int *)(param_1 + 0x728) + 0x18);
    temp_v1 = (short)temp_v7;
    if (*(int *)(param_1 + 0x714) != 0) {
      *(short *)(param_1 + 0x718) = temp_v1;
      *(unsigned short *)(param_1 + 0x71a) = 0;
      *(unsigned char *)(param_1 + 0x738) = 0;
      *(unsigned char *)(param_1 + 0x73a) = 0;
      *(char *)(param_1 + 0x71c) = temp_v3;
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x714) + temp_v1 * 0xc);
      if (temp_v3 == '\0') {
        temp_v4 = *puVar5;
      }
      else {
        temp_v4 = puVar5[1];
      }
      *(unsigned int *)(param_1 + 0x6d4) = temp_v4;
      *(unsigned int *)(param_1 + 0x6d8) = temp_v4;
      *(unsigned int *)(param_1 + 0x6dc) = temp_v4;
    }
  }
  temp_v7 = *(int *)(*(int *)(param_1 + 0x728) + 8);
  if (-1 < temp_v7) {
    temp_v10 = 0;
    temp_v9 = 0;
    temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x6f8) + 6);
    if (temp_v2 >> 2 != 0) {
      temp_v8 = *(int *)(*(int *)(param_1 + 0x6f8) + 0x18);
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
    *(short **)(param_1 + 0x720) = psVar7;
    if (psVar7 != (short *)0x0) {
      *(unsigned short *)(param_1 + 0x724) = 0;
      *(unsigned short *)(param_1 + 0x726) = 0;
      *(unsigned char *)(param_1 + 0x739) = 0;
      *(unsigned char *)(param_1 + 0x73a) = 0;
      *(int *)(param_1 + 0x6b4) = (int)*psVar7;
      *(unsigned int *)(param_1 + 0x6b8) = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
