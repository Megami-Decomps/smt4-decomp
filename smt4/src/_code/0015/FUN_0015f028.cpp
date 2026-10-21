/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f028` (_code @ 0x15f028, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match2_HandleRequest.h"

extern "C" {

u32 titleContentStreamCreate(u32 *, const HandleRequest *, u32, u32, u32, u32, u32);

typedef int romwright_code(...);
/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_9_stack;

extern int FUN_002bb99c(unsigned int, int *);


/* WARNING: Removing unreachable block (ram,0x0015f088) */

void FUN_0015f028(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *temp_v1;
  u32 handle;
  u32 status;
  HandleRequest request;
  
  request.value = (static_cast<u64>(0x4008c) << 32) |
                  (param_3 | ((param_2 & 0xff0fffff) << 8));
  request.kind = 1;
  request.argument = param_4;
  status = titleContentStreamCreate(&handle,&request,param_5,param_6,param_7,param_8,param_9);
  if (static_cast<s32>(status) >= 0) {
    temp_v1 = reinterpret_cast<int *>(handle);
    temp_v0 = FUN_002bb99c(param_1,temp_v1);
    if (temp_v0 < 0)
      (**(romwright_code **)(*temp_v1 + 0x30))(temp_v1);
  }
  return;
}

} /* extern "C" */
