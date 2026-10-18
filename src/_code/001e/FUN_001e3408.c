/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e3408` (_code @ 0x1e3408, 0x438 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001e3850; /* 0x1e3850 */
extern int DAT_00433158; /* 0x433158 */
extern int *DAT_00447e58; /* 0x447e58 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001e32f0. */
/* Supplied declaration required: FUN_0021e070. */
/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_0025c110. */
/* Supplied declaration required: FUN_0026715c. */
extern int FUN_0028549c(int, unsigned int);
extern int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002a06c8. */
extern int FUN_002ae16c(int);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002dffd8. */
/* Supplied declaration required: FUN_002f4754. */
/* Supplied declaration required: FUN_002fb468. */
extern int FUN_00316eac(int, int);
extern int FUN_0031b928(void);


unsigned int FUN_001e3408(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 12 native warning(s); review required */
  short temp_v0;
  int *piVar2;
  short *psVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar8;
  int *piVar9;
  int *piVar10;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  int temp_v6;
  unsigned char temp_v7 [68];
  
  piVar9 = DAT_00447e58;
  temp_v3 = *DAT_00447e58;
  if (temp_v3 != 0) {
    if (temp_v3 != 1) {
      if (temp_v3 == 2) {
        temp_v4 = DAT_00447e58[2];
        temp_v5 = param_1 == 100;
        temp_v3 = param_1 - 100;
        if (param_1 >= 0x65) {
          temp_v5 = temp_v4 == 0;
          temp_v3 = temp_v4;
        }
        piVar10 = DAT_00447e58 + temp_v4 * 0xe + 3;
        if ((!temp_v5 && temp_v3 < 0 == (param_1 < 0x65 && SBORROW4(param_1,100))) ||
           (temp_v3 = FUN_002ae16c(DAT_00447e58[temp_v4 * 0xe + 0xf]), temp_v3 != 0)) {
          FUN_002a06c8(piVar9[temp_v4 * 0xe + 0xf],1);
          temp_v3 = DAT_00447e58[1];
          FUN_0026715c();
          FUN_002fb468();
          if (*(char *)(temp_v3 + 0x33) == '\x13') {
            FUN_0025c0f0(*(unsigned int *)(piVar9[temp_v4 * 0xe + 0xf] + 8),0);
          }
          *(unsigned char *)piVar10 = 1;
          temp_v0 = *(short *)(temp_v3 + 0x28);
          *(short *)(piVar9 + temp_v4 * 0xe + 4) = temp_v0;
          *(short *)(piVar9 + temp_v4 * 0xe + 5) = (short)DAT_00447e58[1];
          temp_v2 = (int)*(char *)(temp_v3 + 0x32);
          *(short *)((int)piVar9 + temp_v4 * 0x38 + 0x16) = (short)*(char *)(temp_v3 + 0x32);
          piVar9[temp_v4 * 0xe + 6] = 0x40800000;
          temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x2a),(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar9[temp_v4 * 0xe + 7] = temp_v6;
          temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x2c),(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar9[temp_v4 * 0xe + 8] = temp_v6;
          temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x2e),(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar9[temp_v4 * 0xe + 9] = temp_v6;
          temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x30),(unsigned char)(in_fpscr >> 0x16) & 3);
          piVar9[temp_v4 * 0xe + 10] = temp_v3;
          piVar9[temp_v4 * 0xe + 0xb] = 0;
          piVar9[temp_v4 * 0xe + 0x10] = 0;
          if (temp_v0 == 1) {
            FUN_0021e070();
            piVar9[temp_v4 * 0xe + 0xe] = temp_v2;
          }
          piVar9 = DAT_00447e58;
          DAT_00447e58[2] = DAT_00447e58[2] + 1;
          piVar9[1] = piVar9[1] + 1;
          *piVar9 = 1;
        }
      }
    }
    else {
      temp_v3 = FUN_002fb468();
      for (psVar8 = (short *)DAT_00447e58[1]; (int)psVar8 < temp_v3;
          psVar8 = (short *)((int)psVar8 + 1)) {
        psVar3 = psVar8;
        FUN_0026715c();
        temp_v4 = DAT_00433158;
        FUN_0025c110(DAT_00433158,0x24);
        if (temp_v4 != 0) {
          if (*psVar3 != -1) goto LAB_001e35b0;
          temp_v4 = DAT_00433158;
          FUN_0025c110(DAT_00433158,0x24,0);
          if (temp_v3 - temp_v4 <= (int)psVar8) {
            piVar9 = DAT_00447e58;
            *DAT_00447e58 = 0;
            piVar9[1] = -1;
            return 1;
          }
        }
        else {
          if (*psVar3 == -1) {
            piVar9 = DAT_00447e58;
            *DAT_00447e58 = 0;
            piVar9[1] = -1;
            return 1;
          }
LAB_001e35b0:
          if (*psVar3 == param_1) {
            temp_v1 = (unsigned int)psVar3[1];
            temp_v5 = temp_v1 != param_2;
            if (temp_v5) {
              temp_v1 = (unsigned int)*(unsigned char *)((int)psVar3 + 0x33);
            }
            if ((!temp_v5 || temp_v1 == 0x13) &&
               (temp_v4 = FUN_00316eac((int)psVar3[2],(int)psVar3[3]), temp_v4 != 0)) {
              if (param_3 == 0) {
                DAT_00447e58[1] = (int)psVar8;
                break;
              }
              temp_v4 = 0;
              while (((char)DAT_00447e58[temp_v4 * 0xe + 3] == '\0' ||
                     ((short *)(int)(short)DAT_00447e58[temp_v4 * 0xe + 5] != psVar8))) {
                temp_v4 = temp_v4 + 1;
                if (temp_v4 >= 0x40) {
                  DAT_00447e58[1] = (int)psVar8;
                  goto LAB_001e3664;
                }
              }
            }
          }
        }
      }
LAB_001e3664:
      piVar9 = DAT_00447e58;
      temp_v4 = DAT_00447e58[2];
      temp_v3 = DAT_00447e58[1];
      FUN_0026715c();
      *(unsigned short *)(piVar9 + temp_v4 * 0xe + 0xd) = *(unsigned short *)(temp_v3 + 4);
      *(unsigned short *)((int)piVar9 + temp_v4 * 0x38 + 0x36) = *(unsigned short *)(temp_v3 + 6);
      *(unsigned char *)((int)piVar9 + temp_v4 * 0x38 + 0xf) = 0;
      *(short *)(piVar9 + temp_v4 * 0xe + 5) = (short)DAT_00447e58[1];
      *(short *)((int)piVar9 + temp_v4 * 0x38 + 0x12) = (short)*(char *)(temp_v3 + 0x33);
      FUN_002be7fc(temp_v7,&LAB_001e3850);
      if ((param_1 >= 0x65) && (DAT_00447e58[2] >= 1)) {
        temp_v3 = FUN_0028549c(DAT_00447e58[0xf],0);
      }
      else {
        temp_v3 = FUN_0029a2d0(temp_v7,0x1c0);
      }
      piVar9[temp_v4 * 0xe + 0xf] = temp_v3;
      *DAT_00447e58 = *DAT_00447e58 + 1;
    }
  }
  else if (param_3 != 0) {
    DAT_00447e58[1] = 0;
    *piVar9 = 1;
  }
  else {
    temp_v3 = FUN_0031b928();
    piVar9 = (int *)0x0;
    if (0 < temp_v3) {
      do {
        piVar10 = piVar9;
        FUN_002f4754();
        if (((*piVar10 != 999999) && (*piVar10 == param_1)) && (piVar10[1] == param_2)) {
          piVar10 = (int *)((int)piVar9 + 1);
          piVar9 = piVar10;
          for (; (int)piVar10 < 9999; piVar10 = (int *)((int)piVar10 + 1)) {
            piVar2 = piVar9;
            FUN_002f4754();
            if (*piVar2 == 0xf423e) break;
            VectorSignedToFloat(piVar2[1],(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(*piVar2,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(piVar2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002dffd8();
            piVar9 = (int *)((int)piVar9 + 1);
          }
          FUN_001e32f0();
        }
        piVar9 = (int *)((int)piVar9 + 1);
      } while ((int)piVar9 < temp_v3);
    }
    piVar9 = DAT_00447e58;
    DAT_00447e58[1] = 0;
    piVar9[2] = 0;
    *piVar9 = *piVar9 + 1;
  }
  return 0;
}
