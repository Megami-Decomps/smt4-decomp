/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200488` (_code @ 0x200488, 0x3d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_00400080; /* 0x400080 */
extern unsigned int DAT_00446fec; /* 0x446fec */
extern unsigned int DAT_00446ff0; /* 0x446ff0 */
extern unsigned int DAT_00446ff4; /* 0x446ff4 */
extern unsigned int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */
extern int DAT_00447008; /* 0x447008 */
extern int DAT_0044700c; /* 0x44700c */
extern unsigned char DAT_0049e45c; /* 0x49e45c */
extern unsigned char DAT_0049e65c; /* 0x49e65c */
extern unsigned char DAT_0049e7dc; /* 0x49e7dc */
extern unsigned char DAT_0049e87c; /* 0x49e87c */
extern int DAT_0049fc68; /* 0x49fc68 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_00254810. */
/* Supplied declaration required: FUN_0029705c. */


void FUN_00200488(void)

{
/* irregular: 4 goto(s); irregular input(s): in_s0, in_s2; 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float in_s2;
  unsigned long long temp_v5;
  unsigned char *temp_v6 [9];
  
  temp_v1 = 0;
  temp_v5 = 0x457a0000;
  temp_v6[3] = (unsigned char *)0xa00080;
  temp_v6[0] = &DAT_00400080;
  temp_v6[1] = (unsigned char *)0x600080;
  temp_v6[2] = (unsigned char *)0x800080;
  if (DAT_00446fec != 0) {
    do {
      temp_v2 = DAT_00447000 + temp_v1 * 0xa8;
      if (DAT_0049fc68 != 1) {
        if (DAT_0049fc68 != 2) {
          temp_v0 = (&DAT_0049e45c)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v5) goto LAB_00200540;
          temp_v0 = (&DAT_0049e45c)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_0029705c(temp_v6[temp_v1 & 3],temp_v6[temp_v1 & 3]);
        }
      }
      else {
LAB_00200540:
        FUN_0029705c(temp_v6[temp_v1 & 3],temp_v6[temp_v1 & 3]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00446fec);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_00446ff0) {
    do {
      temp_v2 = DAT_00447004 + temp_v1 * 0xa8;
      if (DAT_0049fc68 != 1) {
        if (DAT_0049fc68 != 2) {
          temp_v0 = (&DAT_0049e65c)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v5) goto LAB_002005fc;
          temp_v0 = (&DAT_0049e65c)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_0029705c(temp_v6[temp_v1 & 3],temp_v6[temp_v1 & 3]);
        }
      }
      else {
LAB_002005fc:
        FUN_0029705c(temp_v6[temp_v1 & 3],temp_v6[temp_v1 & 3]);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00446ff0);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_00446ff4) {
    do {
      temp_v2 = DAT_00447008 + temp_v1 * 0xa8;
      if (DAT_0049fc68 != 1) {
        if (DAT_0049fc68 != 2) {
          temp_v0 = (&DAT_0049e7dc)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v5) goto LAB_002006c0;
          temp_v0 = (&DAT_0049e7dc)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00254810(0xff00ff);
          FUN_00254810(0xff00ff);
          FUN_00254810(0xff00ff);
        }
      }
      else {
LAB_002006c0:
        FUN_00254810(0xff00ff);
        FUN_00254810(0xff00ff);
        FUN_00254810(0xff00ff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00446ff4);
  }
  temp_v1 = 0;
  if (temp_v1 < DAT_00446ff8) {
    do {
      temp_v2 = DAT_0044700c + temp_v1 * 0xa8;
      if (DAT_0049fc68 != 1) {
        if (DAT_0049fc68 != 2) {
          temp_v0 = (&DAT_0049e87c)[temp_v1];
        }
        else {
          temp_v4 = *(float *)(temp_v2 + 0x8c) - in_s0;
          temp_v3 = *(float *)(temp_v2 + 0x94) - in_s2;
          if (romwright_sqrt_4(temp_v4 * temp_v4 + temp_v3 * temp_v3) < (float)temp_v5) goto LAB_00200778;
          temp_v0 = (&DAT_0049e87c)[temp_v1];
        }
        if (temp_v0 == '\x01') {
          FUN_00254810(0xff00ff);
          FUN_00254810(0xff00ff);
          FUN_00254810(0xff00ff);
          FUN_00254810(0xff00ff);
        }
      }
      else {
LAB_00200778:
        FUN_00254810(0xffff00ff);
        FUN_00254810(0xffff00ff);
        FUN_00254810(0xffff00ff);
        FUN_00254810(0xffff00ff);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < DAT_00446ff8);
  }
  return;
}
