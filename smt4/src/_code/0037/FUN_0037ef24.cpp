/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ef24` (_code @ 0x37ef24, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a3188(int, int *);
int FUN_0037ead4(int *, int *);
int nw_snd_internal_driver_Voice_Pause(int, unsigned int);
int nw_ut_internal_LinkListImpl_erase_2B743C(int, int *);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002a3188. */
/* Supplied declaration required: FUN_0037ead4. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Pause. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void FUN_0037ef24(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v2 = param_1[0x18];
  piVar4 = *(int **)(temp_v2 + 0x84);
  if (*(int **)(temp_v2 + 0x84) != (int *)(temp_v2 + 0x84)) {
    do {
      piVar2 = piVar4 + -0x12;
      piVar5 = (int *)*piVar4;
      if ((char)piVar4[-0xd] != '\x03') break;
      nw_ut_internal_LinkListImpl_erase_2B743C(temp_v2 + 0x80,piVar4);
      if (piVar2 != (int *)0x0) {
        (**(romwright_code **)*piVar2)(piVar2);
        FUN_002a3188(temp_v2 + 0x8c,piVar2);
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(temp_v2 + 0x84));
  }
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x34]) {
      do {
        if (param_1[temp_v0 * 0xd0 + 0x42] == 0) {
          (**(romwright_code **)(*param_1 + 0x14))(param_1);
          *(unsigned char *)((int)param_1 + 0xf) = 1;
          return;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x34]);
    }
    temp_v0 = 0;
    if (temp_v0 < (unsigned int)param_1[0x35]) {
      do {
        FUN_0037ead4(param_1,param_1 + temp_v0 * 8 + 0x6b6);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (unsigned int)param_1[0x35]);
    }
  }
  if (((char)param_1[0x15] != '\0') &&
     ((*(char *)(param_1[0x18] + 0x4d) != '\0' || (*(int *)(param_1[0x18] + 0x80) == 0)))) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    temp_v3 = *(char *)((int)param_1 + 0xe) != '\0';
    temp_v0 = (unsigned int)temp_v3;
    if ((int)*(char *)((int)param_1 + 0x53) != temp_v0) {
      temp_v1 = 0;
      if (temp_v1 < (unsigned int)param_1[0x34]) {
        do {
          if (param_1[temp_v1 * 0xd0 + 0x42] != 0) {
            nw_snd_internal_driver_Voice_Pause(param_1[temp_v1 * 0xd0 + 0x42],temp_v0);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (unsigned int)param_1[0x34]);
      }
      *(unsigned char *)((int)param_1 + 0x53) = temp_v3;
    }
  }
  if (*(char *)((int)param_1 + 0x56) != '\0') {
    *(unsigned char *)((int)param_1 + 0x56) = 0;
  }
  return;
}

} /* extern "C" */
