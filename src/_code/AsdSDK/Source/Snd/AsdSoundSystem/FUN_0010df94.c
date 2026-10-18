/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010df94` (_code @ 0x10df94, 0x574 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004e3138; /* 0x4e3138 */
extern unsigned int DAT_004e313c; /* 0x4e313c */
extern unsigned int DAT_004e3140; /* 0x4e3140 */
extern int DAT_004e3144; /* 0x4e3144 */
extern int DAT_004e3148; /* 0x4e3148 */
extern int DAT_004e314c; /* 0x4e314c */
extern unsigned char DAT_004e3150; /* 0x4e3150 */
extern signed char DAT_004e3151; /* 0x4e3151 */
extern signed char DAT_004e3152; /* 0x4e3152 */
extern int DAT_004e3170; /* 0x4e3170 */
extern int DAT_004e3174; /* 0x4e3174 */
extern int *DAT_004e3178; /* 0x4e3178 */
extern int *DAT_004e317c; /* 0x4e317c */
extern int DAT_004e3180; /* 0x4e3180 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002bcd00. */
/* Supplied declaration required: FUN_002bcd94. */


void FUN_0010df94(void)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int unaff_r6;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned long long temp_v6;
  
  if ((DAT_004e3150 & 1) == 0) {
    return;
  }
  if ((DAT_004e3152 == '\0') && (DAT_004e3180 == 0)) {
    return;
  }
  if (DAT_004e3151 == '\0') {
    if (DAT_004e3152 != '\0') {
      temp_v1 = DAT_004e3180;
      FUN_002bcd00();
      if (temp_v1 == 0) {
        DAT_004e314c = 0;
        return;
      }
    }
    else {
      if (DAT_004e3180 == 0) {
        DAT_004e314c = 0;
        return;
      }
      temp_v1 = *(int *)(DAT_004e3180 + 0x20);
      temp_v3 = temp_v1 == 0;
      if (temp_v3) {
        temp_v1 = *(int *)(DAT_004e3180 + 0x24);
      }
      if (temp_v3 && temp_v1 == 0) {
        temp_v3 = *(int *)(DAT_004e3180 + 0x28) == 0;
        temp_v1 = DAT_004e3180;
        if (temp_v3) {
          temp_v1 = *(int *)(DAT_004e3180 + 0x2c);
        }
        if (temp_v3 && temp_v1 == 0) {
          DAT_004e314c = 0;
          return;
        }
      }
    }
    if (DAT_004e314c == DAT_004e3144) {
      temp_v6 = 0x3f00000000000000;
      temp_v0 = 0;
      do {
        temp_v1 = (&DAT_004e3170)[temp_v0];
        if ((temp_v1 != 0) && ((*(unsigned char *)(temp_v1 + 0x38) & 6) != 0)) {
          temp_v2 = 0;
          if (temp_v0 < 2) {
            temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0x39);
          }
          temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v2 = VectorFloatToUnsigned((float)((unsigned long long)temp_v6 >> 0x20) + temp_v5 * DAT_004e3138,3) & 0xff;
          if (temp_v0 < 2) {
            if (temp_v2 >= 0x80) {
              temp_v2 = 0x7f;
              VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else if (temp_v2 != 0) {
              VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            if (*(int *)(temp_v1 + 0x20) != 0) {
              FUN_002bcd94(*(int *)(temp_v1 + 0x20),DAT_004e313c);
            }
            if (temp_v0 == 0) {
              DAT_004e3150 = DAT_004e3150 | 4;
            }
            else {
              DAT_004e3150 = DAT_004e3150 | 8;
            }
          }
          else {
            DAT_004e3150 = DAT_004e3150 | 8;
          }
          unaff_r6 = 1;
        }
        do {
          if (((temp_v0 < 2) && (piVar2 = (&DAT_004e3178)[temp_v0], piVar2 != (int *)0x0)) &&
             ((*(unsigned char *)(piVar2 + 3) & 6) != 0)) {
            temp_v2 = 0;
            if (temp_v0 < 2) {
              temp_v2 = (unsigned int)*(unsigned char *)((int)piVar2 + 0xd);
            }
            temp_v5 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v2 = VectorFloatToUnsigned
                              ((float)((unsigned long long)temp_v6 >> 0x20) + temp_v5 * DAT_004e3138,3) & 0xff;
            if (temp_v0 < 2) {
              if (temp_v2 >= 0x80) {
                temp_v2 = 0x7f;
                VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              else if (temp_v2 != 0) {
                VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              if (*piVar2 != 0) {
                FUN_002bcd94(*piVar2,DAT_004e313c);
              }
              if (temp_v0 == 0) {
                DAT_004e3150 = DAT_004e3150 | 0x10;
              }
              else {
                DAT_004e3150 = DAT_004e3150 | 0x20;
              }
            }
            else {
              DAT_004e3150 = DAT_004e3150 | 0x20;
            }
            unaff_r6 = 1;
          }
          temp_v0 = temp_v0 + 1;
          if ((int)temp_v0 >= 2) {
            if (unaff_r6 != 0) {
              DAT_004e314c = 0;
              DAT_004e3151 = 1;
              return;
            }
            return;
          }
        } while (temp_v0 >= 2);
      } while( 1 );
    }
    DAT_004e314c = DAT_004e314c + 1;
    return;
  }
  if (DAT_004e3151 == '\x01') {
    if (DAT_004e3152 != '\0') {
      temp_v1 = DAT_004e3180;
      FUN_002bcd00();
      if (temp_v1 != 0) {
        return;
      }
    }
    else if (DAT_004e3180 != 0) {
      temp_v1 = *(int *)(DAT_004e3180 + 0x20);
      temp_v3 = temp_v1 != 0;
      if (!temp_v3) {
        temp_v1 = *(int *)(DAT_004e3180 + 0x24);
      }
      if (temp_v3 || temp_v1 != 0) {
        return;
      }
      temp_v3 = *(int *)(DAT_004e3180 + 0x28) != 0;
      temp_v1 = DAT_004e3180;
      if (!temp_v3) {
        temp_v1 = *(int *)(DAT_004e3180 + 0x2c);
      }
      if (temp_v3 || temp_v1 != 0) {
        return;
      }
    }
    DAT_004e3151 = '\x02';
    DAT_004e314c = DAT_004e314c + 1;
    return;
  }
  if (DAT_004e3151 != '\x02') {
    return;
  }
  if (DAT_004e314c != DAT_004e3148) {
    temp_v1 = DAT_004e314c + 1;
    DAT_004e314c = temp_v1;
    if (DAT_004e3152 != '\0') {
      FUN_002bcd00();
      if (temp_v1 == 0) {
        return;
      }
      DAT_004e314c = 0;
      DAT_004e3151 = 0;
      return;
    }
    if (DAT_004e3180 == 0) {
      return;
    }
    if (*(int *)(DAT_004e3180 + 0x20) != 0) {
      DAT_004e314c = 0;
      DAT_004e3151 = 0;
      return;
    }
    temp_v1 = *(int *)(DAT_004e3180 + 0x24);
    temp_v3 = temp_v1 == 0;
    if (temp_v3) {
      temp_v1 = *(int *)(DAT_004e3180 + 0x28);
    }
    temp_v4 = temp_v3 && temp_v1 == 0;
    if (temp_v3 && temp_v1 == 0) {
      temp_v4 = *(int *)(DAT_004e3180 + 0x2c) == 0;
    }
    if (temp_v4) {
      return;
    }
    DAT_004e314c = 0;
    DAT_004e3151 = 0;
    return;
  }
  if (((DAT_004e3150 & 4) != 0) && (DAT_004e3170 != 0)) {
    temp_v0 = (unsigned int)*(unsigned char *)(DAT_004e3170 + 0x39);
    if (temp_v0 >= 0x80) {
      temp_v0 = 0x7f;
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else if (temp_v0 != 0) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if (*(int *)(DAT_004e3170 + 0x20) != 0) {
      FUN_002bcd94(*(int *)(DAT_004e3170 + 0x20),DAT_004e3140);
    }
  }
  if (((DAT_004e3150 & 8) != 0) && (DAT_004e3174 != 0)) {
    temp_v0 = (unsigned int)*(unsigned char *)(DAT_004e3174 + 0x39);
    if (temp_v0 >= 0x80) {
      temp_v0 = 0x7f;
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else if (temp_v0 != 0) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if (*(int *)(DAT_004e3174 + 0x20) != 0) {
      FUN_002bcd94(*(int *)(DAT_004e3174 + 0x20),DAT_004e3140);
    }
  }
  DAT_004e3150 = DAT_004e3150 | 0x10;
  if ((DAT_004e3150 != 0) && (DAT_004e3178 != (int *)0x0)) {
    temp_v0 = (unsigned int)*(unsigned char *)((int)DAT_004e3178 + 0xd);
    if (temp_v0 >= 0x80) {
      temp_v0 = 0x7f;
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else if (temp_v0 != 0) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    if (*DAT_004e3178 != 0) {
      FUN_002bcd94(*DAT_004e3178,DAT_004e3140);
    }
  }
  DAT_004e3150 = DAT_004e3150 | 0x20;
  if (DAT_004e3150 == 0) {
    DAT_004e314c = 0;
    DAT_004e3151 = 0;
    return;
  }
  if (DAT_004e317c == (int *)0x0) {
    DAT_004e314c = 0;
    DAT_004e3151 = 0;
    return;
  }
  temp_v0 = (unsigned int)*(unsigned char *)((int)DAT_004e317c + 0xd);
  if (temp_v0 >= 0x80) {
    temp_v0 = 0x7f;
  }
  else if (temp_v0 == 0) {
    if (*DAT_004e317c != 0) {
      FUN_002bcd94(*DAT_004e317c,DAT_004e3140);
    }
    DAT_004e314c = 0;
    DAT_004e3151 = 0;
    return;
  }
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  if (*DAT_004e317c != 0) {
    FUN_002bcd94(*DAT_004e317c,DAT_004e3140);
  }
  DAT_004e314c = 0;
  DAT_004e3151 = 0;
  return;
}
