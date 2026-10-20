/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158074` (_code @ 0x158074, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_StreamChannel_AppendWaveBuffer(int *, int *, int);

typedef int romwright_code(...);
/* stack frame of param_9: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_9_stack;

extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_StreamChannel_AppendWaveBuffer. */
extern int nw_snd_internal_driver_Voice_FrameToByte(int, unsigned char);


unsigned char
FUN_00158074(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  
  if ((char)param_1[0x14] != '\0') {
    if (param_2 != 0) {
      if ((param_4 != 0) && (temp_v1 = 0, param_1[0x34] != 0)) {
        do {
          temp_v2 = param_1[0x25] * param_3 + param_1[temp_v1 * 0xd0 + 0x36];
          temp_v0 = param_4;
          if (param_6 != 0) {
            temp_v0 = nw_snd_internal_driver_Voice_FrameToByte(param_6,(char)param_1[0x1f]);
            temp_v2 = temp_v2 + temp_v0;
            temp_v0 = param_4 - param_6;
          }
          piVar3 = param_1 + temp_v1 * 0xd0 + param_3 * 6 + 0x43;
          nn_snd_CTR_InitializeWaveBuffer((unsigned int)piVar3);
          *piVar3 = temp_v2;
          param_1[temp_v1 * 0xd0 + param_3 * 6 + 0x44] = temp_v0;
          param_1[temp_v1 * 0xd0 + param_3 * 6 + 0x45] = *(int *)(param_7 + temp_v1 * 4);
          nw_snd_internal_driver_StreamChannel_AppendWaveBuffer
                    (param_1 + temp_v1 * 0xd0 + 0x36,piVar3,param_9);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (unsigned int)param_1[0x34]);
      }
      param_1[param_3 * 2 + 0x6d6] = param_5;
      param_1[param_3 * 2 + 0x6d7] = param_8;
      if (param_9 != 0) {
        *(unsigned char *)((int)param_1 + 0x55) = 1;
      }
      if ((*(char *)((int)param_1 + 0x51) == '\0') &&
         ((temp_v0 = param_1[0x17], param_1[0x17] = temp_v0 - 1, temp_v0 - 1 == 0 ||
          (*(char *)((int)param_1 + 0x55) != '\0')))) {
        *(unsigned char *)((int)param_1 + 0x51) = 1;
      }
      return 1;
    }
    *(unsigned char *)((int)param_1 + 0xf) = 1;
    (**(romwright_code **)(*param_1 + 0x14))(param_1);
  }
  return 0;
}

} /* extern "C" */
