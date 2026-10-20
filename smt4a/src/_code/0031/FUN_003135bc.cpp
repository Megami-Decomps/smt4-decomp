/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003135bc` (_code @ 0x3135bc, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_003136e4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005806cc; /* 0x5806cc */
extern unsigned int DAT_005806d0; /* 0x5806d0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_003136e4. */
extern int FUN_003644bc(void);


void FUN_003135bc(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  float in_s0;
  float temp_v5;
  float temp_v6;
  float in_s1;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  
  temp_v0 = FUN_003644bc();
  if (temp_v0 != 0) {
    FUN_003136e4();
    return;
  }
  temp_v7 = *(float *)(g_lmapScene + 0x1c);
  temp_v8 = *(float *)(g_lmapScene + 0x20);
  temp_v9 = *(float *)(g_lmapScene + 0x24);
  temp_v5 = (*(float *)(g_lmapScene + 0x4c) + in_s0) * 0.017453292f;
  temp_v6 = temp_v5;
  FUN_001bc124();
  temp_v7 = temp_v7 + temp_v5 * in_s1;
  FUN_001bbf0c();
  temp_v0 = DAT_005806cc;
  temp_v2 = 0;
  while (*(int *)(DAT_005806cc + temp_v2 * 4 + 4) != 0) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x40) {
      return;
    }
  }
  temp_v4 = DAT_005806cc + temp_v2 * 4;
  temp_v3 = DAT_005806cc + temp_v2 * 0xc;
  *(float *)(temp_v3 + 0x104) = temp_v7;
  *(float *)(temp_v3 + 0x108) = temp_v8;
  *(float *)(temp_v3 + 0x10c) = temp_v9 + temp_v6 * in_s1;
  *(float *)(temp_v3 + 0x108) = temp_v8 + 5.0f;
  *(unsigned int *)(temp_v4 + 4) = 10;
  *(unsigned int *)(temp_v4 + 0x404) = 0x41a00000;
  *(unsigned int *)(temp_v4 + 0x504) = 0xffffff00;
  temp_v1 = DAT_005806d0 & 3;
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 3) {
          DAT_005806d0 = DAT_005806d0 + 1;
          return;
        }
        temp_v0 = temp_v0 + temp_v2 * 0x20;
        *(unsigned int *)(temp_v0 + 0x604) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x608) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x60c) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x610) = 0;
        *(unsigned int *)(temp_v0 + 0x614) = 0;
        *(unsigned int *)(temp_v0 + 0x618) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x61c) = 0;
      }
      else {
        temp_v0 = temp_v0 + temp_v2 * 0x20;
        *(unsigned int *)(temp_v0 + 0x604) = 0;
        *(unsigned int *)(temp_v0 + 0x608) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x60c) = 0;
        *(unsigned int *)(temp_v0 + 0x610) = 0;
        *(unsigned int *)(temp_v0 + 0x614) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x618) = 0x3f800000;
        *(unsigned int *)(temp_v0 + 0x61c) = 0x3f800000;
      }
      *(unsigned int *)(temp_v0 + 0x620) = 0;
    }
    else {
      temp_v0 = temp_v0 + temp_v2 * 0x20;
      *(unsigned int *)(temp_v0 + 0x604) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x608) = 0;
      *(unsigned int *)(temp_v0 + 0x60c) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x610) = 0x3f800000;
      *(unsigned int *)(temp_v0 + 0x614) = 0;
      *(unsigned int *)(temp_v0 + 0x618) = 0;
      *(unsigned int *)(temp_v0 + 0x61c) = 0;
      *(unsigned int *)(temp_v0 + 0x620) = 0x3f800000;
    }
  }
  else {
    temp_v0 = temp_v0 + temp_v2 * 0x20;
    *(unsigned int *)(temp_v0 + 0x604) = 0;
    *(unsigned int *)(temp_v0 + 0x608) = 0;
    *(unsigned int *)(temp_v0 + 0x60c) = 0;
    *(unsigned int *)(temp_v0 + 0x610) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x614) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x618) = 0;
    *(unsigned int *)(temp_v0 + 0x61c) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x620) = 0x3f800000;
  }
  DAT_005806d0 = DAT_005806d0 + 1;
  return;
}

} /* extern "C" */
