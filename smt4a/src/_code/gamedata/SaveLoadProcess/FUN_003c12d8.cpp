/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c12d8` (_code @ 0x3c12d8, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_002684ac(...);
int FUN_002a2d14(...);
int FUN_002c76d8(...);
int FUN_00333574(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int FUN_003712a4(...); /* 0x3712a4 */
extern int FUN_003a7938(...); /* 0x3a7938 */
extern unsigned char LAB_003c1468; /* 0x3c1468 */
extern unsigned char LAB_003c1474; /* 0x3c1474 */
extern unsigned char LAB_003c1480; /* 0x3c1480 */
extern int FUN_003c6038(...); /* 0x3c6038 */
extern unsigned char DAT_0057f6bc; /* 0x57f6bc */
extern unsigned char DAT_0057f6bd; /* 0x57f6bd */
extern unsigned char DAT_0057f6be; /* 0x57f6be */
extern unsigned char DAT_0057f6bf; /* 0x57f6bf */
extern unsigned char DAT_0057f6c0; /* 0x57f6c0 */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern unsigned int DAT_0057f6c4; /* 0x57f6c4 */

extern int FUN_0014af84(void);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_002684ac. */
/* Supplied declaration required: FUN_002a2d14. */
/* Supplied declaration required: FUN_002c76d8. */
/* Supplied declaration required: FUN_00333574. */


unsigned int FUN_003c12d8(int param_1,unsigned char param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x1c,1);
  FUN_002c76d8(1);
  FUN_002684ac(1);
  FUN_00333574(1);
  puVar2[2] = 0;
  temp_v1 = FUN_0014af84();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  puVar2[4] = (unsigned int)temp_v0;
  if (temp_v0 == 0) {
    puVar2[4] = 1;
  }
  DAT_0057f6bf = 0;
  DAT_0057f6c0 = 0;
  DAT_0057f6c4 = 0;
  DAT_0057f6c2 = 0;
  puVar4 = &LAB_003c1468;
  asdProcessCreateSimple(&LAB_003c1468,4,0,0,FUN_003712a4,FUN_003c6038,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_002a2d14();
  if (param_1 < 2) {
    puVar2[4] = param_1;
    puVar2[5] = 0;
  }
  else {
    puVar2[4] = param_1 - 1;
    puVar2[5] = 1;
  }
  *(unsigned char *)(puVar2 + 6) = param_2;
  taskCreateDraw(&LAB_003c1474,0x86,0,0,FUN_003a7938,0,0,*puVar2);
  taskCreateDraw(&LAB_003c1480,0xe2,0,0,FUN_003a7938,0,0,*puVar2);
  DAT_0057f6bc = 0;
  DAT_0057f6bd = 0;
  DAT_0057f6be = 0;
  puVar2[1] = 6;
  return *puVar2;
}

} /* extern "C" */
