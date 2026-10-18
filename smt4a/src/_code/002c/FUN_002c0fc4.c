/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0fc4` (_code @ 0x2c0fc4, 0x3ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_00400080; /* 0x400080 */
extern unsigned int DAT_00580208; /* 0x580208 */
extern unsigned int DAT_0058020c; /* 0x58020c */
extern unsigned int DAT_00580210; /* 0x580210 */
extern unsigned int DAT_00580214; /* 0x580214 */
extern int DAT_0058021c; /* 0x58021c */
extern int DAT_00580220; /* 0x580220 */
extern int DAT_00580224; /* 0x580224 */
extern int DAT_00580228; /* 0x580228 */
extern unsigned char DAT_005ecf14; /* 0x5ecf14 */
extern unsigned char DAT_005ed114; /* 0x5ed114 */
extern unsigned char DAT_005ed294; /* 0x5ed294 */
extern unsigned char DAT_005ed334; /* 0x5ed334 */
extern int DAT_005f1bc8; /* 0x5f1bc8 */
extern unsigned char DAT_00600080; /* 0x600080 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00203970. */
/* Supplied declaration required: FUN_00280a08. */


void FUN_002c0fc4(void)

{
/* irregular: 4 goto(s); irregular input(s): in_s0, in_s2; 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float in_s2;
  float temp_v5;
  unsigned long long temp_v6;
  unsigned char *temp_v7 [8];
  
  temp_v1 = 0;
  temp_v7[0] = &LAB_00400080;
  temp_v7[1] = &DAT_00600080;
  temp_v6 = 0x457a0000;
  temp_v7[2] = (unsigned char *)0x800080;
  temp_v7[3] = (unsigned char *)0xa00080;
  if (DAT_00580208 != 0) {
    do {
      temp_v2 = DAT_0058021c + temp_v1 * 0xa8;
      if (DAT_005f1bc8 != 1) {
        if (DAT_005f1bc8 != 2) {
          temp_v0 = (&DAT_005ecf14)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v6) goto LAB_002c1084;
          temp_v0 = (&DAT_005ecf14)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00280a08(temp_v7[temp_v1 & 3],temp_v7[temp_v1 & 3]);
        }
      }
      else {
LAB_002c1084:
        FUN_00280a08(temp_v7[temp_v1 & 3],temp_v7[temp_v1 & 3]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00580208);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_0058020c) {
    do {
      temp_v2 = DAT_00580220 + temp_v1 * 0xa8;
      if (DAT_005f1bc8 != 1) {
        if (DAT_005f1bc8 != 2) {
          temp_v0 = (&DAT_005ed114)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v6) goto LAB_002c1144;
          temp_v0 = (&DAT_005ed114)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00280a08(temp_v7[temp_v1 & 3],temp_v7[temp_v1 & 3]);
        }
      }
      else {
LAB_002c1144:
        FUN_00280a08(temp_v7[temp_v1 & 3],temp_v7[temp_v1 & 3]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_0058020c);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_00580210) {
    do {
      temp_v2 = DAT_00580224 + temp_v1 * 0xa8;
      if (DAT_005f1bc8 != 1) {
        if (DAT_005f1bc8 != 2) {
          temp_v0 = (&DAT_005ed294)[temp_v1];
        }
        else {
          temp_v5 = (float)temp_v6;
          temp_v6 = CONCAT44(temp_v5,temp_v5);
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < temp_v5) goto LAB_002c120c;
          temp_v0 = (&DAT_005ed294)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00203970(0xff00ff);
          FUN_00203970(0xff00ff);
          FUN_00203970(0xff00ff);
        }
      }
      else {
LAB_002c120c:
        FUN_00203970(0xff00ff);
        FUN_00203970(0xff00ff);
        FUN_00203970(0xff00ff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00580210);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_00580214) {
    do {
      temp_v2 = DAT_00580228 + temp_v1 * 0xa8;
      if (DAT_005f1bc8 != 1) {
        if (DAT_005f1bc8 != 2) {
          temp_v0 = (&DAT_005ed334)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v6) goto LAB_002c12c8;
          temp_v0 = (&DAT_005ed334)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00203970(0xff00ff);
          FUN_00203970(0xff00ff);
          FUN_00203970(0xff00ff);
          FUN_00203970(0xff00ff);
        }
      }
      else {
LAB_002c12c8:
        FUN_00203970(0xffff00ff);
        FUN_00203970(0xffff00ff);
        FUN_00203970(0xffff00ff);
        FUN_00203970(0xffff00ff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00580214);
  }
  return;
}
