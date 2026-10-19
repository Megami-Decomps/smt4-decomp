/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c6cc` (_code @ 0x11c6cc, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern signed char DAT_00471ad8; /* 0x471ad8 */

extern int FUN_00128d08(void);
/* Supplied declaration required: FUN_0013c33c. */
extern int FUN_002bb638(void);
extern int FUN_002bc7e4(void);
/* Supplied declaration required: nn_hid_CTR_AnalogStickClamper_ClampCore. */
/* Supplied declaration required: nn_hid_CTR_AnalogStickClamper_ClampValueOfClamp. */
extern void nn_hidlow_CTR_PadLifoRing_ReadData(unsigned int, unsigned int, int, int *, long long *, int *);


unsigned int FUN_0011c6cc(int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [2];
  unsigned long long temp_v3;
  
  (*(unsigned int *)((unsigned char *)&temp_v3 + 0)) = 0xffffffff;
  (*(unsigned int *)((unsigned char *)&temp_v3 + 4)) = 0xffffffff;
  temp_v2[1] = 0xffffffff;
  temp_v0 = FUN_00128d08();
  if (temp_v0 == 0) {
    nn_hid_CTR_AnalogStickClamper_ClampValueOfClamp(param_1 + 3);
    nn_hidlow_CTR_PadLifoRing_ReadData
              (*(unsigned int *)(*param_1 + 4),(unsigned int)param_2,1,temp_v2,(long long *)&temp_v3,temp_v2 + 1);
    if (0 < temp_v2[0]) {
      nn_hid_CTR_AnalogStickClamper_ClampCore
                (param_1 + 3,param_2 + 3,(int)param_2 + 0xe,(int)(short)param_2[3],
                 (int)*(short *)((int)param_2 + 0xe));
      if ((char)param_1[0xc] != '\0') {
        param_1[2] = *param_2;
        *(unsigned char *)(param_1 + 0xc) = 0;
      }
      temp_v1 = *param_2 & 0xffffdfff;
      *param_2 = temp_v1;
      param_2[1] = (temp_v1 ^ param_1[2]) & ~param_1[2];
      param_2[2] = param_1[2] & ~temp_v1;
      temp_v0 = FUN_002bb638();
      if ((temp_v0 != 0) && (temp_v0 = FUN_002bc7e4(), temp_v0 == 0)) {
        *param_2 = 0;
        param_2[2] = 0;
        param_2[1] = 0;
        *(unsigned short *)(param_2 + 3) = 0;
        *(unsigned short *)((int)param_2 + 0xe) = 0;
      }
      param_1[2] = *param_2;
      if (DAT_00471ad8 == '\0') {
        FUN_0013c33c(param_2);
      }
      return 1;
    }
  }
  return 0;
}
