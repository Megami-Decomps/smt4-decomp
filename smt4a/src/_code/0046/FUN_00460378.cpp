/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460378` (_code @ 0x460378, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(unsigned int, int);
int FUN_001748a0(unsigned int *, unsigned int, unsigned int);
int nw_io_FileStream_FilePosition_Seek(unsigned int *, int);

typedef int romwright_code(...);
/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern unsigned char DAT_0055bf34; /* 0x55bf34 */

/* Supplied declaration required: FUN_0016e800. */
/* Supplied declaration required: FUN_001748a0. */
extern unsigned int nn_fs_detail_FileBase_TryGetSize(unsigned int, long long *);
/* Supplied declaration required: nw_io_FileStream_FilePosition_Seek. */


unsigned int *
FUN_00460378(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,
            unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 3 native warning(s); review required */
  char *pcVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar5;
  char *pcVar6;
  int temp_v2;
  unsigned int uStack_1c;
  
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_0055bf34;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  pcVar6 = (char *)(param_1 + 5);
  pcVar1 = (char *)(param_1 + 5);
  pcVar1[0] = 'D';
  pcVar1[1] = -0x7f;
  pcVar1[2] = 'U';
  pcVar1[3] = '\0';
  pcVar6[0] = 'D';
  pcVar6[1] = -0x7f;
  pcVar6[2] = 'U';
  pcVar6[3] = '\0';
  param_1[0xb] = 0xe7e3ffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  param_1[0x13] = param_7;
  *(unsigned char *)(param_1 + 0x14) = 0;
  puVar2 = param_1 + 5;
  *(unsigned char *)((int)param_1 + 0x51) = 1;
  FUN_001748a0(puVar2,param_2,param_5);
  if (puVar2 == (unsigned int *)0x0) {
    pcVar5 = (romwright_code *)param_1[0x12];
    temp_v1 = param_1[0xb];
    if (pcVar5 != (romwright_code *)0x0) {
      (*pcVar5)(temp_v1,param_1[0x13]);
    }
    return param_1;
  }
  param_1[0xd] = (unsigned int)(param_1 + 5);
  if (*(char *)(param_1 + 0xc) != '\0') {
    temp_v2 = 0;
    uStack_1c = 0;
    temp_v0 = nn_fs_detail_FileBase_TryGetSize((unsigned int)(param_1 + 6),(long long *)&temp_v2);
    param_1[0xb] = temp_v0;
    temp_v1 = 0;
    if ((temp_v0 & 0x80000000) == 0) {
      temp_v1 = temp_v2;
    }
    if ((int)temp_v0 < 0) {
      pcVar5 = (romwright_code *)param_1[0x12];
      temp_v1 = *(unsigned int *)(param_1[0xd] + 0x18);
      if (pcVar5 != (romwright_code *)0x0) {
        (*pcVar5)(temp_v1,param_1[0x13]);
      }
      return param_1;
    }
  }
  else {
    temp_v0 = nn_fs_detail_FileBase_TryGetSize((unsigned int)(param_1 + 6),(long long *)&temp_v2);
    temp_v1 = temp_v2;
    if ((int)temp_v0 < 0) {
      FUN_0016e800(temp_v0,0x46049c);
      temp_v1 = temp_v2;
    }
  }
  if (param_4 == 0) {
    param_1[0x11] = temp_v1;
  }
  param_1[0xe] = temp_v1;
  nw_io_FileStream_FilePosition_Seek(param_1 + 0xe,0);
  *(unsigned char *)((int)param_1 + 0x52) = 1;
  *(unsigned char *)(param_1 + 0x14) = 1;
  return param_1;
}

} /* extern "C" */
