/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d0b98` (_code @ 0x1d0b98, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_6_stack;

/* Supplied declaration required: FUN_001d1438. */
/* Supplied declaration required: FUN_001d22f4. */
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern int nw_snd_internal_driver_Voice_FrameToByte(int, unsigned char);


unsigned char FUN_001d0b98(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if ((char)param_1[0x14] != '\0') {
    if (param_2 != 0) {
      if ((param_3[1] != 0) && (temp_v1 = 0, param_1[0x88] != 0)) {
        do {
          if (param_4 != 0) {
            temp_v4 = param_6 * temp_v1 + param_1[0x2a] * param_1[0x88] * param_5 + param_1[0x86];
          }
          else {
            temp_v4 = param_1[0x2a] * *param_3 + param_1[temp_v1 * 0xf2 + 0x8a];
          }
          temp_v3 = param_3[1];
          if (param_3[3] != 0) {
            temp_v0 = nw_snd_internal_driver_Voice_FrameToByte(param_3[3],(char)param_1[0x22]);
            temp_v4 = temp_v4 + temp_v0;
            temp_v3 = temp_v3 - param_3[3];
          }
          temp_v0 = *param_3;
          temp_v2 = 0;
          piVar3 = param_1 + temp_v1 * 0xf2 + temp_v0 * 6 + 0x8c;
          if ((char)param_3[4] != '\0') {
            temp_v2 = (int)param_1 + temp_v0 * 6 + temp_v1 * 0x3c8 + 0x530;
            FUN_001d1438(temp_v2,(int)param_3 + temp_v1 * 6 + 0x12);
          }
          nn_snd_CTR_InitializeWaveBuffer((unsigned int)piVar3);
          param_1[temp_v1 * 0xf2 + temp_v0 * 6 + 0x8e] = temp_v2;
          param_1[temp_v1 * 0xf2 + temp_v0 * 6 + 0x8d] = temp_v3;
          *piVar3 = temp_v4;
          FUN_001d22f4(param_1 + temp_v1 * 0xf2 + 0x8a,piVar3,(int)(char)param_3[0x12]);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (unsigned int)param_1[0x88]);
      }
      temp_v4 = *param_3;
      param_1[temp_v4 * 2 + 0x83e] = param_3[2];
      param_1[temp_v4 * 2 + 0x83f] = param_3[0x11];
      if ((char)param_3[0x12] != '\0') {
        *(unsigned char *)((int)param_1 + 0x56) = 1;
      }
      if ((*(char *)((int)param_1 + 0x51) == '\0') &&
         (((param_4 != 0 || (temp_v4 = param_1[0x17], param_1[0x17] = temp_v4 - 1, temp_v4 - 1 == 0)) ||
          (*(char *)((int)param_1 + 0x56) != '\0')))) {
        *(unsigned char *)((int)param_1 + 0x51) = 1;
      }
      return 1;
    }
    *(unsigned char *)((int)param_1 + 0xf) = 1;
    (**(romwright_code **)(*param_1 + 0x14))(param_1);
  }
  return 0;
}
