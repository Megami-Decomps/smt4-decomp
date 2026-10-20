/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206528` (_code @ 0x206528, 0x47c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00199808(int);
int FUN_002a60cc(...);
int FUN_002ae898(int);
int FUN_002bee58(int, int);
int FUN_002bf818(int);
int FUN_002e0da0(int);
int FUN_0032c3fc(...);
int VectorSignedToFloat(int, int);

extern unsigned int g_aocSystem; /* 0x433158 */
extern int g_btlTalkBustUp; /* 0x434210 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00199808. */
extern int FUN_002a60b4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf818. */
extern int randNextInRange(unsigned int);
/* Supplied declaration required: FUN_002e0da0. */
/* Supplied declaration required: FUN_0032c3fc. */


unsigned int FUN_00206528(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp == 0) {
    return 0;
  }
  temp_v1 = *(int *)(g_btlTalkBustUp + 0x2e8);
  if (temp_v1 == 0) {
    *(int *)(temp_v0 + 0x2ec) = *(int *)(temp_v0 + 0x2ec) + 1;
    return 0;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      *(int *)(temp_v0 + 0x2ec) = *(int *)(temp_v0 + 0x2ec) + 1;
      return 0;
    }
    if (*(char *)(g_btlTalkBustUp + 0x2f5) != '\0') {
      switch(*(unsigned int *)(g_btlTalkBustUp + 0x2f0)) {
      case 0:
      case 1:
        temp_v1 = g_btlTalkBustUp + 0x20;
        FUN_002bf818(temp_v1);
        break;
      case 2:
      case 6:
      case 7:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x12:
      case 0x13:
        FUN_002bf818(g_btlTalkBustUp + 0x20);
        temp_v1 = temp_v0 + 0xac;
        FUN_002bf818(temp_v1);
        break;
      case 3:
        FUN_002bf818(g_btlTalkBustUp + 0x20);
        FUN_002bf818(temp_v0 + 0xac);
        temp_v3 = *(unsigned int *)(temp_v0 + 0x2ec);
        temp_v1 = (int)(((long long)(int)temp_v3 * -0x77777777 + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
        temp_v1 = temp_v3 + ((temp_v1 >> 5) - (temp_v1 >> 0x1f)) * -0x3c;
        if (temp_v1 < 10) {
          *(float *)(temp_v0 + 0x2fc) = *(float *)(temp_v0 + 0x2fc) - 0.01f;
          *(float *)(temp_v0 + 0x300) = *(float *)(temp_v0 + 0x300) - 0.005f;
        }
        else if (temp_v1 < 0x14) {
          *(float *)(temp_v0 + 0x300) = *(float *)(temp_v0 + 0x300) - 0.005f;
        }
        else {
          if (temp_v1 < 0x1e) {
            temp_v6 = *(float *)(temp_v0 + 0x2fc) - 0.005f;
            temp_v5 = *(float *)(temp_v0 + 0x300) - 0.005f;
            *(float *)(temp_v0 + 0x2fc) = temp_v6;
          }
          else if (temp_v1 < 0x28) {
            temp_v5 = *(float *)(temp_v0 + 0x300) + 0.005f;
            *(float *)(temp_v0 + 0x2fc) = *(float *)(temp_v0 + 0x2fc) + 0.005f;
          }
          else {
            if (temp_v1 >= 0x32) {
              if (temp_v1 >= 0x3c) {
                FUN_002e0da0(temp_v0 + 0x20);
                FUN_002e0da0(temp_v0 + 0xac);
                break;
              }
              temp_v6 = *(float *)(temp_v0 + 0x2fc) + 0.01f;
              temp_v5 = *(float *)(temp_v0 + 0x300) + 0.005f;
              *(float *)(temp_v0 + 0x2fc) = temp_v6;
              *(float *)(temp_v0 + 0x300) = temp_v5;
              FUN_002e0da0(temp_v0 + 0x20);
              FUN_002e0da0(temp_v0 + 0xac);
              break;
            }
            temp_v5 = *(float *)(temp_v0 + 0x300) + 0.005f;
          }
          *(float *)(temp_v0 + 0x300) = temp_v5;
        }
        FUN_002e0da0(temp_v0 + 0x20);
        FUN_002e0da0(temp_v0 + 0xac);
        break;
      case 4:
        FUN_002bf818(g_btlTalkBustUp + 0x20);
        temp_v1 = 0;
        do {
          temp_v4 = temp_v0 + temp_v1;
          if (*(char *)(temp_v4 + 0x2dc) != '\0') {
            temp_v2 = FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0xac);
            if (temp_v2 != 0) {
              *(unsigned char *)(temp_v4 + 0x2dc) = 0;
            }
          }
          else if ((*(int *)(temp_v0 + 0x2ec) % 10 == 0) && (temp_v2 = randNextInRange(3), temp_v2 == temp_v1))
          {
            FUN_002bee58(temp_v0 + temp_v1 * 0x8c + 0xac,6);
            *(unsigned char *)(temp_v4 + 0x2dc) = 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
        break;
      case 5:
        FUN_002bf818(temp_v0 + 0xac);
        temp_v1 = temp_v0 + 0x138;
        FUN_002bf818(temp_v1);
        break;
      case 8:
        FUN_002bf818(g_btlTalkBustUp + 0x20);
        temp_v3 = *(unsigned int *)(temp_v0 + 0x2ec);
        temp_v1 = (int)(((long long)(int)temp_v3 * -0x77777777 + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
        temp_v1 = temp_v3 + ((temp_v1 >> 7) - (temp_v1 >> 0x1f)) * -0xf0;
        if (temp_v1 < 100) {
          temp_v5 = 0.0f;
          *(float *)(temp_v0 + 0x304) = temp_v5;
        }
        else {
          if (temp_v1 < 0x78) {
            temp_v5 = (float)VectorSignedToFloat(temp_v1 - 100,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v5 = *(float *)(temp_v0 + 0x304) + (0.3f - temp_v5 * 0.015f);
            *(float *)(temp_v0 + 0x304) = temp_v5;
            if ((int)temp_v5 >= 0x4048f5c4) {
              temp_v5 = 3.14f;
            }
            *(float *)(temp_v0 + 0x304) = temp_v5;
            *(float *)(temp_v0 + 0x50) = temp_v5;
            break;
          }
          if (temp_v1 < 0xdc) {
            temp_v5 = 3.14f;
            *(float *)(temp_v0 + 0x304) = temp_v5;
            *(float *)(temp_v0 + 0x50) = temp_v5;
            break;
          }
          if (temp_v1 < 0xf0) {
            temp_v5 = (float)VectorSignedToFloat(temp_v1 - 0xdc,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v5 = *(float *)(temp_v0 + 0x304) + (0.3f - temp_v5 * 0.015f);
            *(float *)(temp_v0 + 0x304) = temp_v5;
            if ((int)temp_v5 >= 0x40c8f5c4) {
              temp_v5 = 6.28f;
            }
            *(float *)(temp_v0 + 0x304) = temp_v5;
            *(float *)(temp_v0 + 0x50) = temp_v5;
            break;
          }
          temp_v5 = *(float *)(temp_v0 + 0x304);
        }
        *(float *)(temp_v0 + 0x50) = temp_v5;
        break;
      case 0xc:
      case 0x10:
        FUN_002bf818(g_btlTalkBustUp + 0x20);
        FUN_002bf818(temp_v0 + 0xac);
        temp_v1 = temp_v0 + 0x138;
        FUN_002bf818(temp_v1);
      }
    }
    else {
      FUN_002bf818(g_btlTalkBustUp + 0x20);
      temp_v1 = g_btlTalkBustUp;
      if (*(char *)(temp_v0 + 0xaa) != '\0') {
        if (*(short *)(temp_v0 + 0x7c) != 10) {
          FUN_00199808(temp_v0);
          *(unsigned char *)(temp_v0 + 0x2f5) = 1;
        }
        else if (g_btlTalkBustUp != 0) {
          if (-1 < *(int *)(g_btlTalkBustUp + 0x2f8)) {
            FUN_002ae898(0x18);
            if (g_btlTalkBustUp != 0) {
              *(unsigned char *)(g_btlTalkBustUp + 0x2f4) = 0;
            }
            FUN_002a60cc(g_aocSystem,0x18,*(unsigned int *)(temp_v1 + 0x2f8));
            *(unsigned int *)(temp_v1 + 0x2f8) = 0xffffffff;
          }
          *(unsigned int *)(temp_v1 + 0x2e8) = 3;
          *(unsigned int *)(temp_v1 + 0x2ec) = 0;
        }
      }
    }
  }
  else {
    temp_v1 = FUN_002a60b4(0x18,*(unsigned int *)(g_btlTalkBustUp + 0x2f8));
    if (temp_v1 != 0) {
      FUN_0032c3fc(temp_v0);
      *(unsigned int *)(temp_v0 + 0x2e8) = 2;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
      *(unsigned char *)(temp_v0 + 0x2f5) = 0;
    }
  }
LAB_00206990:
  *(int *)(temp_v0 + 0x2ec) = *(int *)(temp_v0 + 0x2ec) + 1;
  return 0;
}

} /* extern "C" */
