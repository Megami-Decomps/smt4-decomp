/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e8d0` (_code @ 0x15e8d0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00174a00. */
/* Supplied declaration required: FUN_00174a64. */
/* Supplied declaration required: FUN_001757b8. */
extern unsigned int FUN_00178540(int);
extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(int);


unsigned int FUN_0015e8d0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_00178540(param_1 + 0x13c);
  temp_v1 = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(param_1 + 0x13c);
  if (param_3 < temp_v1) {
    return 0;
  }
  temp_v2 = param_1 + 0x11c;
  FUN_00174a64(temp_v2,temp_v0,0);
  if (temp_v2 != 0) {
    temp_v3 = 0;
    temp_v2 = param_1 + 0x11c;
    FUN_00174a00(temp_v2,param_2,temp_v1,&temp_v3);
    if (temp_v2 != 0) {
      if (temp_v3 != temp_v1) {
        return 0;
      }
      FUN_001757b8(param_1 + 0x13c,param_2);
      return 1;
    }
  }
  *(unsigned int *)(param_1 + 0x180) = *(unsigned int *)(param_1 + 0x134);
  return 0;
}
