/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d38fc` (_code @ 0x1d38fc, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001a95f4(); /* 0x1a95f4 */
extern unsigned char LAB_001d3a40; /* 0x1d3a40 */
extern unsigned char LAB_001d3a58; /* 0x1d3a58 */
extern unsigned char LAB_001d3a78; /* 0x1d3a78 */
extern unsigned char LAB_001fc4bc; /* 0x1fc4bc */
extern unsigned int *DAT_0044d1c8; /* 0x44d1c8 */

/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c54f0. */
/* Supplied declaration required: FUN_002c5978. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_001d38fc(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c54f0(0x100,0x100,0,0x14,1);
  DAT_0044d1c8 = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_1 == 0) {
    *(unsigned char *)(puVar1 + 4) = 1;
  }
  FUN_00289b4c();
  FUN_0028d974();
  FUN_00289ae8();
  FUN_002b8b78(0xa2);
  temp_v0 = FUN_002c5e2c(&LAB_001d3a40);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_002c5e2c(&LAB_001d3a58);
  puVar1[3] = temp_v0;
  temp_v1 = puVar1[1];
  FUN_002972f8(temp_v1,temp_v0);
  puVar1[2] = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  FUN_002971e4(puVar1[2],0);
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  if (*(char *)(puVar1 + 4) != '\0') {
    FUN_00282e6c(0,0xff);
    FUN_00282e6c(1,0xff);
  }
  puVar4 = &LAB_001d3a78;
  FUN_002c5978(&LAB_001d3a78,2,0,0,FUN_001a95f4,&LAB_001fc4bc,DAT_0044d1c8);
  *DAT_0044d1c8 = (unsigned int)puVar4;
  return;
}
