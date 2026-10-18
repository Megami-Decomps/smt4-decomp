/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318e84` (_code @ 0x318e84, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_00152cf8. */
extern int FUN_00164af0(unsigned int);
/* Supplied declaration required: FUN_001681cc. */
extern int FUN_001834a4(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_00215bbc. */
/* Supplied declaration required: FUN_00281720. */
/* Supplied declaration required: FUN_00284ee4. */
/* Supplied declaration required: FUN_002c39dc. */
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_00319aec. */
extern int FUN_0039a2d8(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003c1094. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_00318e84(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_001834a4(0x2e,0x97);
  temp_v1 = (int)*(short *)(temp_v0 + 8);
  FUN_00152cf8(temp_v1,(int)*(short *)(temp_v0 + 10),(int)**(short **)(temp_v0 + 0xc),
               (int)(*(short **)(temp_v0 + 0xc))[1],0);
  if (temp_v1 != 0) {
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  else {
    FUN_00152cf8((int)*(short *)(temp_v0 + 8),(int)*(short *)(temp_v0 + 10),
                 (int)**(short **)(temp_v0 + 0xc),(int)(*(short **)(temp_v0 + 0xc))[1],3);
    *(unsigned int *)(param_1 + 0x100) = 0;
  }
  temp_v0 = FUN_00164af0(10);
  if ((temp_v0 != 0) || (temp_v0 = FUN_002e1a18(4), temp_v0 != 0)) {
    if (*(char *)(param_1 + 0x111) != '\0') {
      *(unsigned char *)(param_1 + 0x111) = 0;
    }
    else {
      *(unsigned char *)(param_1 + 0x111) = 1;
    }
    *(unsigned int *)(param_1 + 0x14) = 0x14a;
    *(unsigned int *)(param_1 + 0x1c) = 0;
    FUN_003d2150(0x100020e);
  }
  else {
    switch(*(unsigned int *)(param_1 + 0x14c)) {
    default:
      break;
    case 1:
      FUN_00319aec(0);
      *(unsigned int *)(param_1 + 0x134) = 300;
      FUN_003c1060();
      FUN_002e6dd0(param_1 + 0x38,0x14);
      *(unsigned int *)(param_1 + 0x3c) = 0x1e;
      *(unsigned char *)(param_1 + 0x12d) = 0;
      *(unsigned int *)(param_1 + 0x128) = 0;
      *(unsigned int *)(param_1 + 0x120) = 0;
      temp_v0 = FUN_0018719c(0x49b);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0x9e;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v0 = FUN_0018719c(0x49b);
      if (temp_v0 == 0) {
        temp_v2 = 0x15;
      }
      else {
        temp_v2 = 0x16;
      }
      *(unsigned int *)(param_1 + 0xec) = temp_v2;
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      break;
    case 2:
      FUN_00319aec(0);
      FUN_002e6dd0(param_1 + 0x38,0x14);
      *(unsigned int *)(param_1 + 0x3c) = 0x1e;
      *(unsigned char *)(param_1 + 0x12d) = 0;
      *(unsigned int *)(param_1 + 0x128) = 0;
      *(unsigned int *)(param_1 + 0x120) = 0;
      temp_v0 = FUN_0018719c(0x49c);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0x9e;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v0 = FUN_0018719c(0x49c);
      if (temp_v0 == 0) {
        temp_v2 = 0xb;
      }
      else {
        temp_v2 = 0xc;
      }
      *(unsigned int *)(param_1 + 0xec) = temp_v2;
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      break;
    case 3:
      FUN_00319aec(0);
      *(unsigned char *)(param_1 + 0x154) = 0;
      FUN_00281720(*(unsigned int *)(param_1 + 4),0);
      FUN_0019ea64(1);
      temp_v0 = FUN_0018719c(0x49d);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0x97;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xec) = 0xe;
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 0xf8) = 5;
      *(unsigned int *)(param_1 + 0xfc) = 2;
      break;
    case 4:
      puVar3 = *(unsigned int **)(param_1 + 8);
      *(unsigned int *)(param_1 + 0x17a) = *puVar3;
      *(unsigned int *)(param_1 + 0x17e) = puVar3[1];
      *(unsigned int *)(param_1 + 0x182) = puVar3[2];
      *(unsigned short *)(param_1 + 0x186) = *(unsigned short *)(puVar3 + 3);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v0 = FUN_0018719c(0x49e);
      if (temp_v0 == 0) {
        temp_v2 = 0xf;
      }
      else {
        temp_v2 = 0x10;
      }
      *(unsigned int *)(param_1 + 0xec) = temp_v2;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      temp_v0 = FUN_0018719c(0x49e);
      if (temp_v0 == 0) {
        FUN_001681cc(0x92);
      }
      temp_v2 = 3;
      break;
    case 5:
      FUN_00319aec(0);
      *(unsigned int *)(param_1 + 0x134) = 400;
      FUN_002e6dd0(param_1 + 0x38,0x14);
      *(unsigned int *)(param_1 + 0x3c) = 0x1e;
      *(unsigned char *)(param_1 + 0x12d) = 0;
      temp_v0 = FUN_0018719c(0x49f);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0x9e;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v0 = FUN_0018719c(0x49f);
      if (temp_v0 == 0) {
        temp_v2 = 0x12;
      }
      else {
        temp_v2 = 0x13;
      }
      *(unsigned int *)(param_1 + 0xec) = temp_v2;
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 0xf8) = 2;
      break;
    case 6:
      FUN_00319aec(0);
      *(unsigned char *)(param_1 + 0x154) = 0;
      *(unsigned int *)(param_1 + 0x1c) = 0;
      *(unsigned char *)(param_1 + 0x20) = 0;
      *(unsigned int *)(param_1 + 0x30) = 0;
      *(unsigned char *)(param_1 + 0x34) = 0;
      FUN_00281720(*(unsigned int *)(param_1 + 4),0);
      FUN_002c39dc(0x10,0,0xffffffff);
      FUN_003c1094(0);
      FUN_00215bbc();
      FUN_00284ee4(1);
      temp_v0 = FUN_0018719c(0x4a0);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0xe4;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      *(unsigned int *)(param_1 + 0xf8) = 5;
      *(unsigned int *)(param_1 + 0xfc) = 2;
      if (*(int *)(param_1 + 0x104) == 0) {
        *(unsigned int *)(param_1 + 0xec) = 6;
      }
      else {
        *(unsigned int *)(param_1 + 0xec) = 1;
      }
      temp_v2 = 3;
      break;
    case 7:
      FUN_00319aec(0);
      FUN_002e6dd0(param_1 + 0x38,0x14);
      *(unsigned int *)(param_1 + 0x3c) = 0x1e;
      *(unsigned char *)(param_1 + 0x12d) = 0;
      temp_v0 = FUN_0018719c(0x4a1);
      if (temp_v0 == 0) {
        temp_v2 = 0x92;
      }
      else {
        temp_v2 = 0x9e;
      }
      FUN_001681cc(temp_v2);
      *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
      temp_v0 = FUN_0018719c(0x4a1);
      if (temp_v0 == 0) {
        temp_v2 = 8;
      }
      else {
        temp_v2 = 9;
      }
      *(unsigned int *)(param_1 + 0xec) = temp_v2;
      temp_v2 = 3;
      *(unsigned int *)(param_1 + 0xf8) = 2;
    }
  }
  if (*(char *)(param_1 + 0x111) != '\0') {
    temp_v0 = FUN_0039a2d8(param_1 + 0x14,0x14a,0,3,*(unsigned int *)(param_1 + 0x1c),1);
    if (temp_v0 != 0) {
      *(unsigned char *)(param_1 + 0x20) = 1;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return temp_v2;
}
