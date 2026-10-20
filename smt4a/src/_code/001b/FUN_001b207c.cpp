/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b207c` (_code @ 0x1b207c, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c2278(int, unsigned int);
int FUN_001c7714(int);
int VectorSignedToFloat(int, int);
int nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_001b5b40(void);
extern int FUN_001b5b8c(void);
/* Supplied declaration required: FUN_001c2278. */
extern unsigned int FUN_001c2484(void);
/* Supplied declaration required: FUN_001c7714. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync. */


void FUN_001b207c(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  
  temp_v8 = 0;
  temp_v12 = 0x3f80000000000000;
  do {
    temp_v7 = param_1 + temp_v8 * 0x10;
    temp_v3 = *(int *)(temp_v7 + 0x40);
    temp_v0 = temp_v3 < *(int *)(temp_v7 + 0x3c);
    if (temp_v0) {
      *(int *)(temp_v7 + 0x40) = temp_v3 + 1;
    }
    if (*(int *)(temp_v7 + 0x20) >= *(int *)(temp_v7 + 0x1c)) {
      if (temp_v0) goto LAB_001b20f8;
    }
    else {
      temp_v3 = *(int *)(temp_v7 + 0x20) + 1;
      *(int *)(temp_v7 + 0x20) = temp_v3;
      if (*(int *)(temp_v7 + 0x1c) <= temp_v3) {
        FUN_001c2278(param_1,temp_v8 & 0xff);
      }
LAB_001b20f8:
      temp_v13 = (float)((unsigned long long)temp_v12 >> 0x20);
      if (*(int *)(temp_v7 + 0x40) >= *(int *)(temp_v7 + 0x3c)) {
        temp_v10 = *(float *)(temp_v7 + 0x38);
      }
      else {
        temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 0x40),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = ((*(float *)(temp_v7 + 0x38) - *(float *)(temp_v7 + 0x34)) * temp_v11) / temp_v10 +
                 *(float *)(temp_v7 + 0x34);
      }
      temp_v9 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v13) << 0x1f) |
               ((unsigned int)(temp_v10 == temp_v13) << 0x1e);
      temp_v2 = (unsigned char)(temp_v9 >> 0x18);
      if ((unsigned char)((temp_v2 >> 6) & 1) || (unsigned char)(temp_v2 >> 7) != ((temp_v10 != temp_v10) || (temp_v13 != temp_v13))) {
        temp_v9 = in_fpscr & 0xfffffff;
      }
      if (*(int *)(temp_v7 + 0x20) >= *(int *)(temp_v7 + 0x1c)) {
        temp_v10 = *(float *)(temp_v7 + 0x18);
      }
      else {
        temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 0x20),(unsigned char)(temp_v9 >> 0x16) & 3);
        temp_v10 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 0x1c),(unsigned char)(temp_v9 >> 0x16) & 3);
        temp_v10 = ((*(float *)(temp_v7 + 0x18) - *(float *)(temp_v7 + 0x14)) * temp_v11) / temp_v10 +
                 *(float *)(temp_v7 + 0x14);
      }
      temp_v1 = (temp_v9 & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v13) << 0x1f) |
              ((unsigned int)(temp_v10 == temp_v13) << 0x1e);
      in_fpscr = temp_v1 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v13 != temp_v13)) << 0x1c);
      temp_v2 = (unsigned char)(temp_v1 >> 0x18);
      if ((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        in_fpscr = temp_v9 & 0xfffffff;
      }
      FUN_001c7714((int)(char)temp_v8);
    }
    temp_v3 = 0;
    do {
      temp_v6 = temp_v7 + temp_v3 * 8;
      if ((*(int *)(temp_v6 + 0x290) != 0) && (*(char *)(temp_v6 + 0x294) == '\x02')) {
        if (temp_v3 != 0) {
          if (temp_v3 == 1) {
            temp_v4 = FUN_001b5b8c();
            if (temp_v4 == 0) {
              *(int *)(temp_v6 + 0x290) = 0;
              *(unsigned char *)(temp_v6 + 0x294) = 0;
            }
          }
        }
        else {
          temp_v4 = FUN_001b5b40();
          if (temp_v4 == 0) {
            *(int *)(temp_v6 + 0x290) = 0;
            *(unsigned char *)(temp_v6 + 0x294) = 0;
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 2);
    temp_v8 = temp_v8 + 1;
    if ((int)temp_v8 >= 2) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        temp_v5 = FUN_001c2484();
        nw_snd_internal_driver_VoiceManager_UpdateAllVoicesSync(temp_v5,0x40);
        return;
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
