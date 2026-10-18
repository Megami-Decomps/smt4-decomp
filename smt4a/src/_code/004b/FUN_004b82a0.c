/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b82a0` (_code @ 0x4b82a0, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_004b858c; /* 0x4b858c */
extern unsigned char DAT_005f1634; /* 0x5f1634 */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern unsigned int DAT_005f1660; /* 0x5f1660 */
extern int DAT_005f1c98; /* 0x5f1c98 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd118(void);
/* Supplied declaration required: FUN_00237418. */
/* Supplied declaration required: FUN_00270b00. */
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_004b7a08. */
extern unsigned int FUN_004ba790(int);
extern int FUN_004ba7a8(int);


void FUN_004b82a0(int param_1)

{
/* irregular: 12 unstructured edge(s); 1 goto(s); 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5 [9];
  
  puVar5 = temp_v5;
  temp_v0 = FUN_004ba7a8(param_1 + 0x9c);
  if (temp_v0 == 0) {
    return;
  }
  temp_v1 = *(unsigned int *)(param_1 + 0x20);
  if ((temp_v1 & 0x1000000) != 0) {
    temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x111c) + 0x54);
    FUN_00137ee0(10,temp_v5,4);
  }
  else if ((temp_v1 & 0x2000000) != 0) {
    temp_v4 = 4;
    temp_v5[0] = *(unsigned short *)(*(int *)(param_1 + 0x111c) + 0x54) + 100;
    temp_v2 = 10;
    puVar5 = temp_v5;
    FUN_00137ee0(temp_v2,puVar5,temp_v4);
  }
  else if ((temp_v1 & 0x8000000) != 0) {
    temp_v5[0] = romwright_piece_2_2(temp_v5[0]._2_2_,*(unsigned short *)(*(int *)(param_1 + 0x111c) + 0x54));
    FUN_00137ee0(0x12,temp_v5,2);
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
  }
  else if ((temp_v1 & 0x4000000) != 0) {
    temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x111c) + 0x54);
    temp_v5[1] = 0;
    temp_v5[2] = 0;
    temp_v4 = 0xc;
    temp_v2 = 0x10;
    puVar5 = temp_v5;
    FUN_00137ee0(temp_v2,puVar5,temp_v4);
  }
  else {
    if ((temp_v1 & 0x200000) != 0) {
      FUN_00237418();
      temp_v5[0] = *(unsigned int *)(*(int *)(param_1 + 0x111c) + 0x40);
      temp_v5[1] = 0xffffffff;
      FUN_002e342c(temp_v5 + 2,*(int *)(param_1 + 0x111c) + 0x44);
      temp_v4 = 0x20;
      temp_v2 = 4;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x40000) != 0) {
      FUN_00237418();
      temp_v5[0] = DAT_005f1658;
      temp_v5[1] = 0xffffffff;
      FUN_002e342c(temp_v5 + 2,&DAT_005f1660);
      temp_v4 = 0x20;
      temp_v2 = 4;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x800000) != 0) {
      temp_v4 = 4;
      temp_v5[0] = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x111c) + 0x54);
      temp_v2 = 0xd;
      puVar5 = temp_v5;
    }
    else if ((temp_v1 & 0x20000000) != 0) {
      temp_v4 = 4;
      temp_v2 = 0x14;
      temp_v5[0] = 0;
      puVar5 = temp_v5;
    }
    else if (*(char *)(param_1 + 0x49) != '\0') {
      temp_v4 = 0;
      temp_v2 = 6;
      puVar5 = (unsigned int *)(unsigned char *)0x0;
    }
    else if (*(char *)(param_1 + 0x48) != '\0') {
      temp_v4 = 0;
      temp_v2 = 8;
      puVar5 = (unsigned int *)(unsigned char *)0x0;
    }
    else if (*(char *)(param_1 + 0x4a) != '\0') {
      temp_v4 = 4;
      temp_v5[0] = DAT_005f1c98 - 200;
      temp_v2 = 0xe;
      puVar5 = temp_v5;
    }
    else if (*(char *)(param_1 + 0x1168) != '\0') {
      temp_v0 = FUN_004186e0();
      if (temp_v0 != 0) {
        temp_v3 = FUN_001bd118();
        if (temp_v3 == 6) {
          temp_v2 = FUN_004ba790(param_1 + 0x9c);
          *(unsigned int *)(param_1 + 0x111c) = temp_v2;
          FUN_004b7a08(param_1);
          FUN_001ad9b4();
          FUN_00270c58(*(unsigned short *)(temp_v0 + 0xd4));
        }
      }
      if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
        *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
        FUN_003491e8();
      }
      *(unsigned char *)(param_1 + 0x24) = 1;
      *(unsigned int *)(param_1 + 0x28) = 0x12;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    else {
      if (*(char *)(param_1 + 0x4b) == '\0') goto LAB_004b8550;
      FUN_00270b00();
      FUN_003d2d6c(0xf);
      DAT_005f1634 = 1;
      temp_v5[0] = 1;
      temp_v5[1] = 0xffffffff;
      ARM_common_memcpy4_9(temp_v5 + 2,&LAB_004b858c);
      temp_v4 = 0x20;
      temp_v2 = 4;
    }
    FUN_00137ee0(temp_v2,puVar5,temp_v4);
  }
LAB_004b8550:
  if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
    FUN_003491e8();
  }
  *(unsigned char *)(param_1 + 0x24) = 1;
  *(unsigned int *)(param_1 + 0x28) = 0x12;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}
