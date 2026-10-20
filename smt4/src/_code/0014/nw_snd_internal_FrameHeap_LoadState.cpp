/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_FrameHeap_LoadState` (_code @ 0x141064, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151400(void);
int nw_snd_internal_FrameHeap_ClearSection(void);
int nw_snd_internal_FrameHeap_NewSection(unsigned int *);
int nw_ut_FrameHeap_Free(unsigned int, int);
int nw_ut_FrameHeap_FreeByState(unsigned int, int);
int nw_ut_FrameHeap_RecordState(unsigned int, unsigned int);
int nw_ut_internal_LinkListImpl_erase_2AC900(int, unsigned int, int);
int nw_ut_internal_LinkListImpl_erase_2B743C(unsigned int *, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00151400. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_ClearSection. */
/* Supplied declaration required: nw_snd_internal_FrameHeap_NewSection. */
/* Supplied declaration required: nw_ut_FrameHeap_Free. */
/* Supplied declaration required: nw_ut_FrameHeap_FreeByState. */
/* Supplied declaration required: nw_ut_FrameHeap_RecordState. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2AC900. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2B743C. */


void nw_snd_internal_FrameHeap_LoadState(unsigned int *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  if (param_2 == 0) {
    nw_snd_internal_FrameHeap_ClearSection();
    nw_ut_FrameHeap_Free(*param_1,3);
    nw_snd_internal_FrameHeap_NewSection(param_1);
    return;
  }
  puVar1 = param_1;
  FUN_00151400();
  while (param_2 < (int)param_1[1]) {
    temp_v1 = param_1[3];
    if (puVar1 != (unsigned int *)0x0) {
      *(unsigned char *)(temp_v1 + 0x14) = 0;
    }
    if (*(char *)(temp_v1 + 0x14) != '\0') {
      temp_v0 = temp_v1 + 0xc;
      while (temp_v0 != *(int *)(temp_v1 + 0xc)) {
        temp_v0 = *(int *)(temp_v0 + 4);
        if (*(romwright_code **)(temp_v0 + 0x10) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v0 + 0x10))
                    (*(unsigned int *)(temp_v0 + 8),*(unsigned int *)(temp_v0 + 0xc),
                     *(unsigned int *)(temp_v0 + 0x14));
        }
      }
    }
    nw_ut_internal_LinkListImpl_erase_2AC900(temp_v1 + 8,*(unsigned int *)(temp_v1 + 0xc),temp_v1 + 0xc);
    nw_ut_internal_LinkListImpl_erase_2B743C(param_1 + 1,temp_v1);
  }
  nw_ut_FrameHeap_FreeByState(*param_1,param_2);
  nw_ut_FrameHeap_RecordState(*param_1,param_1[1]);
  nw_snd_internal_FrameHeap_NewSection(param_1);
  return;
}

} /* extern "C" */
