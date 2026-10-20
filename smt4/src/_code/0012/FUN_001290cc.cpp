/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001290cc` (_code @ 0x1290cc, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001294e0(unsigned int, unsigned int, int *, int *, int);
int FUN_001565ec(unsigned int, int *);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern char *FUN_00129010(unsigned int);
extern int FUN_00129020(unsigned int);
extern int FUN_00129034(unsigned int, int);
/* Supplied declaration required: FUN_001294e0. */
extern int FUN_0013ac6c(unsigned int, int);
/* Supplied declaration required: FUN_001565ec. */
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern int nw_snd_Sound3DManager_Initialize_128F9C(char, unsigned int);


unsigned int FUN_001290cc(int param_1,unsigned int param_2,int *param_3,int *param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  pcVar1 = (char *)FUN_00129010(param_2);
  temp_v2 = 0;
  temp_v0 = FUN_00129020(param_2);
  if (((param_5 <= temp_v0 - 1) && (param_3 != (int *)0x0)) &&
     ((pcVar1[1] == '\0' || (param_4 != (int *)0x0)))) {
    temp_v0 = FUN_00129034(param_2,param_5);
    if (*pcVar1 == '\x02') {
      temp_v2 = FUN_0013ac6c(param_2,param_5);
    }
    nn_snd_CTR_InitializeWaveBuffer((unsigned int)param_3);
    *param_3 = temp_v0;
    param_3[1] = *(int *)(pcVar1 + 0xc);
    *(unsigned char *)(param_3 + 4) = 0;
    if (temp_v2 != 0) {
      param_3[2] = temp_v2 + 0x20;
    }
    FUN_001565ec(*(unsigned int *)(param_1 + 0x68),param_3);
    if (param_4 != (int *)0x0) {
      nn_snd_CTR_InitializeWaveBuffer((unsigned int)param_4);
    }
    if (pcVar1[1] != '\0') {
      temp_v1 = nw_snd_Sound3DManager_Initialize_128F9C(*pcVar1,*(unsigned int *)(pcVar1 + 8));
      *param_4 = temp_v0 + temp_v1;
      param_4[1] = *(int *)(pcVar1 + 0xc) - *(int *)(pcVar1 + 8);
      *(unsigned char *)(param_4 + 4) = 1;
      if (temp_v2 != 0) {
        param_4[2] = temp_v2 + 0x26;
      }
      FUN_001565ec(*(unsigned int *)(param_1 + 0x68),param_4);
    }
    FUN_001294e0(*(unsigned int *)(param_1 + 0x68),param_2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}

} /* extern "C" */
