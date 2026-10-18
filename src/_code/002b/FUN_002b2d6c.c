/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2d6c` (_code @ 0x2b2d6c, 0x56e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 11 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned char sp81; /* 0x81: local_81 */
    unsigned char sp82; /* 0x82: local_82 */
    unsigned char sp83; /* 0x83: local_83 */
    unsigned char sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_4_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */
extern romwright_code *DAT_00464d5c; /* 0x464d5c */
extern unsigned int DAT_0046513c; /* 0x46513c */
extern unsigned int DAT_00465140; /* 0x465140 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_0046514c; /* 0x46514c */
extern int DAT_00465150; /* 0x465150 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */
extern unsigned char DAT_004def18; /* 0x4def18 */
extern unsigned char DAT_004def28; /* 0x4def28 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Supplied declaration required: FUN_00144ab8. */
/* Supplied declaration required: FUN_00144ce0. */
/* Supplied declaration required: FUN_00144e60. */
/* Supplied declaration required: FUN_00144eac. */
/* Supplied declaration required: FUN_00144f98. */
/* Supplied declaration required: FUN_0014540c. */
/* Supplied declaration required: FUN_00145e30. */
/* Supplied declaration required: FUN_002ae6b0. */
/* Supplied declaration required: FUN_002aecd8. */
/* Supplied declaration required: FUN_002aece4. */


/* WARNING: Control flow encountered bad instruction data */

int FUN_002b2d6c(unsigned int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 5 goto(s); irregular input(s): in_cr0, in_cr1, in_cr10, in_cr13, in_cr14, in_cr2, in_cr4, in_cr8, in_fpscr; 21 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  short temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  romwright_code *pcVar9;
  unsigned int temp_v8;
  unsigned int *puVar11;
  int temp_v9;
  int *piVar13;
  int temp_v10;
  int temp_v11;
  unsigned int *puVar16;
  int *unaff_r4;
  int *piVar17;
  int unaff_r6;
  int unaff_r8;
  int unaff_r10;
  unsigned int temp_v12;
  unsigned int *unaff_r11;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr8;
  unsigned int in_cr10;
  unsigned int in_cr13;
  unsigned int in_cr14;
  unsigned int temp_v14;
  unsigned long long temp_v15;
  unsigned char uStack000000e8;
  int temp_v16;
  romwright_code *temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19 [6];
  char temp_v20;
  unsigned char temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  
  temp_v6 = DAT_00464a70;
  temp_v13 = DAT_00464a70 == 0;
  puVar16 = (unsigned int *)&DAT_00464a70;
  if (!temp_v13) {
    puVar16 = DAT_00464a74;
  }
  temp_v5 = temp_v13 || puVar16 == param_2;
  puVar11 = param_2;
  if (!(temp_v13 || puVar16 <= param_2)) {
    puVar16 = (unsigned int *)((int)param_2 * 3);
    puVar11 = (unsigned int *)((int)param_2 * 0xb);
    unaff_r6 = DAT_00464a70 + (int)param_2 * 0x2c;
    temp_v5 = 1;
    if (unaff_r6 == 0) goto LAB_002b2f1c;
    temp_v22 = param_1;
    temp_v23 = param_1;
    temp_v24 = param_1;
    FUN_002aecd8(temp_v19);
    piVar17 = *(int **)(unaff_r6 + 8);
    FUN_002aece4(&temp_v16,piVar17,0x30);
    FUN_00145e30(DAT_0044ea00);
    temp_v16 = param_3;
    piVar13 = (int *)((int)&temp_v16 + ((int)temp_v18 >> 1));
    pcVar9 = temp_v17;
    if ((temp_v18 & 1) != 0) {
      pcVar9 = *(romwright_code **)(temp_v17 + *piVar13);
    }
    temp_v6 = (*pcVar9)(piVar13);
    if (param_4 < temp_v16 - param_3) {
      FUN_00145e30(DAT_0044ea00);
      param_1 = (unsigned int)*(unsigned short *)(unaff_r6 + 0x3e);
      if ((DAT_0046513c <= param_1) && (param_1 <= DAT_0046513c + DAT_0046514c)) {
        return 0;
      }
      if ((DAT_00465140 <= param_1) && (param_1 <= DAT_00465150 + DAT_00465140)) {
        return 1;
      }
      if ((DAT_00465144 <= param_1) && (param_1 <= DAT_00465154 + DAT_00465144)) {
        return 2;
      }
      if (param_1 < DAT_00465148) {
        return 0;
      }
      temp_v8 = DAT_00465158 + DAT_00465148;
      if (temp_v8 < param_1) {
        return 0;
      }
      return 3;
    }
    if (temp_v6 != 10) {
      temp_v15 = (**(romwright_code **)(*piVar17 + 0x44))(piVar17,temp_v6);
      temp_v8 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
      if ((int)temp_v15 != 0) {
        (**(romwright_code **)(*piVar17 + 0x40))(piVar17,temp_v19,temp_v6);
        in_fpscr = in_fpscr & 0xfffffff;
        VectorUnsignedToFloat((unsigned int)temp_v21,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = VectorSignedToFloat((int)temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        coprocessor_movefromRt(0,7,1,in_cr8,in_cr14);
        coprocessor_movefromRt(10,5,0,in_cr0,in_cr0);
        VectorSignedToFloat((int)temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
        coprocessor_function(10,0xf,0,in_cr10,in_cr13,in_cr1);
        coprocessor_moveto(10,3,4,&uStack000000e8,in_cr2,in_cr0);
        coprocessor_movefromRt(0,0,0,in_cr0,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1 = 0;
      if (temp_v8 < param_1) {
        return 0;
      }
      return 3;
    }
    temp_v14 = (**(romwright_code **)(*piVar17 + 0x24))(piVar17);
    VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
    if ((temp_v18 & 1) != 0) {
      temp_v17 = *(romwright_code **)(temp_v17 + *(int *)((int)&temp_v16 + ((int)temp_v18 >> 1)));
    }
    param_1 = (*temp_v17)();
  }
  else {
LAB_002b2f1c:
    if (!temp_v5) {
      if (puVar16 == (unsigned int *)0x0) {
        if (puVar11 == (unsigned int *)0xf812) {
          do {
            temp_v6 = unaff_r4[2];
            unaff_r4[2] = temp_v6 + 1;
            unaff_r4[4] = unaff_r4[4] + 1;
          } while (*(short *)(param_1 + (temp_v6 + 1) * 0x20) != 0);
          puVar11 = (unsigned int *)0x0;
        }
        else if (puVar11 == unaff_r11) {
          temp_v7 = DAT_00464a70 + 1;
          temp_v9 = DAT_00464a70 + 2;
          unaff_r4[2] = temp_v7;
          unaff_r4[4] = 1;
          temp_v1 = *(unsigned short *)(param_1 + temp_v7 * 0x20);
          unaff_r4[2] = temp_v9;
          unaff_r4[4] = unaff_r8;
          temp_v2 = *(unsigned short *)(param_1 + temp_v9 * 0x20);
          temp_v7 = temp_v6 + 3;
          unaff_r4[4] = 3;
          temp_v14 = romwright_piece_2_2(temp_v2,temp_v1);
          unaff_r4[2] = temp_v7;
          temp_v1 = *(unsigned short *)(param_1 + temp_v7 * 0x20);
          temp_v6 = temp_v6 + 4;
          unaff_r4[2] = temp_v6;
          unaff_r4[4] = 4;
          temp_v12 = romwright_piece_2_2(*(unsigned short *)(param_1 + temp_v6 * 0x20),temp_v1);
          if (DAT_00464d5c != (romwright_code *)0x0) {
            (*DAT_00464d5c)(temp_v14,temp_v12);
          }
          if ((unaff_r4[0xd] & 0x100U) != 0) {
            FUN_00144f98(temp_v14,temp_v12);
          }
          goto LAB_002b3570;
        }
        temp_v6 = 0;
        do {
          if ((*(int *)(temp_v6 * 4 + 0x4daee8) != 0) &&
             ((unsigned int *)(unsigned int)*(unsigned short *)(&DAT_004def18 + temp_v6 * 2) == puVar11)) {
            FUN_0014540c();
            break;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
      }
LAB_002b3570:
      temp_v6 = unaff_r4[2];
      unaff_r4[2] = temp_v6 + 1;
      unaff_r4[4] = unaff_r4[4] + 1;
      temp_v0 = *(unsigned short *)(*unaff_r4 + (temp_v6 + 1) * 0x20);
      if (temp_v0 == 0xffff) {
        *(char *)(unaff_r4 + 0x11) = (char)unaff_r8;
        unaff_r4[0xc] = unaff_r10;
        if ((unaff_r4[0xd] & 0x300U) != 0) {
          FUN_00144eac();
          temp_v6 = unaff_r4[3];
          if (temp_v6 < unaff_r4[4] + temp_v6) {
            do {
              FUN_00144ce0(*(unsigned short *)(*unaff_r4 + temp_v6 * 0x20));
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < unaff_r4[4] + unaff_r4[3]);
          }
          if ((unaff_r4[0xd] & 0x200U) != 0) {
            FUN_00144e60(1);
          }
          FUN_00144ab8();
        }
        return 1;
      }
      temp_v6 = 0;
      temp_v7 = FUN_002ae6b0(temp_v0);
joined_r0x002b3628:
      if (temp_v7 == 0) {
        return temp_v6;
      }
      temp_v7 = 0;
      do {
        if ((*(int *)(temp_v7 * 4 + 0x4daee8) != 0) &&
           (*(unsigned short *)(&DAT_004def18 + temp_v7 * 2) == temp_v0)) {
          temp_v7 = 0;
          goto LAB_002b36ac;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 8);
      if (temp_v0 != 0xf813) {
        if (temp_v0 < 0xf813) {
          if (temp_v0 == 0xf805) {
            temp_v6 = unaff_r4[2];
            unaff_r4[2] = temp_v6 + 1;
            unaff_r4[4] = unaff_r4[4] + 1;
            temp_v0 = *(unsigned short *)(*unaff_r4 + (temp_v6 + 1) * 0x20);
            *(unsigned char *)(unaff_r4 + 0x11) = 4;
            unaff_r4[10] = 0;
            unaff_r4[0xb] = (unsigned int)temp_v0;
            return 1;
          }
          if (temp_v0 < 0xf805) {
            if (temp_v0 != 0xf801) {
              if (temp_v0 != 0xf802) {
                if (temp_v0 == 0xf804) {
                  unaff_r4[2] = unaff_r4[2] + 1;
                  unaff_r4[4] = unaff_r4[4] + 1;
                }
              }
              else {
                *(unsigned char *)(unaff_r4 + 0x11) = 2;
                temp_v6 = 1;
                unaff_r4[0xc] = 0;
              }
            }
          }
          else {
            if (temp_v0 == 0xf806) {
              *(unsigned char *)(unaff_r4 + 0x11) = 3;
              return 1;
            }
            if (temp_v0 == 0xf812) {
              do {
                temp_v7 = unaff_r4[2];
                unaff_r4[2] = temp_v7 + 1;
                unaff_r4[4] = unaff_r4[4] + 1;
              } while (*(short *)(*unaff_r4 + (temp_v7 + 1) * 0x20) != 0);
            }
          }
        }
        else {
          switch(temp_v0) {
          case 0xf814:
            unaff_r4[2] = unaff_r4[2] + 2;
            unaff_r4[4] = unaff_r4[4] + 2;
            break;
          case 0xf817:
            do {
              do {
                temp_v7 = unaff_r4[2];
                unaff_r4[2] = temp_v7 + 1;
                unaff_r4[4] = unaff_r4[4] + 1;
                temp_v4 = *(short *)(*unaff_r4 + (temp_v7 + 1) * 0x20);
                temp_v7 = FUN_002ae6b0(temp_v4);
              } while (temp_v7 == 0);
            } while (temp_v4 != -0x7e8);
            break;
          case 0xf819:
          case 0xf81a:
            unaff_r4[2] = unaff_r4[2] + 1;
            unaff_r4[4] = unaff_r4[4] + 1;
          }
        }
      }
      else {
        temp_v7 = unaff_r4[2];
        unaff_r4[2] = temp_v7 + 1;
        temp_v9 = unaff_r4[4];
        unaff_r4[4] = temp_v9 + 1;
        temp_v10 = *unaff_r4;
        temp_v1 = *(unsigned short *)(temp_v10 + (temp_v7 + 1) * 0x20);
        unaff_r4[2] = temp_v7 + 2;
        unaff_r4[4] = temp_v9 + 2;
        temp_v2 = *(unsigned short *)(temp_v10 + (temp_v7 + 2) * 0x20);
        unaff_r4[2] = temp_v7 + 3;
        unaff_r4[4] = temp_v9 + 3;
        temp_v12 = romwright_piece_2_2(temp_v2,temp_v1);
        temp_v1 = *(unsigned short *)(temp_v10 + (temp_v7 + 3) * 0x20);
        unaff_r4[2] = temp_v7 + 4;
        unaff_r4[4] = temp_v9 + 4;
        temp_v14 = romwright_piece_2_2(*(unsigned short *)(temp_v10 + (temp_v7 + 4) * 0x20),temp_v1);
        if (DAT_00464d5c != (romwright_code *)0x0) {
          (*DAT_00464d5c)(temp_v12,temp_v14);
        }
        if ((unaff_r4[0xd] & 0x100U) != 0) {
          FUN_00144f98(temp_v12,temp_v14);
        }
      }
      goto LAB_002b3a64;
    }
  }
  coprocessor_function(0,0xb,6,in_cr0,in_cr0,in_cr2);
  temp_v8 = param_1 & ((unaff_r6 - 0xf0U) >> 7);
  if (temp_v8 < param_1) {
    return 0;
  }
  return 3;
  while (temp_v7 = temp_v7 + 1, temp_v7 < 8) {
LAB_002b36ac:
    if ((*(int *)(temp_v7 * 4 + 0x4daee8) != 0) && (*(unsigned short *)(&DAT_004def18 + temp_v7 * 2) == temp_v0))
    {
      temp_v9 = *(int *)(&DAT_004def28 + temp_v7 * 4);
      if (temp_v9 != 1) {
        if (temp_v9 != 2) {
          if (temp_v9 != 3) {
            if (temp_v9 == 4) {
              temp_v9 = unaff_r4[2];
              unaff_r4[2] = temp_v9 + 1;
              temp_v10 = unaff_r4[4];
              unaff_r4[4] = temp_v10 + 1;
              temp_v11 = *unaff_r4;
              temp_v1 = *(unsigned short *)(temp_v11 + (temp_v9 + 1) * 0x20);
              unaff_r4[4] = temp_v10 + 2;
              unaff_r4[2] = temp_v9 + 2;
              temp_v2 = *(unsigned short *)(temp_v11 + (temp_v9 + 2) * 0x20);
              unaff_r4[2] = temp_v9 + 3;
              unaff_r4[4] = temp_v10 + 3;
              temp_v3 = *(unsigned short *)(temp_v11 + (temp_v9 + 3) * 0x20);
              unaff_r4[2] = temp_v9 + 4;
              unaff_r4[4] = temp_v10 + 4;
              (**(romwright_code **)(temp_v7 * 4 + 0x4daee8))
                        (temp_v1,temp_v2,temp_v3,*(unsigned short *)(temp_v11 + (temp_v9 + 4) * 0x20));
            }
          }
          else {
            temp_v9 = unaff_r4[2];
            unaff_r4[2] = temp_v9 + 1;
            temp_v10 = unaff_r4[4];
            unaff_r4[4] = temp_v10 + 1;
            temp_v11 = *unaff_r4;
            temp_v1 = *(unsigned short *)(temp_v11 + (temp_v9 + 1) * 0x20);
            unaff_r4[2] = temp_v9 + 2;
            unaff_r4[4] = temp_v10 + 2;
            temp_v2 = *(unsigned short *)(temp_v11 + (temp_v9 + 2) * 0x20);
            unaff_r4[4] = temp_v10 + 3;
            unaff_r4[2] = temp_v9 + 3;
            (**(romwright_code **)(temp_v7 * 4 + 0x4daee8))
                      (temp_v1,temp_v2,*(unsigned short *)(temp_v11 + (temp_v9 + 3) * 0x20));
          }
        }
        else {
          temp_v9 = unaff_r4[2];
          temp_v10 = temp_v9 + 1;
          unaff_r4[2] = temp_v10;
          temp_v11 = unaff_r4[4];
          temp_v9 = temp_v9 + 2;
          unaff_r4[4] = temp_v11 + 1;
          temp_v1 = *(unsigned short *)(*unaff_r4 + temp_v10 * 0x20);
          unaff_r4[2] = temp_v9;
          unaff_r4[4] = temp_v11 + 2;
          (**(romwright_code **)(temp_v7 * 4 + 0x4daee8))(temp_v1,*(unsigned short *)(*unaff_r4 + temp_v9 * 0x20));
        }
      }
      else {
        temp_v9 = unaff_r4[2];
        unaff_r4[2] = temp_v9 + 1;
        unaff_r4[4] = unaff_r4[4] + 1;
        (**(romwright_code **)(temp_v7 * 4 + 0x4daee8))(*(unsigned short *)(*unaff_r4 + (temp_v9 + 1) * 0x20));
      }
      break;
    }
  }
LAB_002b3a64:
  temp_v7 = unaff_r4[2];
  unaff_r4[2] = temp_v7 + 1;
  unaff_r4[4] = unaff_r4[4] + 1;
  temp_v0 = *(unsigned short *)(*unaff_r4 + (temp_v7 + 1) * 0x20);
  if (temp_v6 != 0) {
    if ((unaff_r4[0xd] & 0x300U) != 0) {
      FUN_00144eac();
      temp_v7 = unaff_r4[3];
      if (temp_v7 < unaff_r4[4] + temp_v7) {
        do {
          FUN_00144ce0(*(unsigned short *)(*unaff_r4 + temp_v7 * 0x20));
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < unaff_r4[3] + unaff_r4[4]);
      }
      if ((unaff_r4[0xd] & 0x200U) != 0) {
        FUN_00144e60(1);
      }
      FUN_00144ab8();
      return temp_v6;
    }
    return temp_v6;
  }
  temp_v7 = FUN_002ae6b0(temp_v0);
  goto joined_r0x002b3628;
}
