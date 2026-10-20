/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e8b8` (_code @ 0x26e8b8, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, unsigned int);
int FUN_0019d880(void);
int VectorUnsignedToFloat(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int g_camp; /* 0x57f108 */
extern int g_renderCtx; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019d880. */


void FUN_0026e8b8(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 6 goto(s); irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float in_s0;
  
  if (param_1 == 0x1e) {
    temp_v0 = *(char *)(g_camp + 0x32b1);
  }
  else if (param_1 < 0x1e) {
    if (param_1 != 0x11) {
      if (0x11 >= param_1) {
        if (param_1 != 3) {
          if (param_1 == 6) {
            temp_v0 = *(char *)(g_camp + 0x32b0);
            temp_v6 = temp_v0 == '\0';
            if (temp_v6) {
              temp_v0 = *(char *)(g_camp + 0x32b1);
            }
            if (temp_v6 && temp_v0 == '\0') {
              return;
            }
            goto LAB_0026e9d8;
          }
          if (param_1 != 8) {
            return;
          }
          if (*(char *)(g_camp + 0x32b5) != '\0') goto LAB_0026e9d8;
          temp_v1 = gameFlagIsSet(0x464);
          if (temp_v1 == 0) {
            return;
          }
          temp_v1 = gameFlagIsSet(0x4ca);
          goto joined_r0x0026ea94;
        }
        temp_v0 = *(char *)(g_camp + 0x32b4);
      }
      else if (param_1 == 0x1c) {
        temp_v0 = *(char *)(g_camp + 0x32b5);
      }
      else {
        if (param_1 != 0x1d) {
          return;
        }
        temp_v0 = *(char *)(g_camp + 0x32b0);
      }
    }
    else {
      temp_v0 = *(char *)(g_camp + 0x32b4);
    }
  }
  else if (param_1 == 0x42) {
    temp_v0 = *(char *)(g_camp + 0x32b2);
  }
  else {
    if (param_1 < 0x42) {
      if (param_1 != 0x33) {
        if (param_1 != 0x38) {
          if (param_1 != 0x3b) {
            return;
          }
          temp_v0 = *(char *)(g_camp + 0x32b6);
          goto LAB_0026e9d0;
        }
        temp_v1 = gameFlagIsSet(0x45b);
        if (temp_v1 == 0) {
          return;
        }
        temp_v1 = gameFlagIsSet(0x4c7);
      }
      else {
        temp_v1 = gameFlagIsSet(0x464);
        if (temp_v1 == 0) {
          return;
        }
        temp_v1 = gameFlagIsSet(0x4ca);
      }
joined_r0x0026ea94:
      if (temp_v1 == 0) {
        return;
      }
      goto LAB_0026e9d8;
    }
    if (param_1 == 0x43) {
      temp_v0 = *(char *)(g_camp + 0x32b2);
      temp_v6 = temp_v0 == '\0';
      if (temp_v6) {
        temp_v0 = *(char *)(g_camp + 0x32b3);
      }
      if (temp_v6 && temp_v0 == '\0') {
        return;
      }
      goto LAB_0026e9d8;
    }
    if (param_1 != 0x45) {
      return;
    }
    temp_v0 = *(char *)(g_camp + 0x32b3);
  }
LAB_0026e9d0:
  if (temp_v0 == '\0') {
    return;
  }
LAB_0026e9d8:
  if (param_5 != 0) {
    temp_v1 = FUN_001834a4(0x14,0x5b2);
    FUN_001835b4(2,0x14,0x5b0,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                 param_4);
    return;
  }
  temp_v2 = FUN_001834a4(0x14,0x5b1);
  FUN_001835b4(2,0x14,0x5b0,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,param_4
              );
  FUN_0019d880();
  temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
  temp_v5 = (unsigned int)!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0);
  VectorUnsignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
  efctSetSpeed();
  temp_v1 = g_renderCtx;
  temp_v3 = packNibblesAndByte(6,1,0);
  piVar6 = (int *)(temp_v1 + 0x12b8);
  temp_v4 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v3;
  if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
    (**(romwright_code **)(temp_v1 + 0x12d4))();
    *(unsigned char *)(temp_v1 + 0x12d0) = 0;
  }
  FUN_001835b4(2,0x14,0x5d6,*(short *)(temp_v2 + 8) + param_2,*(short *)(temp_v2 + 10) + param_3,param_4
              );
  temp_v1 = g_renderCtx;
  temp_v2 = packNibblesAndByte(6,7,0);
  piVar6 = (int *)(temp_v1 + 0x12b8);
  temp_v3 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v2;
  if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
    (**(romwright_code **)(temp_v1 + 0x12d4))();
    *(unsigned char *)(temp_v1 + 0x12d0) = 0;
  }
  VectorUnsignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
  efctSetSpeed();
  return;
}

} /* extern "C" */
