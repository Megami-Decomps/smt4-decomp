/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff058` (_code @ 0x4ff058, 0x2f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_5_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0020cb74. */


void FUN_004ff058(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned int temp_v7;
  int *piVar10;
  unsigned int in_fpscr;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int iStack_34;
  int iStack_30;
  unsigned int temp_v14;
  unsigned int uStack_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v12 = 0x3f800000;
    temp_v13 = 0x3f800000;
    if (param_2 < (int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 6)) {
      temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x1c) + param_2 * 4 + 2);
      temp_v7 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
      temp_v5 = temp_v7 - 1;
      uStack_28 = param_4;
      temp_v14 = param_3;
      iStack_30 = param_2;
      iStack_34 = param_1;
      temp_v3 = DAT_0059dbb4;
      for (; DAT_0059dbb4 = temp_v3, (int)temp_v7 <= (int)((unsigned int)temp_v2 + temp_v5); temp_v7 = temp_v7 + 1) {
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x18) + temp_v7 * 0x28);
        if (param_5 != 1) {
          if ((param_5 != 2) || (*(char *)((int)puVar8 + 0x25) != '\0')) {
LAB_004ff118:
            temp_v0 = *(unsigned char *)((int)puVar8 + 0x22);
            VectorUnsignedToFloat((unsigned int)*(unsigned char *)((int)puVar8 + 0x23),(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = *puVar8;
            temp_v9 = puVar8[1];
            temp_v10 = puVar8[2];
            temp_v11 = puVar8[3];
            temp_v1 = *(char *)((int)puVar8 + 0x26);
            if (temp_v1 != '\0') {
              if (temp_v1 != '\x01') {
                if (temp_v1 != '\x02') {
                  if (temp_v1 == '\x03') {
                    temp_v4 = FUN_00169294(5,0,1);
                    piVar10 = (int *)(temp_v3 + 0x12b8);
                    temp_v6 = piVar10[*piVar10 + 2];
                    piVar10[*piVar10 + 2] = temp_v4;
                    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v4) {
                      (**(romwright_code **)(temp_v3 + 0x12d4))();
                      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
                    }
                  }
                }
                else {
                  temp_v4 = FUN_00169294(6,1,2);
                  piVar10 = (int *)(temp_v3 + 0x12b8);
                  temp_v6 = piVar10[*piVar10 + 2];
                  piVar10[*piVar10 + 2] = temp_v4;
                  if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v4) {
                    (**(romwright_code **)(temp_v3 + 0x12d4))();
                    *(unsigned char *)(temp_v3 + 0x12d0) = 0;
                  }
                }
              }
              else {
                temp_v4 = FUN_00169294(6,1,0);
                piVar10 = (int *)(temp_v3 + 0x12b8);
                temp_v6 = piVar10[*piVar10 + 2];
                piVar10[*piVar10 + 2] = temp_v4;
                if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v4) {
                  (**(romwright_code **)(temp_v3 + 0x12d4))();
                  *(unsigned char *)(temp_v3 + 0x12d0) = 0;
                }
              }
            }
            else {
              temp_v4 = FUN_00169294(6,7,0);
              piVar10 = (int *)(temp_v3 + 0x12b8);
              temp_v6 = piVar10[*piVar10 + 2];
              piVar10[*piVar10 + 2] = temp_v4;
              if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v6 != temp_v4) {
                (**(romwright_code **)(temp_v3 + 0x12d4))();
                *(unsigned char *)(temp_v3 + 0x12d0) = 0;
              }
            }
            FUN_0016c4b8(DAT_0059dbb4,
                         *(unsigned int *)
                          (*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(puVar8 + 9) * 0x20 + 0x18));
            VectorUnsignedToFloat((unsigned int)*(unsigned short *)(puVar8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0020cb74(*(unsigned int *)
                          (*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(puVar8 + 9) * 0x20 + 0x18),
                         temp_v14,&temp_v8,puVar8 + 4,
                         (param_4 & 0xffffff00) | (((unsigned int)temp_v0 * (param_4 & 0xff)) / 100),&temp_v12
                         ,0,0,*(unsigned char *)((int)puVar8 + 0x27) & 1,
                         (*(unsigned char *)((int)puVar8 + 0x27) & 2) >> 1);
          }
        }
        else if (*(char *)((int)puVar8 + 0x25) == '\0') goto LAB_004ff118;
        temp_v3 = DAT_0059dbb4;
      }
    }
  }
  return;
}
