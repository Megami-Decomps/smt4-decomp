/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d2ec` (_code @ 0x39d2ec, 0x430 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049fcfc; /* 0x49fcfc */
extern signed char DAT_0049fd00; /* 0x49fd00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231d4c. */
/* Supplied declaration required: FUN_00246a98. */
/* Supplied declaration required: FUN_002b0908. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */
/* Supplied declaration required: FUN_002c5f7c. */


void FUN_0039d2ec(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  FUN_00231d4c(param_1 + 0x164,&temp_v7);
  if (DAT_0049fcfc == 0) {
    temp_v1 = FUN_002c5f7c(1);
    FUN_002befdc(DAT_0044ea00,3,temp_v1);
    FUN_002c1d3c(DAT_0044ea00,0);
    temp_v3 = 0;
    if (temp_v3 < *(int *)(param_1 + 0x121b4)) {
      do {
        temp_v2 = param_1 + temp_v3 * 0x30;
        temp_v4 = *(char *)(temp_v2 + 0x61b4) != '\0';
        temp_v0 = '\0';
        if (temp_v4) {
          temp_v0 = *(char *)(temp_v2 + 0x61b5);
        }
        if (temp_v4 && temp_v0 != '\0') {
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d0),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61d8),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61dc),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002c0b1c(0xf0808000);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(param_1 + 0x121b4));
    }
    FUN_002bef88(DAT_0044ea00,3);
  }
  temp_v1 = FUN_002c5f7c(3,0);
  FUN_002befdc(DAT_0044ea00,3,temp_v1);
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x61b0)) {
    do {
      temp_v2 = param_1 + temp_v3 * 0x4c;
      if (*(short *)(temp_v2 + 0x5ac4) != 0) {
        FUN_002be4dc(*(unsigned int *)(temp_v2 + 0x5ad8));
        FUN_00246a98(*(unsigned int *)(temp_v2 + 0x5ad8) & 0xff);
        temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x5acc),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x5ac8),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b0908(9,*(unsigned int *)(temp_v2 + 0x5a90),*(unsigned short *)(temp_v2 + 0x5ac6),
                     (int)(temp_v6 + temp_v7),(int)(temp_v5 + temp_v8),*(unsigned int *)(temp_v2 + 0x5ad0)
                     ,*(unsigned int *)(temp_v2 + 0x5ad4),temp_v3 * 2 + 0xb);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x61b0));
  }
  FUN_002bef88(DAT_0044ea00,3);
  if (DAT_0049fd00 != '\0') {
    temp_v1 = FUN_002c5f7c(1,0);
    FUN_002befdc(DAT_0044ea00,3,temp_v1);
    FUN_002c1d3c(DAT_0044ea00,0);
    temp_v3 = 0;
    if (temp_v3 < *(int *)(param_1 + 0x121b4)) {
      do {
        temp_v2 = param_1 + temp_v3 * 0x30;
        temp_v4 = *(char *)(temp_v2 + 0x61b4) == '\0';
        temp_v0 = '\0';
        if (!temp_v4) {
          temp_v0 = *(char *)(temp_v2 + 0x61b5);
        }
        if (!(temp_v4 || temp_v0 == '\0')) {
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d0),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61dc),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61d8),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = 0xff808080;
          if (*(int *)(temp_v2 + 0x61bc) == -1) {
            temp_v1 = 0x8080ff80;
          }
          FUN_002c0b1c(temp_v1,temp_v1);
        }
        else if ((int)*(short *)(temp_v2 + 0x61ba) == (int)*(char *)(param_1 + 0x60)) {
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d0),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0x61d4),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61dc),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = 0xff808040;
          if (*(int *)(temp_v2 + 0x61bc) == -1) {
            temp_v1 = 0x8080ff40;
          }
          VectorUnsignedToFloat(*(unsigned int *)(temp_v2 + 0x61d8),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002c0b1c(temp_v1,temp_v1);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(param_1 + 0x121b4));
    }
    FUN_002bef88(DAT_0044ea00,3);
  }
  temp_v1 = FUN_002c5f7c(1,0);
  FUN_002befdc(DAT_0044ea00,3,temp_v1);
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x5a88)) {
    do {
      temp_v2 = param_1 + temp_v3 * 0x4c;
      if (*(short *)(temp_v2 + 0xebc) != 0) {
        FUN_002be4dc(*(unsigned int *)(temp_v2 + 0xed0));
        FUN_00246a98(*(unsigned int *)(temp_v2 + 0xed0) & 0xff);
        temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0xec4),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v2 + 0xec0),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b0908(9,*(unsigned int *)(temp_v2 + 0xe88),*(unsigned short *)(temp_v2 + 0xebe),
                     (int)(temp_v6 + temp_v7),(int)(temp_v5 + temp_v8),*(unsigned int *)(temp_v2 + 0xec8),
                     *(unsigned int *)(temp_v2 + 0xecc),0xb);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x5a88));
  }
  FUN_002bef14();
  FUN_002bef88(DAT_0044ea00,3);
  return;
}
