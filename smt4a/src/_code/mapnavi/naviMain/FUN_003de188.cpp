/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de188` (_code @ 0x3de188, 0x21c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int campCommonBgAcquire(...);
int campButtonHelpAcquire(...);
int FUN_003b61ec(...);
int FUN_003c5848(...);
int FUN_00485e74(...);
int FUN_00490484(...);
int FUN_004930e4(...);
int FUN_004cfac8(...);
int NaviMain_ResetFlags(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00235cc4; /* 0x235cc4 */
extern int FUN_00235ce0(...); /* 0x235ce0 */
extern unsigned char LAB_002ba728; /* 0x2ba728 */
extern int FUN_002ba754(...); /* 0x2ba754 */
extern unsigned char LAB_003de3f4; /* 0x3de3f4 */
extern unsigned char LAB_003de404; /* 0x3de404 */
extern unsigned char LAB_003de414; /* 0x3de414 */
extern unsigned int *g_naviMain; /* 0x587f28 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: campCommonBgAcquire. */
/* Supplied declaration required: campButtonHelpAcquire. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c5848. */
/* Supplied declaration required: FUN_00485e74. */
/* Supplied declaration required: FUN_00490484. */
/* Supplied declaration required: FUN_004930e4. */
/* Supplied declaration required: FUN_004cfac8. */
/* Supplied declaration required: NaviMain_ResetFlags. */


void FUN_003de188(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x206cc,1);
  g_naviMain = puVar1;
  temp_v0 = gameFlagsGetBlock();
  *(unsigned char *)((int)puVar1 + 10) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 1;
  puVar1[0x17] = 0x3f800000;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(unsigned char *)(puVar1 + 2) = 0;
  FUN_00485e74(puVar1 + 0x1a);
  campCommonBgAcquire();
  temp_v1 = gameFlagIsSet(0x49a);
  if (temp_v1 != 0) {
    FUN_003c5848();
  }
  else {
    FUN_003b61ec();
  }
  temp_v1 = gameFlagIsSet(0xc);
  if ((temp_v1 != 0) && (temp_v1 = gameFlagIsSet(0x10), temp_v1 == 0)) {
    FUN_003b61ec();
  }
  campButtonHelpAcquire();
  FUN_004930e4(param_2);
  puVar4 = &LAB_003de3f4;
  asdProcessCreateSimple(&LAB_003de3f4,4,0,0,FUN_00235ce0,&LAB_00235cc4,puVar1);
  *puVar1 = (unsigned int)puVar4;
  puVar5 = &LAB_003de404;
  taskCreateDraw(&LAB_003de404,0xe8,1,0,FUN_002ba754,0,puVar1,puVar4);
  puVar1[1] = (unsigned int)puVar5;
  puVar4 = &LAB_003de414;
  taskCreateDraw(&LAB_003de414,0xea,0,0,&LAB_002ba728,0,0,*puVar1);
  puVar1[0x81ae] = (unsigned int)puVar4;
  NaviMain_ResetFlags(puVar1 + 0x81af,1);
  if (g_naviMain != (unsigned int *)0x0) {
    FUN_004cfac8(g_naviMain + 0x81af,0,0);
  }
  if (*(int *)(temp_v0 + 0x1688) == 1) {
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1698),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x1694),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00490484(puVar1 + 0x1a,*(unsigned int *)(temp_v0 + 0x168c),*(unsigned int *)(temp_v0 + 0x1690),
                 *(unsigned int *)(temp_v0 + 0x169c));
    *(unsigned int *)(temp_v0 + 0x1688) = 0;
    *(unsigned int *)(temp_v0 + 0x168c) = 0;
    *(unsigned int *)(temp_v0 + 0x1690) = 0;
    *(unsigned int *)(temp_v0 + 0x1694) = 0;
    *(unsigned int *)(temp_v0 + 0x1698) = 0;
    *(unsigned int *)(temp_v0 + 0x169c) = 0;
  }
  return;
}

} /* extern "C" */
