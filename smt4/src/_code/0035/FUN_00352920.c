/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352920` (_code @ 0x352920, 0x248 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_1_stack;

extern unsigned char LAB_00352b68; /* 0x352b68 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0023a118. */
/* Supplied declaration required: FUN_0023a154. */
/* Supplied declaration required: FUN_002ac8b0. */
extern int FUN_002b5a48(void);
/* Supplied declaration required: FUN_00355d68. */
/* Supplied declaration required: FUN_0035a0b4. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);
extern unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile(int *, unsigned int, long long, unsigned int, unsigned int);


int * FUN_00352920(unsigned int *param_1)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [20];
  short asStack_f4 [14];
  unsigned int temp_v8;
  int temp_v9;
  unsigned char *temp_v10;
  int temp_v11;
  int temp_v12;
  int iStack_bc;
  unsigned char temp_v13 [96];
  unsigned char temp_v14 [52];
  
  FUN_0023a154(temp_v14,0x30,&LAB_00352b68);
  FUN_002ac8b0(temp_v13,temp_v14,0x30);
  temp_v12 = 0;
  temp_v2 = *param_1;
  temp_v3 = param_1[1];
  temp_v10 = temp_v13;
  piVar4 = &temp_v12;
  temp_v9 = 4;
  temp_v0 = FUN_002b5a48();
  temp_v11 = (temp_v0 + 1) * 2;
  FUN_00355d68(piVar4,temp_v2,temp_v3,&temp_v9,1);
  if (((((unsigned int)piVar4 & 0x3fc00) != 0x4400) || (99 >= ((unsigned int)piVar4 & 0x3ff))) ||
     (((unsigned int)piVar4 & 0x3ff) >= 0xb4)) {
    if ((-1 < (int)piVar4) &&
       (piVar2 = (int *)nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile
                                  (&iStack_bc,temp_v12,romwright_piece_4_4(0x34,temp_v7),0,0),
       piVar4 = piVar2, -1 < (int)piVar2)) {
      temp_v1 = 0x34;
      temp_v5 = 0;
      FUN_0023a118();
      piVar3 = piVar2;
      FUN_0035a0b4();
      temp_v4 = 0;
      if (temp_v4 < temp_v8) {
        do {
          piVar4 = (int *)nn_fs_CTR_MPCore_detail_UserFileSystem_TryReadFile
                                    (&iStack_bc,temp_v12,romwright_piece_4_4(4,&temp_v9),temp_v1,temp_v5);
          if ((int)piVar4 < 0) {
            if (temp_v12 != 0) {
              nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v12);
            }
            return piVar4;
          }
          piVar4 = (int *)(int)(*(short *)((unsigned char *)&temp_v9 + 2));
          temp_v6 = 0xfffffffb < temp_v1;
          temp_v1 = temp_v1 + 4;
          temp_v5 = temp_v5 + temp_v6;
          temp_v6 = piVar4 == piVar2;
          if (temp_v6) {
            piVar4 = (int *)(int)(short)temp_v9;
          }
          if (temp_v6 && piVar4 == piVar3) {
            *(short *)((int)param_1 + 0x4a) = (*(short *)((unsigned char *)&temp_v9 + 2));
            *(short *)(param_1 + 0x12) = (short)temp_v9;
            goto joined_r0x00352ae8;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v8);
      }
      temp_v0 = 0;
LAB_00352b08:
      if ((int *)(int)asStack_f4[temp_v0 * 2] != piVar3) goto LAB_00352b40;
      *(short *)((int)param_1 + 0x4a) = asStack_f4[temp_v0 * 2 + 1];
      *(short *)(param_1 + 0x12) = asStack_f4[temp_v0 * 2];
joined_r0x00352ae8:
      piVar4 = (int *)0x0;
      if (temp_v12 == 0) {
        return (int *)0x0;
      }
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v12);
      return piVar4;
    }
  }
  else {
joined_r0x00352b58:
    piVar4 = (int *)0xd901388b;
  }
  if (temp_v12 != 0) {
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(temp_v12);
  }
  return piVar4;
LAB_00352b40:
  temp_v0 = temp_v0 + 1;
  if (temp_v0 >= 7) goto joined_r0x00352b58;
  goto LAB_00352b08;
}
