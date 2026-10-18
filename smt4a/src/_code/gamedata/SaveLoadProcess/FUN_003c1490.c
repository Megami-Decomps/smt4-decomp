/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1490` (_code @ 0x3c1490, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_00371750(); /* 0x371750 */
extern int FUN_003a7938(); /* 0x3a7938 */
extern unsigned char LAB_003c161c; /* 0x3c161c */
extern unsigned char LAB_003c1628; /* 0x3c1628 */
extern unsigned char LAB_003c1634; /* 0x3c1634 */
extern int FUN_003c6038(); /* 0x3c6038 */
extern unsigned char DAT_0057f6bc; /* 0x57f6bc */
extern unsigned char DAT_0057f6bd; /* 0x57f6bd */
extern unsigned char DAT_0057f6be; /* 0x57f6be */
extern unsigned char DAT_0057f6bf; /* 0x57f6bf */
extern unsigned char DAT_0057f6c0; /* 0x57f6c0 */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern unsigned int DAT_0057f6c4; /* 0x57f6c4 */

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002684ac. */
/* Supplied declaration required: FUN_002a2d14. */
/* Supplied declaration required: FUN_002c76d8. */
/* Supplied declaration required: FUN_00333574. */


unsigned int FUN_003c1490(int param_1,unsigned char param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x1c,1);
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
  DAT_0057f6bc = 0;
  DAT_0057f6bd = 0;
  DAT_0057f6be = 0;
  if (param_1 < 2) {
    puVar2[4] = param_1;
    puVar2[5] = 0;
  }
  else {
    puVar2[4] = param_1 - 1;
    puVar2[5] = 1;
  }
  *(unsigned char *)(puVar2 + 6) = 0;
  puVar4 = &LAB_003c161c;
  FUN_0014e38c(&LAB_003c161c,4,0,0,FUN_00371750,FUN_003c6038,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_002a2d14();
  puVar2[1] = 0;
  *(unsigned char *)((int)puVar2 + 0x19) = param_2;
  FUN_0015155c(&LAB_003c1628,0x86,0,0,FUN_003a7938,0,0,*puVar2);
  FUN_0015155c(&LAB_003c1634,0xe2,0,0,FUN_003a7938,0,0,*puVar2);
  return *puVar2;
}
