/* NON_MATCHING: vtable-backed Filter4Poly member requires class/member symbol migration; retail calls virtual slot 0x10 on this. */
#include "romwright_types.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);
int mtx44Copy(int, unsigned int);
int resourceApplyNodeFlag(int, unsigned int);
void* asdTMTexNodeSetMode(int, int);
int FUN_0041d910(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: asdMemoryAlloc. */
extern unsigned int _ZN2nw4math5MTX448IdentityEv(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: resourceApplyNodeFlag. */
/* Supplied declaration required: FUN_0041d910. */


void FUN_0041d7a8(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  param_1[7] = param_2;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0xa0,1);
  param_1[1] = temp_v0;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x88,1);
  temp_v2 = 0;
  param_1[6] = temp_v0;
  do {
    if ((param_3 & 8) != 0) {
      temp_v1 = 0xe;
      resourceApplyNodeFlag(0xe,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 0x40) != 0) {
      temp_v1 = 0xe;
      temp_v1 = (int)asdTMTexNodeSetMode(0xe,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 1) != 0) {
      temp_v1 = 0xe;
      asdTMTexLoadMainHeap(0xe,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  FUN_0041d910(param_1);
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v0 = 0;
  do {
    temp_v2 = param_1[6];
    temp_v1 = _ZN2nw4math5MTX448IdentityEv();
    mtx44Copy(temp_v2 + temp_v0 * 0x44,temp_v1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}

} /* extern "C" */
