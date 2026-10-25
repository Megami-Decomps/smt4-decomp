/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003172e0` (_code @ 0x3172e0, 0x774 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int characterInfoPanelPopulate(...);
int buttonHelpSetPreset(...);
int padIsButtonRepeat(...);
int asdTMTexTableEntryAt(...);
int FUN_002bf810(...);
int padIsButtonPressed(...);
int uiPointerHitsRect(...);
int FUN_002bffe0(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int buttonHelpHasEnabledEntryForId(unsigned int);
extern int FUN_0026f024(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: characterInfoPanelPopulate. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: padIsButtonRepeat. */
/* Supplied declaration required: asdTMTexTableEntryAt. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: uiPointerHitsRect. */
/* Supplied declaration required: FUN_002bffe0. */


unsigned int FUN_003172e0(int param_1)

{
/* irregular: 8 goto(s); irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  int temp_v16;
  int uStack_34;
  int temp_v17;
  unsigned int temp_v18 [2];
  
  *(unsigned int *)(param_1 + 0x130) = 0;
  temp_v8 = *(int *)(param_1 + 0x13c);
  temp_v9 = *(int *)(param_1 + 0x134);
  temp_v7 = 0;
  temp_v6 = -1;
  temp_v0 = 0;
  temp_v18[0] = 0;
  temp_v17 = 0;
  FUN_002bffe0(param_1 + 0x154,param_1 + 0x158,1);
  *(unsigned int *)(param_1 + 0x14c) = 0xe0;
  asdTMTexTableEntryAt(0x39,*(int *)(param_1 + 0x13c) + 0xe6);
  temp_v16 = *(int *)(param_1 + 0x98);
  uStack_34 = 1;
  temp_v1 = FUN_0026f024(param_1 + 0x90,0x14a,0,0xc);
  if (temp_v1 != 0) {
    *(unsigned char *)(param_1 + 0x9c) = 1;
  }
  else {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (*(char *)(param_1 + 0x9c) != '\x01') {
    return 0;
  }
  temp_v1 = asdTMTexTableEntryAt(0x39,0x42);
  temp_v16 = 0;
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  uiPointerHitsRect(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
               (int)(*(short **)(temp_v1 + 0xc))[1]);
  if (temp_v2 != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) | 1;
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) & 0xfffffffe;
  }
  *(unsigned int *)(param_1 + 0x130) = temp_v3;
  temp_v1 = asdTMTexTableEntryAt(0x39,0x43);
  temp_v16 = 0;
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  uiPointerHitsRect(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
               (int)(*(short **)(temp_v1 + 0xc))[1]);
  if (temp_v2 != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) | 2;
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) & 0xfffffffd;
  }
  *(unsigned int *)(param_1 + 0x130) = temp_v3;
  temp_v1 = asdTMTexTableEntryAt(0x39,0x41);
  temp_v16 = 0;
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  uiPointerHitsRect(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
               (int)(*(short **)(temp_v1 + 0xc))[1]);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) | 4;
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 0x130) & 0xfffffffb;
  }
  *(unsigned int *)(param_1 + 0x130) = temp_v3;
  do {
    if (temp_v1 < *(int *)(param_1 + 0x138)) {
      temp_v2 = asdTMTexTableEntryAt(0x39,temp_v1 + 0xd1);
      temp_v16 = 0;
      temp_v4 = (int)*(short *)(temp_v2 + 8);
      uiPointerHitsRect(temp_v4,(int)*(short *)(temp_v2 + 10),(int)**(short **)(temp_v2 + 0xc),
                   (int)(*(short **)(temp_v2 + 0xc))[1]);
      if (temp_v4 != 0) {
        *(unsigned int *)(param_1 + 0x14c) = 0xe1;
        temp_v6 = temp_v1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xb);
  if (*(int *)(param_1 + 0x138) < 10) {
    *(unsigned int *)(param_1 + 0x130) = 0;
    *(unsigned int *)(param_1 + 0x150) = 0;
  }
  else {
    temp_v3 = *(unsigned int *)(param_1 + 0x130);
    if (temp_v3 != 0) {
      temp_v5 = *(int *)(param_1 + 0x150) + 1;
      *(unsigned int *)(param_1 + 0x150) = temp_v5;
      if ((temp_v5 == 1) || (((int)temp_v5 >= 0xf && ((temp_v5 & 1) == 0)))) {
        if ((temp_v3 & 1) != 0) {
          temp_v3 = temp_v3 | 8;
          *(unsigned int *)(param_1 + 0x130) = temp_v3;
        }
        else if ((temp_v3 & 2) != 0) {
          temp_v3 = temp_v3 | 0x10;
          *(unsigned int *)(param_1 + 0x130) = temp_v3;
        }
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x150) = 0;
    }
  }
  temp_v1 = asdTMTexTableEntryAt(0x39,*(int *)(param_1 + 0x13c) + 0xe6);
  temp_v16 = 3;
  temp_v2 = (int)*(short *)(temp_v1 + 8);
  uiPointerHitsRect(temp_v2,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
               (int)(*(short **)(temp_v1 + 0xc))[1]);
  if (temp_v2 != 0) {
    FUN_002bffe0(temp_v18,&temp_v17,3);
    temp_v1 = temp_v17 - *(int *)(param_1 + 0x158);
    temp_v2 = *(int *)(param_1 + 0x118);
    if (temp_v1 < 0) {
      temp_v1 = -temp_v1;
    }
    temp_v11 = SBORROW4(temp_v2,0xf);
    temp_v4 = temp_v2 - 0xf;
    temp_v10 = temp_v2 == 0xf;
    if (temp_v2 < 0x10) {
      temp_v11 = SBORROW4(temp_v1,8);
      temp_v4 = temp_v1 - 8;
      temp_v10 = temp_v1 == 8;
    }
    if (temp_v10 || temp_v4 < 0 != temp_v11) {
      temp_v0 = 1;
    }
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x130);
  if ((temp_v3 & 8) != 0) {
    if (0 < *(int *)(param_1 + 300)) {
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) - 1;
    }
    if (*(int *)(param_1 + 0x13c) >= 1) {
      *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) - 1;
    }
    else if (0 < *(int *)(param_1 + 0x134)) {
      temp_v6 = *(int *)(param_1 + 0x134) - 1;
      *(int *)(param_1 + 0x134) = temp_v6;
    }
  }
  else if ((temp_v3 & 0x10) != 0) {
    temp_v6 = *(int *)(param_1 + 0x138) - 1;
    if (*(int *)(param_1 + 300) < temp_v6) {
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
    }
    temp_v2 = *(int *)(param_1 + 0x13c);
    temp_v4 = *(int *)(param_1 + 0x138) - 0xb;
    temp_v10 = SBORROW4(temp_v2,10);
    temp_v1 = temp_v2 - 10;
    if (temp_v2 < 10) {
      temp_v10 = SBORROW4(temp_v2,temp_v6);
      temp_v1 = temp_v2 - temp_v6;
    }
    if (temp_v1 < 0 != temp_v10) {
      *(int *)(param_1 + 0x13c) = temp_v2 + 1;
    }
    temp_v2 = *(int *)(param_1 + 0x134);
    temp_v10 = SBORROW4(temp_v2,temp_v4);
    temp_v1 = temp_v2 - temp_v4;
    if (temp_v2 < temp_v4) {
      temp_v10 = SBORROW4(*(int *)(param_1 + 0x13c),temp_v6);
      temp_v1 = *(int *)(param_1 + 0x13c) - temp_v6;
    }
    if (temp_v1 < 0 != temp_v10) {
      temp_v6 = temp_v2 + 1;
      *(int *)(param_1 + 0x134) = temp_v6;
    }
  }
  else if ((temp_v3 & 4) != 0) {
    temp_v2 = *(int *)(param_1 + 0x13c);
    FUN_002bffe0(&uStack_34,&temp_v16,0);
    temp_v6 = asdTMTexTableEntryAt(0x39,0x41);
    temp_v16 = temp_v16 - *(short *)(temp_v6 + 10);
    temp_v1 = *(int *)(param_1 + 0x138);
    temp_v14 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v6 + 0xc) + 2),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v12 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (int)((temp_v14 / temp_v13) * temp_v12);
    *(int *)(param_1 + 300) = temp_v6;
    if (temp_v1 <= temp_v6) {
      temp_v6 = temp_v1 - 1;
      *(int *)(param_1 + 300) = temp_v6;
    }
    temp_v6 = temp_v6 - temp_v2;
    *(int *)(param_1 + 0x134) = temp_v6;
    if (temp_v6 < 1) {
      temp_v6 = 0;
    }
    *(int *)(param_1 + 0x134) = temp_v6;
    if (temp_v1 - 0xb < temp_v6) {
      temp_v6 = temp_v1 - 0xb;
    }
    *(int *)(param_1 + 0x134) = temp_v6;
  }
  else if (temp_v6 == -1) {
    *(unsigned int *)(param_1 + 0x118) = 0;
  }
  else {
    *(int *)(param_1 + 0x13c) = temp_v6;
    *(int *)(param_1 + 300) = *(int *)(param_1 + 0x134) + temp_v6;
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  }
  temp_v6 = *(int *)(param_1 + 0x144) + 8;
  *(int *)(param_1 + 0x144) = temp_v6;
  if (temp_v6 >= 0x119) {
    *(unsigned int *)(param_1 + 0x144) = 0xffffffc8;
  }
  temp_v6 = 1;
  *(unsigned char *)(param_1 + 0x141) = 1;
  temp_v10 = *(int *)(param_1 + 0x13c) == 0;
  if (temp_v10) {
    temp_v6 = *(int *)(param_1 + 0x134);
  }
  if (temp_v10 && temp_v6 == 0) {
    temp_v15 = padIsButtonPressed(5);
    temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
    if ((int)temp_v15 == 0) {
      temp_v15 = padIsButtonPressed(0xe);
      temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
      if ((int)temp_v15 == 0) goto LAB_00317750;
    }
    temp_v1 = *(int *)(param_1 + 0x138);
    if (temp_v1 >= 0xc) {
      temp_v6 = temp_v1 - 0xb;
      *(int *)(param_1 + 0x134) = temp_v6;
      temp_v1 = temp_v1 - 1;
      *(unsigned int *)(param_1 + 0x13c) = 10;
    }
    else {
      temp_v1 = temp_v1 - 1;
      *(int *)(param_1 + 0x13c) = temp_v1;
      *(unsigned int *)(param_1 + 0x134) = 0;
    }
    *(int *)(param_1 + 300) = temp_v1;
  }
  else {
LAB_00317750:
    if ((*(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x13c)) - *(int *)(param_1 + 0x138) == -1) {
      temp_v15 = padIsButtonPressed(6);
      temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
      if ((int)temp_v15 == 0) {
        temp_v15 = padIsButtonPressed(0xf);
        temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
        if ((int)temp_v15 == 0) goto LAB_003177a4;
      }
      *(unsigned int *)(param_1 + 0x134) = 0;
      *(unsigned int *)(param_1 + 0x13c) = 0;
      *(unsigned int *)(param_1 + 300) = 0;
    }
    else {
LAB_003177a4:
      temp_v15 = padIsButtonRepeat(5);
      temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
      if ((int)temp_v15 == 0) {
        temp_v15 = padIsButtonRepeat(0xe);
        temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
        if ((int)temp_v15 != 0) goto LAB_003177cc;
        temp_v6 = padIsButtonRepeat(6);
        if ((temp_v6 != 0) || (temp_v6 = padIsButtonRepeat(0xf), temp_v6 != 0)) {
          temp_v6 = *(int *)(param_1 + 0x138);
          if (*(int *)(param_1 + 300) < temp_v6) {
            *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
          }
          temp_v1 = *(int *)(param_1 + 0x13c);
          if (temp_v1 >= 9) {
            if (temp_v6 - 0xb <= *(int *)(param_1 + 0x134)) {
              if (temp_v1 >= 10) goto LAB_003179a8;
              goto LAB_00317884;
            }
            temp_v1 = *(int *)(param_1 + 0x134) + 1;
            *(int *)(param_1 + 0x134) = temp_v1;
          }
          else {
LAB_00317884:
            temp_v6 = temp_v6 - 1;
            if (temp_v6 > temp_v1) {
              temp_v1 = temp_v1 + 1;
              *(int *)(param_1 + 0x13c) = temp_v1;
            }
          }
        }
        else {
          temp_v6 = padIsButtonRepeat(3);
          if ((temp_v6 != 0) || (temp_v6 = padIsButtonRepeat(0xc), temp_v6 != 0)) {
            temp_v6 = *(int *)(param_1 + 0x134);
            temp_v1 = *(int *)(param_1 + 0x138);
            if (temp_v1 <= temp_v6 + 0xb) {
              if (temp_v1 >= 0xc) {
                temp_v1 = temp_v1 - 1;
                *(unsigned int *)(param_1 + 0x13c) = 10;
              }
              else {
                temp_v1 = temp_v1 - 1;
                *(int *)(param_1 + 0x13c) = temp_v1;
                *(unsigned int *)(param_1 + 0x134) = 0;
              }
              *(int *)(param_1 + 300) = temp_v1;
            }
            else {
              temp_v2 = *(int *)(param_1 + 300) + 10;
              *(int *)(param_1 + 300) = temp_v2;
              if (temp_v1 - 1 < temp_v2) {
                temp_v2 = temp_v1 - 1;
              }
              temp_v6 = temp_v6 + temp_v2;
              *(int *)(param_1 + 300) = temp_v2;
              *(int *)(param_1 + 0x134) = temp_v6;
              if (temp_v1 - 0xb < temp_v6) {
                temp_v6 = temp_v1 - 0xb;
              }
              *(int *)(param_1 + 0x134) = temp_v6;
              if (temp_v6 < 1) {
                temp_v6 = 0;
              }
              *(int *)(param_1 + 0x134) = temp_v6;
            }
          }
          else {
            temp_v6 = padIsButtonRepeat(4);
            if (temp_v6 == 0) {
              temp_v15 = padIsButtonRepeat(0xd);
              temp_v6 = (int)((unsigned long long)temp_v15 >> 0x20);
              if ((int)temp_v15 == 0) goto LAB_003179a8;
            }
            temp_v6 = *(int *)(param_1 + 0x134);
            if (temp_v6 < 1) {
              *(unsigned int *)(param_1 + 0x13c) = 0;
              *(unsigned int *)(param_1 + 300) = 0;
              *(unsigned int *)(param_1 + 0x134) = 0;
            }
            else {
              temp_v6 = temp_v6 - 10;
              temp_v1 = *(int *)(param_1 + 300) - 10;
              *(int *)(param_1 + 300) = temp_v1;
              if (temp_v1 < 1) {
                temp_v1 = 0;
              }
              *(int *)(param_1 + 0x134) = temp_v6;
              *(int *)(param_1 + 300) = temp_v1;
              if (temp_v6 < 1) {
                temp_v6 = 0;
              }
              *(int *)(param_1 + 0x134) = temp_v6;
            }
          }
        }
      }
      else {
LAB_003177cc:
        if (0 < *(int *)(param_1 + 300)) {
          *(int *)(param_1 + 300) = *(int *)(param_1 + 300) - 1;
        }
        if (*(int *)(param_1 + 0x134) >= 1) {
          temp_v6 = *(int *)(param_1 + 0x13c);
          if (temp_v6 < 2) {
            temp_v1 = *(int *)(param_1 + 0x134) - 1;
            *(int *)(param_1 + 0x134) = temp_v1;
            goto LAB_003179a8;
          }
        }
        else if (*(int *)(param_1 + 0x13c) < 1) goto LAB_003179a8;
        temp_v1 = *(int *)(param_1 + 0x13c) - 1;
        *(int *)(param_1 + 0x13c) = temp_v1;
      }
    }
  }
LAB_003179a8:
  temp_v1 = *(int *)(param_1 + 0x13c);
  temp_v10 = temp_v1 == temp_v8;
  if (temp_v10) {
    temp_v6 = *(int *)(param_1 + 0x134);
  }
  if (!temp_v10 || temp_v6 != temp_v9) {
    *(int *)(*(int *)(param_1 + 8) + 0x24) =
         temp_v1 + *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x148);
    characterInfoPanelPopulate(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 8),
                 *(unsigned int *)(param_1 + 0xac));
    FUN_002bf810(0x100016c);
  }
  temp_v6 = padIsButtonPressed(0);
  if ((temp_v6 != 0) || (temp_v6 = buttonHelpHasEnabledEntryForId(1), temp_v6 != 0 || temp_v0)) {
    *(unsigned int *)(param_1 + 0x104) = 8;
    temp_v7 = 2;
    *(unsigned int *)(param_1 + 0x110) = 2;
    *(unsigned int *)(param_1 + 0x114) = 5;
    buttonHelpSetPreset(0xe2);
    FUN_002bf810(0x100016d);
  }
  return temp_v7;
}

} /* extern "C" */
