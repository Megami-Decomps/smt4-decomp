/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511c60` (_code @ 0x511c60, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(unsigned int *);
int emptyStub_002f4370(unsigned char **, int, int);
int FUN_002f5020(unsigned char *, unsigned char *, int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0042b478; /* 0x42b478 */
extern unsigned char DAT_00558438; /* 0x558438 */
extern unsigned int DAT_005893a8; /* 0x5893a8 */
extern unsigned char *DAT_0062d34c; /* 0x62d34c */
extern unsigned int DAT_0062d350; /* 0x62d350 */
extern unsigned int DAT_0062d354; /* 0x62d354 */
extern unsigned int DAT_0062d358; /* 0x62d358 */
extern unsigned int DAT_0062d35c; /* 0x62d35c */
extern unsigned int DAT_0062d360; /* 0x62d360 */
extern unsigned int DAT_0062d370; /* 0x62d370 */
extern unsigned int DAT_0062d37c; /* 0x62d37c */
extern unsigned int DAT_0062d380; /* 0x62d380 */
extern unsigned int DAT_0062d384; /* 0x62d384 */
extern unsigned char *DAT_0062d388; /* 0x62d388 */
extern unsigned int DAT_0062d38c; /* 0x62d38c */
extern unsigned int DAT_0062d390; /* 0x62d390 */
extern unsigned int DAT_0062d394; /* 0x62d394 */
extern unsigned int DAT_0062d398; /* 0x62d398 */
extern unsigned int DAT_0062d39c; /* 0x62d39c */
extern unsigned int DAT_0062d3ac; /* 0x62d3ac */
extern unsigned int DAT_0062d3b8; /* 0x62d3b8 */
extern unsigned int DAT_0062d3bc; /* 0x62d3bc */
extern unsigned int DAT_0062d3c0; /* 0x62d3c0 */
extern unsigned char *DAT_0062d3c4; /* 0x62d3c4 */
extern unsigned int DAT_0062d3c8; /* 0x62d3c8 */
extern unsigned int DAT_0062d3cc; /* 0x62d3cc */
extern unsigned int DAT_0062d3d0; /* 0x62d3d0 */
extern unsigned int DAT_0062d3d4; /* 0x62d3d4 */
extern unsigned int DAT_0062d3d8; /* 0x62d3d8 */
extern unsigned int DAT_0062d3e8; /* 0x62d3e8 */
extern unsigned int DAT_0062d3f4; /* 0x62d3f4 */
extern unsigned int DAT_0062d3f8; /* 0x62d3f8 */
extern unsigned int DAT_0062d3fc; /* 0x62d3fc */
extern unsigned int DAT_0062d400; /* 0x62d400 */
extern unsigned char DAT_0062d410; /* 0x62d410 */

/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: emptyStub_002f4370. */
/* Supplied declaration required: FUN_002f5020. */
extern void nn_fnd_UnitHeapBase_Initialize(unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);


void FUN_00511c60(void)

{
/* irregular: 3 native warning(s); review required */
  FUN_002f5020(&DAT_0062d410,&LAB_0042b478,0x10,0x20);
  DAT_005893a8 = 0;
  DAT_0062d400 = 0;
  FUN_00188b60(&DAT_0062d400);
  DAT_0062d350 = 0;
  DAT_0062d354 = 0;
  DAT_0062d358 = 0;
  DAT_0062d35c = 0;
  DAT_0062d360 = 0;
  DAT_0062d370 = 0;
  DAT_0062d37c = 0;
  DAT_0062d380 = 0;
  DAT_0062d384 = 0xffffffff;
  DAT_0062d34c = &DAT_00558438;
  nn_fnd_UnitHeapBase_Initialize((unsigned int)&DAT_0062d34c,0x10,0x56d6c0,0x100,4,0);
  FUN_00188b60(&DAT_0062d37c);
  DAT_0062d38c = 0;
  DAT_0062d390 = 0;
  DAT_0062d394 = 0;
  DAT_0062d398 = 0;
  DAT_0062d39c = 0;
  DAT_0062d3ac = 0;
  DAT_0062d3b8 = 0;
  DAT_0062d3bc = 0;
  DAT_0062d3c0 = 0xffffffff;
  DAT_0062d388 = &DAT_00558438;
  nn_fnd_UnitHeapBase_Initialize((unsigned int)&DAT_0062d388,8,0x56d7c0,0x100,4,0);
  FUN_00188b60(&DAT_0062d3b8);
  DAT_0062d3c8 = 0;
  DAT_0062d3cc = 0;
  DAT_0062d3d0 = 0;
  DAT_0062d3d4 = 0;
  DAT_0062d3d8 = 0;
  DAT_0062d3e8 = 0;
  DAT_0062d3f4 = 0;
  DAT_0062d3f8 = 0;
  DAT_0062d3fc = 0xffffffff;
  DAT_0062d3c4 = &DAT_00558438;
  nn_fnd_UnitHeapBase_Initialize((unsigned int)&DAT_0062d3c4,8,0x56d8c0,0x80,4,0);
  FUN_00188b60(&DAT_0062d3f4);
  emptyStub_002f4370(&DAT_0062d3c4,0x1aa330,0x100000);
  return;
}

} /* extern "C" */
