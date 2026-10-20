/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1784` (_code @ 0x1b1784, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbb1c(int *, unsigned int, unsigned int, int, int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

/* Supplied declaration required: FUN_001bbb1c. */
extern int nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(int, unsigned int, int *, unsigned int);


int * FUN_001b1784(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned long long param_5,int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = -1;
  temp_v3 = -1;
  temp_v4 = 0;
  temp_v0 = nw_snd_internal_SoundArchiveFileReader_ReadFileInfo(param_1[1],param_2,&temp_v2,0);
  piVar2 = (int *)0x0;
  if (temp_v0 != 0) {
    piVar2 = (int *)param_1[2];
    if ((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) {
      (**(romwright_code **)(*piVar2 + 0x30))(piVar2,param_2,&temp_v2,0);
    }
    if (temp_v4 == 0) {
      if ((temp_v2 != -1) && (temp_v3 != -1)) {
        piVar2 = (int *)(**(romwright_code **)(*param_1 + 0x10))
                                  (param_1,param_3,param_4,temp_v3 + param_1[0x43],temp_v2);
        return piVar2;
      }
      return (int *)0x0;
    }
    temp_v1 = (unsigned int)((unsigned long long)param_5 >> 0x20);
    if (param_6 == 0) {
      FUN_001bbb1c(param_1,param_3,param_4,temp_v4,(int)param_5,temp_v1,param_7);
      return param_1;
    }
    FUN_001bbb1c(param_1,param_3,param_4,param_6,(int)param_5,temp_v1,param_7);
    piVar2 = param_1;
  }
  return piVar2;
}

} /* extern "C" */
