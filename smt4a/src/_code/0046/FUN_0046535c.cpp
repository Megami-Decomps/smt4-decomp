/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046535c` (_code @ 0x465364, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00463d8c(int);
int FUN_00464e20(int *, int *);
int nw_snd_internal_driver_Voice_Pause(int, unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00463d8c. */
/* Supplied declaration required: FUN_00464e20. */
extern int FUN_005094c4(int);
/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */


void FUN_0046535c(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  FUN_00463d8c(param_1[0x18]);
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x88]) {
      do {
        if (param_1[temp_v0 * 0xf2 + 0x8b] == 0) {
          (**(romwright_code **)(*param_1 + 0x14))(param_1);
          *(unsigned char *)((int)param_1 + 0xf) = 1;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x88]);
    }
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x89]) {
      do {
        FUN_00464e20(param_1,param_1 + temp_v0 * 9 + 0x81a);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x89]);
    }
  }
  if ((*(char *)((int)param_1 + 0x55) != '\0') && (temp_v1 = FUN_005094c4(param_1[0x18]), temp_v1 == 0))
  {
    *(unsigned char *)((int)param_1 + 0x55) = 0;
    temp_v3 = *(char *)((int)param_1 + 0xe) != '\0';
    temp_v0 = (unsigned int)temp_v3;
    if ((int)(char)param_1[0x15] != temp_v0) {
      temp_v2 = 0;
      if (temp_v2 < (unsigned int)param_1[0x88]) {
        do {
          if (param_1[temp_v2 * 0xf2 + 0x8b] != 0) {
            nw_snd_internal_driver_Voice_Pause(param_1[temp_v2 * 0xf2 + 0x8b],temp_v0);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < (unsigned int)param_1[0x88]);
      }
      *(unsigned char *)(param_1 + 0x15) = temp_v3;
    }
  }
  if (*(char *)((int)param_1 + 0x57) != '\0') {
    *(unsigned char *)((int)param_1 + 0x57) = 0;
  }
  return;
}

} /* extern "C" */
