/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_FxReverb_SetParam` (_code @ 0x1212e8, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012fcd0(int);
int __aeabi_memcpy4(int, unsigned int *, int);

/* Supplied declaration required: FUN_0012fcd0. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int nw_snd_FxReverb_SetParam(int param_1,unsigned int *param_2)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  if ((((0.0f <= (float)param_2[3]) && ((int)param_2[3] < 0x3f800001)) && (0.0f <= (float)param_2[4]))
     && ((((int)param_2[4] < 0x3f800001 && (0.0f <= (float)param_2[6])) &&
         (((int)param_2[6] < 0x3f800001 &&
          ((0.0f <= (float)param_2[7] && ((int)param_2[7] < 0x3f800001)))))))) {
    puVar3 = (unsigned int *)param_2[5];
    if (puVar3 != (unsigned int *)0x0) {
      temp_v5 = *puVar3 == 0;
      temp_v3 = 0;
      if (!temp_v5) {
        temp_v3 = puVar3[1];
      }
      temp_v6 = temp_v3 == 0;
      if (!temp_v5 && !temp_v6) {
        temp_v3 = puVar3[2];
      }
      if ((temp_v5 || temp_v6) || temp_v3 == 0) {
        return 0;
      }
    }
    if (*(char *)(param_1 + 0x10e) != '\x01') {
LAB_00121408:
      if ((char)param_2[8] == '\0') {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 4;
      }
      *(unsigned char *)(param_1 + 0x10d) = temp_v1;
      __aeabi_memcpy4(param_1 + 0xc,param_2,0x22);
      puVar4 = *(unsigned int **)(param_1 + 0x20);
      if (puVar4 != (unsigned int *)0x0) {
        temp_v2 = *puVar4;
        temp_v4 = puVar4[1];
        *(unsigned int *)(param_1 + 0x40) = puVar4[2];
        *(int *)(param_1 + 0x20) = param_1 + 0x38;
        *(unsigned int *)(param_1 + 0x38) = temp_v2;
        *(unsigned int *)(param_1 + 0x3c) = temp_v4;
      }
      if (*(char *)(param_1 + 0x10e) == '\x01') {
        FUN_0012fcd0(param_1);
      }
      return 1;
    }
    if (((*param_2 <= *(unsigned int *)(param_1 + 0xf8)) && (param_2[2] <= *(unsigned int *)(param_1 + 0xfc))) &&
       ((puVar3 == (unsigned int *)0x0 ||
        (((*puVar3 <= *(unsigned int *)(param_1 + 0x100) && (puVar3[1] <= *(unsigned int *)(param_1 + 0x104))) &&
         (puVar3[2] <= *(unsigned int *)(param_1 + 0x108))))))) {
      temp_v0 = *(char *)(param_1 + 0x10c);
      temp_v5 = temp_v0 == '\0';
      if (temp_v5) {
        temp_v0 = (char)param_2[8];
      }
      if (!temp_v5 || temp_v0 != '\x01') goto LAB_00121408;
    }
  }
  return 0;
}

} /* extern "C" */
