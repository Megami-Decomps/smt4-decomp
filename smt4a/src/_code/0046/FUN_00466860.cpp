/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466860` (_code @ 0x466860, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b2040(unsigned int, int);
int nw_snd_internal_driver_Voice_Free(unsigned int);
int nw_snd_internal_driver_Voice_Stop(void);

typedef int romwright_code(...);
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int FUN_00191548(void);
/* Supplied declaration required: FUN_001b2040. */
extern unsigned int FUN_005094b0(unsigned int);
extern int nw_snd_internal_Util_GetByteBySample(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void FUN_00466860(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1a8);
  if (temp_v1 != 0) {
    temp_v6 = *(int *)(temp_v1 + 8);
    temp_v1 = 0;
    temp_v0 = 0;
    if (0 < temp_v6) {
      do {
        temp_v4 = 0;
        do {
          puVar6 = (unsigned int *)(temp_v1 * 0x30 + temp_v4 * 0x18 + *(int *)(param_1 + 0xc));
          if (*(char *)((int)puVar6 + 0x11) != '\0' && *(char *)((int)puVar6 + 0x11) != '\x03') {
            temp_v5 = *puVar6;
            temp_v2 = FUN_005094b0(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x1a8));
            temp_v3 = nw_snd_internal_Util_GetByteBySample(puVar6[1],temp_v2);
            if ((param_2 <= temp_v3 + temp_v5) && (*puVar6 <= param_3)) {
              temp_v0 = 1;
              break;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 2);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v6);
      if (temp_v0) {
        temp_v1 = *(int *)(param_1 + 0xc);
        if (*(romwright_code **)(temp_v1 + 0x1a0) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v1 + 0x1a0))(temp_v1,3,*(unsigned int *)(temp_v1 + 0x1a4));
          *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x1a0) = 0;
        }
        temp_v1 = *(int *)(param_1 + 0xc);
        if (*(int *)(temp_v1 + 0x1a8) != 0) {
          nw_snd_internal_driver_Voice_Stop();
          nw_snd_internal_driver_Voice_Free(*(unsigned int *)(temp_v1 + 0x1a8));
          *(unsigned int *)(temp_v1 + 0x1a8) = 0;
          *(unsigned char *)(temp_v1 + 0x138) = 0;
          *(unsigned char *)(temp_v1 + 0x139) = 0;
          if (*(romwright_code **)(temp_v1 + 0x1a0) != (romwright_code *)0x0) {
            (**(romwright_code **)(temp_v1 + 0x1a0))(temp_v1,0,*(unsigned int *)(temp_v1 + 0x1a4));
          }
          if (*(char *)(temp_v1 + 0x13a) != '\0') {
            *(unsigned char *)(temp_v1 + 0x13a) = 0;
            temp_v2 = FUN_00191548();
            FUN_001b2040(temp_v2,temp_v1);
            return;
          }
        }
      }
    }
  }
  return;
}

} /* extern "C" */
