/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b3de` (_code @ 0x10b3de, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_ChunkPool.h"

struct WordTreeNode;

extern "C" {

typedef struct fn_0010b3de_arg0 fn_0010b3de_arg0;
struct fn_0010b3de_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined1 field_0x1c; /* +0x1c */
    char field_0x1d; /* +0x1d */
    unsigned char pad_0x1e[0x2];
    undefined4 field_0x20; /* +0x20 */
};

extern WordTreeNode* nodePoolAcquireWordTreeNode(ChunkPool*);


int FUN_0010b3de(fn_0010b3de_arg0 *param_1,unsigned int param_2)

{
  void *pvVar1;
  
  param_1->field_0x4 = 0;
  param_1->field_0x14 = (void *)0x0;
  param_1->field_0x18 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x1d = (char)param_2;
  param_1->field_0x10 = 0;
  param_1->field_0xc = 0;
  param_1->field_0x8 = 0;
  pvVar1 = (void *)nodePoolAcquireWordTreeNode((ChunkPool*)((unsigned char*)param_1 + 4));
  param_1->field_0x14 = pvVar1;
  *(unsigned int *)((int)pvVar1 + 4) = 0;
  *(void **)((int)param_1->field_0x14 + 8) = param_1->field_0x14;
  *(void **)((int)param_1->field_0x14 + 0xc) = param_1->field_0x14;
  param_1->field_0x20 = param_2;
  return (int)param_1;
}

} /* extern "C" */
