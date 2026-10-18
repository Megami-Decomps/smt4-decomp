/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155208` (_code @ 0x155208, 0x320 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015701c. */
/* Supplied declaration required: FUN_001571c4. */
/* Supplied declaration required: FUN_001572f0. */
/* Supplied declaration required: FUN_00157348. */
/* Supplied declaration required: FUN_0015736c. */
/* Supplied declaration required: FUN_001573b0. */
/* Supplied declaration required: FUN_001573d4. */
/* Supplied declaration required: FUN_0015743c. */
/* Supplied declaration required: FUN_00157528. */
/* Supplied declaration required: FUN_0015754c. */
/* Supplied declaration required: FUN_00157588. */
/* Supplied declaration required: FUN_00158a60. */
/* Supplied declaration required: FUN_00158d80. */
/* Supplied declaration required: FUN_00158e9c. */
/* Supplied declaration required: FUN_002ac5d8. */
/* Supplied declaration required: FUN_002b4ddc. */
/* Supplied declaration required: FUN_002b4e44. */
extern unsigned int FUN_002bb2f0(void);
extern int FUN_002c615c(unsigned int);


void FUN_00155208(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  if (*(char *)(param_1 + 0xc6) != '\0') {
    if (*(char *)(param_1 + 0xc5) != '\0') {
      param_2 = 0;
    }
    temp_v4 = *(unsigned short *)(param_1 + 0x114);
    if (temp_v4 < *(unsigned short *)(param_1 + 0x112)) {
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(param_1 + 0x114) = temp_v4;
    }
    if ((unsigned int)temp_v4 >= (unsigned int)*(unsigned short *)(param_1 + 0x112)) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x111);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x110);
      temp_v2 = FUN_002c615c(((unsigned int)*(unsigned char *)(param_1 + 0x111) - (unsigned int)temp_v0) * (unsigned int)temp_v4);
      temp_v1 = (temp_v2 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 * 0.003921569f;
    if ((*(char *)(param_1 + 0x90) == '\x04') &&
       (FUN_00158d80(param_1 + 0x90), 0xc2b4cccd < (unsigned int)temp_v5)) {
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_002b4e44();
        FUN_002b4ddc(*(unsigned int *)(param_1 + 0x134));
        *(unsigned int *)(param_1 + 0x134) = 0;
        *(unsigned char *)(param_1 + 0xc5) = 0;
        *(unsigned char *)(param_1 + 0xc6) = 0;
        if (*(romwright_code **)(param_1 + 300) != (romwright_code *)0x0) {
          (**(romwright_code **)(param_1 + 300))(param_1,0,*(unsigned int *)(param_1 + 0x130));
        }
        if (*(char *)(param_1 + 199) != '\0') {
          *(unsigned char *)(param_1 + 199) = 0;
          temp_v3 = FUN_002bb2f0();
          FUN_002ac5d8(temp_v3,param_1);
          return;
        }
      }
    }
    else {
      temp_v5 = 0.0f;
      temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0xf4) == 0.0f) << 0x1e);
      if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
        temp_v2 = *(int *)(param_1 + 0xfc);
        if (*(int *)(param_1 + 0xf8) < temp_v2) {
          temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v6 = (float)VectorSignedToFloat(temp_v2 - *(int *)(param_1 + 0xf8),
                                             (unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v5 = (temp_v6 * *(float *)(param_1 + 0xf4)) / temp_v5;
        }
      }
      temp_v6 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(param_1 + 0x126) -
                                         (unsigned int)*(unsigned char *)(param_1 + 0x127),(unsigned char)(temp_v1 >> 0x16) & 3)
      ;
      temp_v5 = temp_v5 + temp_v6;
      temp_v6 = temp_v5 + *(float *)(param_1 + 0xf0);
      if (*(char *)(param_1 + 0xc4) == '\0') {
        FUN_00158e9c(param_1 + 0xac);
        temp_v6 = temp_v5 + temp_v6;
      }
      if (*(float *)(param_1 + 0x118) != temp_v6) {
        temp_v2 = (int)(temp_v6 * 256.0f);
        FUN_001571c4(temp_v2);
        *(float *)(param_1 + 0x118) = temp_v6;
        *(int *)(param_1 + 0x11c) = temp_v2;
      }
      if (*(char *)(param_1 + 0xc4) == '\x02') {
        FUN_00158e9c(param_1 + 0xac);
      }
      if (param_2 != 0) {
        if (*(char *)(param_1 + 200) != '\0') {
          temp_v2 = *(int *)(param_1 + 0xf8) + 5;
          *(int *)(param_1 + 0xf8) = temp_v2;
          if (*(int *)(param_1 + 0xfc) < temp_v2) {
            temp_v2 = *(int *)(param_1 + 0xfc);
          }
          *(int *)(param_1 + 0xf8) = temp_v2;
        }
        FUN_00158a60(param_1 + 0xac,5);
        FUN_0015701c(param_1 + 0x90,5);
      }
      FUN_00158d80(param_1 + 0x90);
      FUN_001572f0();
      if (*(char *)(param_1 + 0xc4) == '\x01') {
        FUN_00158e9c(param_1 + 0xac);
        FUN_001572f0();
      }
      if (*(int *)(param_1 + 0x134) != 0) {
        FUN_00157588();
        FUN_00157528(*(unsigned int *)(param_1 + 0x134));
        FUN_0015743c(*(unsigned int *)(param_1 + 0x134));
        FUN_001573b0(*(unsigned int *)(param_1 + 0x134));
        FUN_00157348(*(unsigned int *)(param_1 + 0x134));
        FUN_001573d4(*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0xcb));
        FUN_0015736c(*(unsigned int *)(param_1 + 0x134));
        temp_v1 = 0;
        do {
          FUN_0015754c(*(unsigned int *)(param_1 + 0x134),temp_v1 & 0xff);
          temp_v1 = temp_v1 + 1;
        } while ((int)temp_v1 < 2);
      }
    }
  }
  return;
}
