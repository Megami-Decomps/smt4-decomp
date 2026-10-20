/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005093a0` (_code @ 0x5093a0, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00508738(void);
int FUN_00508758(void);
int FUN_005087bc(void);
int FUN_0050883c(void);

typedef struct fn_005093a0_arg2 fn_005093a0_arg2;
struct fn_005093a0_arg2 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3];
    uint field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
};

extern unsigned int *FUN_00508628(void);
/* Supplied declaration required: FUN_00508738. */
/* Supplied declaration required: FUN_00508758. */
/* Supplied declaration required: FUN_005087bc. */
/* Supplied declaration required: FUN_0050883c. */
extern unsigned int FUN_00508848(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);


unsigned int FUN_005093a0(int param_1,unsigned int param_2,fn_005093a0_arg2 *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                    (*(unsigned int *)(param_1 + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
    if (temp_v1 != 2) {
      temp_v2 = 0;
    }
    else {
      if (*(unsigned int *)(param_1 + 8) >= 0x2030100) {
        FUN_0050883c();
        puVar4 = (unsigned int *)FUN_00508628();
        if (puVar4 == (unsigned int *)0x0) {
          return 0;
        }
        temp_v5 = (unsigned char)((*puVar4 & 0xffff) >> 8);
        if ((*puVar4 & 0xffff) >> 8 != 1) {
          temp_v5 = 0;
        }
        param_3->field_0x0 = temp_v5;
        param_3->field_0x4 = puVar4[1];
        temp_v3 = puVar4[2];
      }
      else {
        temp_v3 = FUN_00508848(temp_v0);
        temp_v4 = temp_v3;
        FUN_005087bc();
        param_3->field_0x0 = (char)temp_v4;
        temp_v4 = temp_v3;
        FUN_00508758();
        param_3->field_0x4 = temp_v4;
        FUN_00508738();
      }
      param_3->field_0x8 = temp_v3;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
