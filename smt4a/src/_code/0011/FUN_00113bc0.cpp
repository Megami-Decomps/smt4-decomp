/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113bc0` (_code @ 0x113bc0, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_ChunkPool.h"

struct PoolTreeNode88;

extern "C" {

int FUN_002eca44(void);

extern unsigned char LAB_00113c50; /* 0x113c50 */
extern unsigned char DAT_005595c8; /* 0x5595c8 */

extern PoolTreeNode88* nodePoolAcquireRecordTreeNode(ChunkPool*);
extern int onlineStringConstruct(int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002f8728(unsigned int *);
extern int FUN_002fe94c(int);


void FUN_00113bc0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *param_1 = (unsigned int)&DAT_005595c8;
  temp_v0 = FUN_002f8728(param_1 + 7);
  temp_v0 = FUN_002fe94c(temp_v0 + 0x18);
  temp_v0 = FUN_002fe94c(temp_v0 + 0x1c);
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  temp_v0 = temp_v0 + 0x30;
  FUN_002eca44();
  *(unsigned char *)(temp_v0 + 0x60) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned char *)(temp_v0 + 0x8c) = 0;
  *(char *)(temp_v0 + 0x8d) = (char)temp_v0 + '@';
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  temp_v1 = (int)nodePoolAcquireRecordTreeNode((ChunkPool*)((unsigned char*)param_1 + 0xf4));
  *(int *)(temp_v0 + 0x84) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x84) + 8) = *(int *)(temp_v0 + 0x84);
  *(int *)(*(int *)(temp_v0 + 0x84) + 0xc) = *(int *)(temp_v0 + 0x84);
  temp_v0 = onlineStringConstruct(temp_v0 + 0x90,&LAB_00113c50);
  *(unsigned short *)(temp_v0 + 8) = 0;
  *(unsigned char *)(temp_v0 + 10) = 0;
  return;
}

} /* extern "C" */
