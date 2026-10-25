/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c404` (_code @ 0x15c404, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int nw_snd_internal_TaskManager_AppendTask(unsigned int, unsigned int *, int);
int nw_ut_internal_LinkListImpl_insert(int, int, unsigned int *);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char DAT_00421d2c; /* 0x421d2c */

extern unsigned int *_ZN9Obj421d10C1Ev(int);
extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: memClear. */
extern int nw_snd_internal_PoolImpl_AllocImpl(int);
/* Supplied declaration required: nw_snd_internal_TaskManager_AppendTask. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_0015c404(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = nw_snd_internal_PoolImpl_AllocImpl(param_1 + 0x8c);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(temp_v0), 0x50));
    puVar2 = (unsigned int *)_ZN9Obj421d10C1Ev(temp_v0);
    *puVar2 = (unsigned int)&DAT_00421d2c;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  puVar2[0x11] = param_1;
  puVar2[6] = param_1;
  puVar2[0xf] = param_3;
  puVar2[0x10] = param_4;
  if (*(unsigned int *)(param_1 + 0x20) != 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x20) & 1;
    if (temp_v1 == 1) {
      puVar2[7] = *param_2;
    }
    temp_v3 = (unsigned int)(temp_v1 == 1);
    if (temp_v1 < *(unsigned int *)(param_1 + 0x20)) {
      do {
        puVar2[temp_v3 + 7] = param_2[temp_v3];
        temp_v1 = temp_v1 + 2;
        puVar2[temp_v3 + 8] = param_2[temp_v3 + 1];
        temp_v3 = temp_v3 + 2;
      } while (temp_v1 < *(unsigned int *)(param_1 + 0x20));
    }
  }
  nw_ut_internal_LinkListImpl_insert(param_1 + 0x80,param_1 + 0x84,puVar2 + 0x12);
  temp_v2 = FUN_002bb020();
  nw_snd_internal_TaskManager_AppendTask(temp_v2,puVar2,param_5);
  return;
}

} /* extern "C" */
