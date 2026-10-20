/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e121c` (_code @ 0x1e121c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282bfc(...);
int FUN_00289880(...);
int FUN_002898e4(...);
int FUN_0028d6d0(...);
int FUN_00297060(...);
int FUN_00297410(...);
int FUN_002c4938(...);
int FUN_002c4a08(...);
int FUN_002c5300(...);
int FUN_002c5788(...);
int FUN_002c58c8(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001b10e4(...); /* 0x1b10e4 */
extern unsigned char LAB_001e139c; /* 0x1e139c */
extern unsigned char LAB_001e13b4; /* 0x1e13b4 */
extern unsigned char LAB_001e13d8; /* 0x1e13d8 */
extern unsigned char LAB_001e13e8; /* 0x1e13e8 */
extern unsigned char LAB_001e13f4; /* 0x1e13f4 */
extern int FUN_001e1418(...); /* 0x1e1418 */
extern int FUN_00206ca4(...); /* 0x206ca4 */
extern unsigned int *DAT_0043de80; /* 0x43de80 */

/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297410. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c58c8. */
extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_001e121c(int param_1)

{
/* irregular: 14 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c5300(0x100,0x100,0,0x94,1);
  DAT_0043de80 = puVar1;
  FUN_002c4938();
  if (param_1 == 0) {
    *(unsigned char *)(DAT_0043de80 + 2) = 1;
  }
  puVar1 = DAT_0043de80;
  FUN_00297410(0x3c);
  FUN_002898e4();
  FUN_0028d6d0();
  FUN_00289880();
  temp_v0 = FUN_002c5c04(&LAB_001e139c);
  puVar1[0x22] = temp_v0;
  temp_v0 = FUN_002c5c04(&LAB_001e13b4);
  puVar1[0x24] = temp_v0;
  temp_v1 = puVar1[0x22];
  FUN_00297060(temp_v1,temp_v0);
  puVar1[0x23] = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  FUN_002c58c8(2,0x83);
  if (*(char *)(puVar1 + 2) != '\0') {
    FUN_00282bfc(0,0xff);
    FUN_00282bfc(1,0xff);
  }
  puVar4 = &LAB_001e13d8;
  FUN_002c5788(&LAB_001e13d8,2,0,0,FUN_001b10e4,FUN_00206ca4,DAT_0043de80);
  puVar1 = DAT_0043de80;
  *DAT_0043de80 = (unsigned int)puVar4;
  FUN_002c4a08(&LAB_001e13e8,0x65,0,0,FUN_001e1418,0,puVar1,puVar4);
  FUN_002c4a08(&LAB_001e13f4,0xcc,0,0,FUN_001e1418,0,DAT_0043de80,*DAT_0043de80);
  return;
}

} /* extern "C" */
