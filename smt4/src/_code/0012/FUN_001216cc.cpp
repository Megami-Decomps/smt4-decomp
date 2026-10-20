/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001216cc` (_code @ 0x1216cc, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013041c(int, unsigned int, int);
int FUN_00130ea8(int, unsigned int);
int FUN_002b4e00(int, unsigned int, unsigned int, unsigned int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0013041c. */
/* Supplied declaration required: FUN_00130ea8. */
/* Supplied declaration required: FUN_002b4e00. */
extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(int);
extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(int);


unsigned int FUN_001216cc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(param_1 + 300);
  temp_v1 = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(param_1 + 300);
  if (param_3 < temp_v1) {
    return 0;
  }
  temp_v2 = param_1 + 0x10c;
  FUN_0013041c(temp_v2,temp_v0,0);
  if (temp_v2 != 0) {
    temp_v3 = 0;
    temp_v2 = param_1 + 0x10c;
    FUN_002b4e00(temp_v2,param_2,temp_v1,&temp_v3);
    if (temp_v2 != 0) {
      if (temp_v3 != temp_v1) {
        return 0;
      }
      FUN_00130ea8(param_1 + 300,param_2);
      return 1;
    }
  }
  *(unsigned int *)(param_1 + 0x170) = *(unsigned int *)(param_1 + 0x124);
  return 0;
}

} /* extern "C" */
