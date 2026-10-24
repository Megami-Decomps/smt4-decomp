/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002804ec` (_code @ 0x2804ec, 0x49c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int collisionTestProjectedSpherePlanes(...);
int mapFlagSlotsRetireByKey(int);
int FUN_002878fc(...);
int mapBlockBitSet(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char g_mapCollision; /* 0x446fe8 */
extern int DAT_00446ffc; /* 0x446ffc */
extern unsigned char DAT_0049f94c; /* 0x49f94c */
extern unsigned char DAT_0049f94e; /* 0x49f94e */
extern int DAT_0049fb30; /* 0x49fb30 */
extern unsigned short DAT_0049fb40; /* 0x49fb40 */
extern unsigned short DAT_0049fb60; /* 0x49fb60 */
extern unsigned short DAT_0049fb62; /* 0x49fb62 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: collisionTestProjectedSpherePlanes. */
/* Supplied declaration required: mapFlagSlotsRetireByKey. */
/* Supplied declaration required: FUN_002878fc. */
/* Supplied declaration required: mapBlockBitSet. */


unsigned int FUN_002804ec(float *param_1)

{
/* irregular: irregular input(s): in_d10; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int unaff_r11;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  unsigned long long in_d10;
  float temp_v11 [7];
  
  temp_v1 = DAT_00446ffc;
  temp_v6 = 0;
  temp_v4 = 0x493c5c;
  temp_v5 = 0;
  g_mapCollision = 0;
  temp_v8 = 45.0f;
  temp_v9 = *param_1;
  temp_v10 = *(unsigned long long *)(param_1 + 1);
  DAT_0049fb40 = 0;
  if (0 < DAT_00446ffc) {
    in_d10 = 0;
  }
  DAT_0049f94c = 0xff;
  if (0 < DAT_00446ffc) {
    unaff_r11 = 0x49e85c;
  }
  DAT_0049f94e = 0xff;
  if (0 < DAT_00446ffc) {
    do {
      if (*(char *)(temp_v4 + 8) != '\0') {
        temp_v0 = *(char *)(temp_v4 + 9);
        temp_v7 = romwright_fabs_4((temp_v9 * *(float *)(temp_v4 + 0xc) + (float)temp_v10 * *(float *)(temp_v4 + 0x10) +
                    (float)((unsigned long long)temp_v10 >> 0x20) * *(float *)(temp_v4 + 0x14)) -
                    *(float *)(temp_v4 + 0x18));
        if (temp_v0 != '\x01') {
          if (temp_v0 != '\x02') {
            if (temp_v0 != '\x03') {
              if (temp_v0 != '\x04') {
                if (temp_v0 != '\b') {
                  if (temp_v0 != '\t') {
                    if (temp_v0 != '\n') {
                      if (temp_v0 != '\v') {
                        if (((temp_v0 == '\r') && ((temp_v6 & 0x2000) == 0)) &&
                           ((temp_v7 < temp_v8 &&
                            (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),
                                          (int)*(char *)(temp_v4 + 5),temp_v4),
                            (float)in_d10 <= temp_v11[0])))) {
                          mapFlagSlotsRetireByKey((int)*(short *)(temp_v4 + 6));
                          FUN_002878fc((int)*(short *)(temp_v4 + 6));
                          DAT_0049fb62 = *(unsigned short *)(temp_v4 + 10);
                          temp_v6 = temp_v6 | 0x2000;
                        }
                      }
                      else if ((((temp_v6 & 0x800) == 0) && (temp_v7 < temp_v8)) &&
                              (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),
                                            (int)*(char *)(temp_v4 + 5),temp_v4),
                              (float)in_d10 <= temp_v11[0])) {
                        mapFlagSlotsRetireByKey((int)*(short *)(temp_v4 + 6));
                        FUN_002878fc((int)*(short *)(temp_v4 + 6));
                        DAT_0049fb60 = *(unsigned short *)(temp_v4 + 10);
                        temp_v6 = temp_v6 | 0x800;
                      }
                    }
                    else if ((((temp_v6 & 0x400) == 0) && (temp_v7 < temp_v8)) &&
                            (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),
                                          (int)*(char *)(temp_v4 + 5),temp_v4),
                            (float)in_d10 <= temp_v11[0])) {
                      temp_v6 = temp_v6 | 0x400;
                      DAT_0049f94e = (unsigned char)*(unsigned short *)(temp_v4 + 10);
                    }
                  }
                  else if ((((temp_v6 & 0x200) == 0) && (temp_v7 < temp_v8)) &&
                          (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5)
                                        ,temp_v4), (float)in_d10 <= temp_v11[0])) {
                    temp_v6 = temp_v6 | 0x200;
                    DAT_0049f94c = (unsigned char)*(unsigned short *)(temp_v4 + 10);
                  }
                }
                else if ((((temp_v6 & 0x100) == 0) && (temp_v7 < temp_v8)) &&
                        (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5),
                                      temp_v4), (float)in_d10 <= temp_v11[0])) {
                  DAT_0049fb40 = *(unsigned short *)(temp_v4 + 10);
                  temp_v6 = temp_v6 | 0x100;
                }
              }
              else if ((((temp_v6 & 0x10) == 0) && (temp_v7 < temp_v8)) &&
                      (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5),
                                    temp_v4), (float)in_d10 <= temp_v11[0])) {
                DAT_0049fb30 = (int)*(short *)(temp_v4 + 6);
                temp_v6 = temp_v6 | 0x10;
              }
            }
            else if ((((temp_v6 & 8) == 0) && (temp_v7 < temp_v8)) &&
                    (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5),temp_v4
                                 ), (float)in_d10 <= temp_v11[0])) {
              temp_v2 = *(unsigned int *)(temp_v4 + 0x60);
              temp_v3 = *(unsigned int *)(temp_v4 + 100);
              temp_v6 = temp_v6 | 8;
              *(unsigned int *)(unaff_r11 + 800) = *(unsigned int *)(temp_v4 + 0x5c);
              *(unsigned int *)(unaff_r11 + 0x324) = temp_v2;
              *(unsigned int *)(unaff_r11 + 0x328) = temp_v3;
              temp_v2 = *(unsigned int *)(temp_v4 + 0x6c);
              temp_v3 = *(unsigned int *)(temp_v4 + 0x70);
              *(unsigned int *)(unaff_r11 + 0x32c) = *(unsigned int *)(temp_v4 + 0x68);
              *(unsigned int *)(unaff_r11 + 0x330) = temp_v2;
              *(unsigned int *)(unaff_r11 + 0x334) = temp_v3;
              temp_v2 = *(unsigned int *)(temp_v4 + 0x78);
              temp_v3 = *(unsigned int *)(temp_v4 + 0x7c);
              *(unsigned int *)(unaff_r11 + 0x338) = *(unsigned int *)(temp_v4 + 0x74);
              *(unsigned int *)(unaff_r11 + 0x33c) = temp_v2;
              *(unsigned int *)(unaff_r11 + 0x340) = temp_v3;
              temp_v2 = *(unsigned int *)(temp_v4 + 0x84);
              temp_v3 = *(unsigned int *)(temp_v4 + 0x88);
              *(unsigned int *)(unaff_r11 + 0x344) = *(unsigned int *)(temp_v4 + 0x80);
              *(unsigned int *)(unaff_r11 + 0x348) = temp_v2;
              *(unsigned int *)(unaff_r11 + 0x34c) = temp_v3;
              g_mapCollision = 1;
            }
          }
          else if ((((temp_v6 & 4) == 0) && (temp_v7 < temp_v8)) &&
                  (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5),temp_v4),
                  (float)in_d10 <= temp_v11[0])) {
            mapBlockBitSet((int)*(short *)(temp_v4 + 6),1);
            FUN_002878fc((int)*(short *)(temp_v4 + 6));
            temp_v6 = temp_v6 | 4;
          }
        }
        else if ((((temp_v6 & 2) == 0) && (temp_v7 < temp_v8)) &&
                (collisionTestProjectedSpherePlanes(temp_v11,(int)*(char *)(temp_v4 + 4),(int)*(char *)(temp_v4 + 5),temp_v4),
                (float)in_d10 <= temp_v11[0])) {
          temp_v6 = temp_v6 | 2;
        }
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 + 0xa8;
    } while (temp_v5 < temp_v1);
  }
  return temp_v6;
}

} /* extern "C" */
