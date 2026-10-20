/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4e7c` (_code @ 0x1f4e7c, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00159110(...);
int asdMemoryAlloc(...);
int FUN_00422940(...);
int FUN_00425f68(...);
int FUN_00512e84(...);
int FUN_00513250(...);
int FUN_00513638(...);
int FUN_00513760(...);
int FUN_00513b94(...);
int FUN_00514258(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_00203950; /* 0x203950 */
extern unsigned char LAB_00227f8c; /* 0x227f8c */
extern int mobiclipHeapAllocA(...); /* 0x227fac */
extern unsigned char LAB_00240000; /* 0x240000 */
extern int mobiclipHeapAllocB(...); /* 0x25fffc */
extern unsigned char LAB_0028120c; /* 0x28120c */
extern unsigned char LAB_00287770; /* 0x287770 */
extern int mobiclipHeapAllocC(...); /* 0x2bf158 */
extern int mobiclipHeapAllocD(...); /* 0x2c919c */
extern unsigned char DAT_00588020; /* 0x588020 */
extern unsigned int DAT_00617c48; /* 0x617c48 */
extern unsigned int DAT_00617ca0; /* 0x617ca0 */
extern unsigned int DAT_00617cf8; /* 0x617cf8 */
extern unsigned int DAT_00617d50; /* 0x617d50 */
extern unsigned int DAT_00617da8; /* 0x617da8 */
extern unsigned int DAT_00617e00; /* 0x617e00 */
extern unsigned int DAT_00617e58; /* 0x617e58 */

/* Supplied declaration required: FUN_00159110. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_00422940. */
/* Supplied declaration required: FUN_00425f68. */
/* Supplied declaration required: FUN_00512e84. */
/* Supplied declaration required: FUN_00513250. */
/* Supplied declaration required: FUN_00513638. */
/* Supplied declaration required: FUN_00513760. */
/* Supplied declaration required: FUN_00513b94. */
/* Supplied declaration required: FUN_00514258. */


void FUN_001f4e7c(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,&LAB_00240000,1);
  FUN_00159110(&DAT_00617c48,temp_v0,&LAB_00240000,0x100);
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x80000,1);
  FUN_00159110(&DAT_00617ca0,temp_v0,0x80000,0x100);
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x400000,1);
  FUN_00159110(&DAT_00617e00,temp_v0,0x400000,0x100);
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x100000,1);
  FUN_00159110(&DAT_00617cf8,temp_v0,0x100000,0);
  temp_v0 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,0x8000,1);
  FUN_00159110(&DAT_00617d50,temp_v0,0x8000,0);
  temp_v0 = 0x10000;
  temp_v1 = 1;
  asdMemoryAlloc(0x10000,0x100,0,0x90000);
  FUN_00159110(&DAT_00617da8,temp_v0,0x90000,0);
  DAT_00588020 = 0;
  FUN_00513638(mobiclipHeapAllocB,&LAB_00227f8c);
  FUN_00513b94(mobiclipHeapAllocD,&LAB_00287770);
  FUN_00513760(mobiclipHeapAllocC,&LAB_0028120c);
  FUN_00512e84(mobiclipHeapAllocC,&LAB_0028120c);
  FUN_00513250(mobiclipHeapAllocC,&LAB_0028120c);
  FUN_00514258(mobiclipHeapAllocA,&LAB_00203950);
  FUN_00425f68();
  FUN_00422940(&DAT_00617e58,1,1,temp_v1);
  return;
}

} /* extern "C" */
