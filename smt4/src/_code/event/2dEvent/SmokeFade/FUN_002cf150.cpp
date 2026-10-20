/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf150` (_code @ 0x2cf150, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int FUN_002a5ed0(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int asdTMTexTableLoadTmx(...);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001ad4f4; /* 0x1ad4f4 */
extern int FUN_001ad6fc(...); /* 0x1ad6fc */
extern unsigned char LAB_002cf320; /* 0x2cf320 */
extern unsigned char LAB_002cf334; /* 0x2cf334 */
extern unsigned char LAB_002cf34c; /* 0x2cf34c */
extern unsigned int *DAT_0043df28; /* 0x43df28 */
extern unsigned int DAT_0043df40; /* 0x43df40 */
extern unsigned int DAT_0043df44; /* 0x43df44 */

extern int FUN_0024bb10(unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002a5ed0. */
extern int FUN_002a60b4(unsigned int, unsigned int);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_002cf150(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (DAT_0043df28 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x28,1);
    DAT_0043df28 = puVar1;
  }
  puVar1 = DAT_0043df28;
  *DAT_0043df28 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = &LAB_002cf320;
  asdProcessCreateSimple(&LAB_002cf320,1,0,0,FUN_001ad6fc,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002cf334,0x81,0,0,&LAB_001ad4f4,0,0,puVar2);
  taskCreateDraw(&LAB_002cf34c,0xdf,0,0,&LAB_001ad4f4,0,0,*puVar1);
  puVar1[6] = 0;
  puVar1[3] = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  puVar1[8] = 0x3f800000;
  puVar1[7] = 0x3f800000;
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  temp_v1 = 0;
  do {
    temp_v0 = FUN_0024bb10((&DAT_0043df40)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      asdTMTexTableLoadTmx((&DAT_0043df40)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df49) = 1;
    }
    temp_v0 = FUN_002a60b4((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      FUN_002a5ed0((&DAT_0043df40)[temp_v1 * 3],(&DAT_0043df44)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df48) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  FUN_00297468(0x2cf36c,puVar1 + 2,0);
  return;
}

} /* extern "C" */
