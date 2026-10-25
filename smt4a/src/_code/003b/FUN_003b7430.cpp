/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7430` (_code @ 0x3b7430, 0x524 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "mapnavi/naviMain.h"

extern "C" {

int FUN_003df7c4(int);
int FUN_004bcd90(short *);

extern int gameGetPlayerData(void);
extern short *gameGetSlotRecord(void);
/* Supplied declaration required: FUN_003df7c4. */
/* Supplied declaration required: FUN_004bcd90. */
extern int bitsAt60Test(short *, unsigned int);


unsigned char FUN_003b7430(int param_1,int param_2,int param_3)

{
/* irregular: 4 goto(s); 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  short *psVar4;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  psVar4 = (short *)0x0;
  if (param_1 < 0) {
    temp_v3 = gameGetPlayerData();
    temp_v1 = playerHasFlagBit(1);
  }
  else {
    psVar4 = (short *)gameGetSlotRecord();
    if (psVar4 == (short *)0x0) {
      return 1;
    }
    temp_v1 = bitsAt60Test(psVar4,1);
  }
  if (temp_v1 != 0) {
    return 1;
  }
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x30);
  temp_v4 = 0;
  temp_v0 = 0;
  if (temp_v2 != 0x7a1) {
    if (temp_v2 < 0x7a1) {
      if (temp_v2 != 0x22) {
        if (temp_v2 < 0x23) {
          if ((temp_v2 == 0x1f || temp_v2 == 0x20) || temp_v2 == 0x21) {
            temp_v0 = 3;
          }
        }
        else if (temp_v2 != 0x23) {
          if (temp_v2 == 0x7a0) {
            temp_v0 = 1;
          }
        }
        else {
          temp_v0 = 3;
        }
      }
      else {
        temp_v0 = 3;
      }
    }
    else {
      temp_v0 = 0;
      switch(temp_v2 - 0x7a1) {
      case 1:
      case 2:
      case 3:
        temp_v0 = 1;
        break;
      case 4:
      case 5:
        temp_v0 = 0x14;
      }
    }
  }
  else {
    temp_v0 = 1;
  }
  if (temp_v2 != 0x7a1) {
    if (temp_v2 < 0x7a1) {
      if (temp_v2 != 0x22) {
        if (temp_v2 < 0x22) {
          if (temp_v2 != 0x1f) {
            if (temp_v2 != 0x20) {
              if (temp_v2 != 0x21) {
                return 1;
              }
              goto LAB_003b7690;
            }
            goto LAB_003b7610;
          }
        }
        else {
          if (temp_v2 == 0x23) goto LAB_003b7790;
          if (temp_v2 != 0x7a0) {
            return 1;
          }
        }
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0x12) < 999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0x12) = temp_v0 + *(short *)(temp_v3 + 0x12);
            }
            if (*(short *)(temp_v3 + 0x12) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x12) = 999;
            }
          }
          else {
            temp_v4 = 1;
          }
        }
        else {
          temp_v4 = psVar4[2] >= 0x3e7;
          if (!temp_v4) {
            if (param_3 == 0) {
              psVar4[2] = psVar4[2] + temp_v0;
            }
            if (psVar4[2] >= 1000) {
              psVar4[2] = 999;
            }
          }
          if (psVar4[0x10] < 999) {
            if (param_3 == 0) {
              psVar4[0x10] = temp_v0 + psVar4[0x10];
            }
            if (psVar4[0x10] >= 1000) {
              psVar4[0x10] = 999;
            }
          }
          else {
            temp_v4 = 1;
          }
        }
      }
      else {
LAB_003b7710:
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0x18) < 999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0x18) = temp_v0 + *(short *)(temp_v3 + 0x18);
            }
            if (*(short *)(temp_v3 + 0x18) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x18) = 999;
            }
          }
          else {
            temp_v4 = 1;
          }
        }
        else {
          temp_v4 = psVar4[5] >= 0x3e7;
          if (!temp_v4) {
            if (param_3 == 0) {
              psVar4[5] = psVar4[5] + temp_v0;
            }
            if (psVar4[5] >= 1000) {
              psVar4[5] = 999;
            }
          }
          if (psVar4[0x13] < 999) {
            if (param_3 == 0) {
              psVar4[0x13] = temp_v0 + psVar4[0x13];
            }
            if (psVar4[0x13] >= 1000) {
              psVar4[0x13] = 999;
            }
          }
          else {
            temp_v4 = 1;
          }
        }
      }
    }
    else {
      switch(temp_v2 - 0x7a1) {
      default:
        return 1;
      case 1:
LAB_003b7690:
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0x14) < 999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0x14) = temp_v0 + *(short *)(temp_v3 + 0x14);
            }
            if (*(short *)(temp_v3 + 0x14) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x14) = 999;
            }
            break;
          }
        }
        else {
          temp_v4 = psVar4[3] >= 0x3e7;
          if (!temp_v4) {
            if (param_3 == 0) {
              psVar4[3] = psVar4[3] + temp_v0;
            }
            if (psVar4[3] >= 1000) {
              psVar4[3] = 999;
            }
          }
          if (psVar4[0x11] < 999) {
            if (param_3 == 0) {
              psVar4[0x11] = temp_v0 + psVar4[0x11];
            }
            if (psVar4[0x11] >= 1000) {
              psVar4[0x11] = 999;
            }
            break;
          }
        }
        temp_v4 = 1;
        break;
      case 2:
        goto LAB_003b7710;
      case 3:
LAB_003b7790:
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0x1a) < 999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0x1a) = temp_v0 + *(short *)(temp_v3 + 0x1a);
            }
            if (*(short *)(temp_v3 + 0x1a) >= 1000) {
              *(unsigned short *)(temp_v3 + 0x1a) = 999;
            }
            break;
          }
        }
        else {
          temp_v4 = psVar4[6] >= 0x3e7;
          if (!temp_v4) {
            if (param_3 == 0) {
              psVar4[6] = psVar4[6] + temp_v0;
            }
            if (psVar4[6] >= 1000) {
              psVar4[6] = 999;
            }
          }
          if (psVar4[0x14] < 999) {
            if (param_3 == 0) {
              psVar4[0x14] = temp_v0 + psVar4[0x14];
            }
            if (psVar4[0x14] >= 1000) {
              psVar4[0x14] = 999;
            }
            break;
          }
        }
        temp_v4 = 1;
        break;
      case 4:
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0xe) < 9999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0xe) = temp_v0 + *(short *)(temp_v3 + 0xe);
            }
            if (*(short *)(temp_v3 + 0xe) >= 10000) {
              *(unsigned short *)(temp_v3 + 0xe) = 9999;
            }
            break;
          }
        }
        else {
          temp_v4 = *psVar4 >= 0x270f;
          if (!temp_v4) {
            if (param_3 == 0) {
              *psVar4 = *psVar4 + temp_v0;
            }
            if (*psVar4 >= 10000) {
              *psVar4 = 9999;
            }
          }
          if (psVar4[0xe] < 9999) {
            if (param_3 == 0) {
              psVar4[0xe] = temp_v0 + psVar4[0xe];
            }
            if (psVar4[0xe] >= 10000) {
              psVar4[0xe] = 9999;
            }
            break;
          }
        }
        temp_v4 = 1;
        break;
      case 5:
        if (temp_v3 != 0) {
          if (*(short *)(temp_v3 + 0x10) < 9999) {
            if (param_3 == 0) {
              *(short *)(temp_v3 + 0x10) = temp_v0 + *(short *)(temp_v3 + 0x10);
            }
            if (*(short *)(temp_v3 + 0x10) >= 10000) {
              *(unsigned short *)(temp_v3 + 0x10) = 9999;
            }
            break;
          }
        }
        else {
          temp_v4 = psVar4[1] >= 0x270f;
          if (!temp_v4) {
            if (param_3 == 0) {
              psVar4[1] = psVar4[1] + temp_v0;
            }
            if (psVar4[1] >= 10000) {
              psVar4[1] = 9999;
            }
          }
          if (psVar4[0xf] < 9999) {
            if (param_3 == 0) {
              psVar4[0xf] = temp_v0 + psVar4[0xf];
            }
            if (psVar4[0xf] >= 10000) {
              psVar4[0xf] = 9999;
            }
            break;
          }
        }
        temp_v4 = 1;
      }
    }
  }
  else {
LAB_003b7610:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x16) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x16) = temp_v0 + *(short *)(temp_v3 + 0x16);
        }
        if (*(short *)(temp_v3 + 0x16) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x16) = 999;
        }
      }
      else {
        temp_v4 = 1;
      }
    }
    else {
      temp_v4 = psVar4[4] >= 0x3e7;
      if (!temp_v4) {
        if (param_3 == 0) {
          psVar4[4] = psVar4[4] + temp_v0;
        }
        if (psVar4[4] >= 1000) {
          psVar4[4] = 999;
        }
      }
      if (psVar4[0x12] < 999) {
        if (param_3 == 0) {
          psVar4[0x12] = temp_v0 + psVar4[0x12];
        }
        if (psVar4[0x12] >= 1000) {
          psVar4[0x12] = 999;
        }
      }
      else {
        temp_v4 = 1;
      }
    }
  }
  if (param_3 == 0 && temp_v4 == 0) {
    if (temp_v3 != 0) {
      FUN_003df7c4(0);
    }
    else {
      FUN_004bcd90(psVar4);
    }
  }
  return temp_v4;
}

} /* extern "C" */
