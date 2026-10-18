/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b874` (_code @ 0x26b874, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0026b99c; /* 0x26b99c */
extern int FUN_002ef9ac(); /* 0x2ef9ac */
extern int FUN_00324d6c(); /* 0x324d6c */
extern unsigned char DAT_0043e2f0; /* 0x43e2f0 */
extern unsigned char DAT_0043e2f1; /* 0x43e2f1 */
extern unsigned char DAT_0043e2f2; /* 0x43e2f2 */
extern unsigned char DAT_0043e2f3; /* 0x43e2f3 */
extern unsigned char DAT_0043e2f4; /* 0x43e2f4 */
extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern unsigned int DAT_0043e2f8; /* 0x43e2f8 */

/* Supplied declaration required: FUN_001ec8e4. */
/* Supplied declaration required: FUN_002594ac. */
/* Supplied declaration required: FUN_002594cc. */
/* Supplied declaration required: FUN_0026b7ec. */
extern int FUN_002c0b94(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_0026b874(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x18,1);
  FUN_0026b7ec(1);
  FUN_002594cc(1);
  FUN_002594ac(1);
  puVar2[2] = 0;
  temp_v1 = FUN_002c0b94();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  puVar2[4] = (unsigned int)temp_v0;
  if (temp_v0 == 0) {
    puVar2[4] = 1;
  }
  DAT_0043e2f3 = 0;
  DAT_0043e2f4 = 0;
  DAT_0043e2f8 = 0;
  DAT_0043e2f6 = 0;
  puVar4 = &LAB_0026b99c;
  FUN_002c5978(&LAB_0026b99c,2,0,0,FUN_002ef9ac,FUN_00324d6c,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_001ec8e4();
  puVar2[4] = param_1;
  DAT_0043e2f0 = 0;
  DAT_0043e2f1 = 0;
  DAT_0043e2f2 = 0;
  puVar2[1] = 4;
  return *puVar2;
}
