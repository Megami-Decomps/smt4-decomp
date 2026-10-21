/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127000` (_code @ 0x127000, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match2_HandleRequest.h"

extern "C" {

u32 titleContentStreamCreate(u32 *, const HandleRequest *, u32, u32, u32, u32, u32);

typedef int romwright_code(...);
/* stack frame of param_10: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_10_stack;

extern int FUN_002bb99c(unsigned int, int *);


void FUN_00127000(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *temp_v1;
  u32 handle;
  u32 status;
  HandleRequest request;
  
  request.value = static_cast<u64>(param_3) | (static_cast<u64>(param_4) << 32);
  request.kind = param_2;
  request.argument = param_5;
  status = titleContentStreamCreate(&handle,&request,param_6,param_7,param_8,param_9,param_10);
  if (static_cast<s32>(status) >= 0) {
    temp_v1 = reinterpret_cast<int *>(handle);
    temp_v0 = FUN_002bb99c(param_1,temp_v1);
    if (temp_v0 < 0)
      (**(romwright_code **)(*temp_v1 + 0x30))(temp_v1);
  }
  return;
}

} /* extern "C" */
