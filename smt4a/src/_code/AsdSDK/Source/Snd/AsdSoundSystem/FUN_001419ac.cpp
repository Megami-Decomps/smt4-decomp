/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001419ac` (_code @ 0x1419ac, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00153cd0(int, unsigned int, unsigned int, unsigned int);
int asdMemoryAllocTracked(int, int, int, int, int);
int nn_snd_CTR_FreeVoice(void);
int sysMemClear(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int g_asdSoundStatus; /* 0x63f4e4 */
extern int DAT_0063f4e8; /* 0x63f4e8 */
extern unsigned char DAT_0063f4f0; /* 0x63f4f0 */

/* Supplied declaration required: FUN_00153cd0. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: nn_snd_CTR_FreeVoice. */
/* Supplied declaration required: sysMemClear. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_001419ac(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 6 unstructured edge(s); 1 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0063f4f0);
  temp_v0 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xfc,1);
  temp_v1 = g_asdSoundStatus;
  if (temp_v0 != 0) {
    for (; temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0xd8)) {
      if (temp_v1 == temp_v0) {
        temp_v1 = g_asdSoundStatus;
        if (g_asdSoundStatus == 0) break;
        while (temp_v1 != temp_v0) {
          temp_v1 = *(int *)(temp_v1 + 0xd8);
          if (temp_v1 == 0) {
            DAT_0063f4e8 = DAT_0063f4e8 - 1;
            goto LAB_00141a6c;
          }
        }
        temp_v1 = *(int *)(temp_v0 + 0xdc);
        if (temp_v1 != 0) {
          temp_v2 = *(int *)(temp_v0 + 0xd8);
          *(int *)(temp_v1 + 0xd8) = temp_v2;
          if (*(int *)(temp_v0 + 0xd8) == 0) {
            DAT_0063f4e8 = DAT_0063f4e8 - 1;
            break;
          }
          *(int *)(temp_v2 + 0xdc) = temp_v1;
          DAT_0063f4e8 = DAT_0063f4e8 - 1;
          break;
        }
        g_asdSoundStatus = *(int *)(temp_v0 + 0xd8);
        if (g_asdSoundStatus != 0) {
          *(unsigned int *)(g_asdSoundStatus + 0xdc) = 0;
          DAT_0063f4e8 = DAT_0063f4e8 - 1;
          break;
        }
        g_asdSoundStatus = 0;
        DAT_0063f4e8 = DAT_0063f4e8 - 1;
        break;
      }
    }
LAB_00141a6c:
    temp_v1 = 0;
    if (0 < *(int *)(temp_v0 + 0xec)) {
      do {
        if (*(int *)(temp_v0 + temp_v1 * 4 + 0x68) != 0) {
          nn_snd_CTR_FreeVoice();
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v0 + 0xec));
    }
    sysMemClear(temp_v0,0xfc);
  }
  FUN_00153cd0(temp_v0,param_1,param_2,param_3);
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0063f4f0);
  return temp_v0;
}

} /* extern "C" */
