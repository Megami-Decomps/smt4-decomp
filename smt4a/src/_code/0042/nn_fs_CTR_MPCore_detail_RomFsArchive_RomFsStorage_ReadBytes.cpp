/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes` (_code @ 0x42a6e4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: rt_memcpy. */


unsigned int nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_ReadBytes
               (int *param_1,long long param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  if (*param_1 != 0) {
    rt_memcpy((unsigned int)param_2,*param_1 + param_4);
  }
  else {
    temp_v3 = param_1[2];
    if (temp_v3 != 0) {
      temp_v0 = *(int *)(temp_v3 + 4);
      temp_v1 = temp_v0;
      if (temp_v0 == 0) {
        temp_v1 = 2;
      }
      if (temp_v0 < 0) {
        if (temp_v1 < -8) {
          temp_v1 = 0;
        }
        else {
          temp_v1 = 1;
        }
      }
      else if (0 < temp_v0) {
        if (temp_v1 < 9) {
          temp_v1 = 3;
        }
        else {
          temp_v1 = 4;
        }
      }
      puVar3 = *(unsigned int **)(temp_v3 + temp_v1 * 4 + 0xc);
      temp_v2 = (**(romwright_code **)*puVar3)(puVar3,temp_v4,param_1[3] + param_4,0,param_2);
      if ((int)temp_v2 < 0) {
        return temp_v2;
      }
    }
  }
  return 0;
}

} /* extern "C" */
