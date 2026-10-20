/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d67fc` (_code @ 0x2d67fc, 0x548 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024aaa0(void);
int FUN_0026eda8(void);
int FUN_0026ee14(...);
int FUN_0026f204(void);
int FUN_00297468(...);
int FUN_002a8740(...);
int FUN_002b8838(...);
int FUN_002bd81c(...);
int FUN_002bd82c(...);
int FUN_002c3940(...);
int FUN_002c4938(void);
int FUN_002c498c(int, int, int, int, int);
int FUN_002c4a08(...);
int FUN_002c5788(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_00309df4(void);
int FUN_0031b860(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001c0e9c; /* 0x1c0e9c */
extern unsigned char LAB_001c0efc; /* 0x1c0efc */
extern unsigned char LAB_001ebdb8; /* 0x1ebdb8 */
extern int FUN_00210e38(...); /* 0x210e38 */
extern unsigned char LAB_00220d38; /* 0x220d38 */
extern int FUN_00220d58(...); /* 0x220d58 */
extern unsigned char LAB_002d6c0c; /* 0x2d6c0c */
extern unsigned char LAB_002d6c24; /* 0x2d6c24 */
extern unsigned char LAB_002d6c40; /* 0x2d6c40 */
extern unsigned char LAB_002d6c60; /* 0x2d6c60 */
extern unsigned char LAB_002d6c78; /* 0x2d6c78 */
extern unsigned char LAB_002d6c94; /* 0x2d6c94 */
extern unsigned char LAB_002d6cd0; /* 0x2d6cd0 */
extern unsigned char LAB_002d6ce4; /* 0x2d6ce4 */
extern unsigned char LAB_002d6cfc; /* 0x2d6cfc */
extern int FUN_002d6d44(...); /* 0x2d6d44 */
extern int FUN_002e1744(...); /* 0x2e1744 */
extern int FUN_002ec514(...); /* 0x2ec514 */
extern int FUN_002fc7a0(...); /* 0x2fc7a0 */
extern int FUN_002fc8dc(...); /* 0x2fc8dc */
extern int FUN_003172e0(...); /* 0x3172e0 */
extern int FUN_00321af0(...); /* 0x321af0 */
extern unsigned int *DAT_0043dad0; /* 0x43dad0 */

/* Supplied declaration required: FUN_0024aaa0. */
extern unsigned int FUN_0025463c(void);
/* Supplied declaration required: FUN_0026eda8. */
/* Supplied declaration required: FUN_0026ee14. */
extern unsigned int FUN_0026ef04(void);
/* Supplied declaration required: FUN_0026f204. */
/* Supplied declaration required: FUN_00297468. */
extern int FUN_0029ebac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);
extern unsigned int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bd81c. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int FUN_002bd838(unsigned int);
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_00309df4. */
/* Supplied declaration required: FUN_0031b860. */


void FUN_002d67fc(unsigned char param_1)

{
/* irregular: 25 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (DAT_0043dad0 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x160,1);
    DAT_0043dad0 = puVar1;
  }
  puVar1 = DAT_0043dad0;
  FUN_002c4938();
  puVar2 = &LAB_002d6c0c;
  FUN_002c5788(&LAB_002d6c0c,1,0,0,&LAB_001c0efc,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_002d6c24,0x65,0,0,&LAB_001ebdb8,0,0,puVar2);
  FUN_002c4a08(&LAB_002d6c40,0xcc,0,0,&LAB_001ebdb8,0,0,*puVar1);
  FUN_002c4a08(&LAB_002d6c60,0x7d,0,0,&LAB_001c0e9c,0,0,*puVar1);
  FUN_002c4a08(&LAB_002d6c78,0xdb,0,0,&LAB_001c0e9c,0,0,*puVar1);
  FUN_002c4a08(&LAB_002d6c94,0xe6,0,0,FUN_00210e38,0,0,*puVar1);
  puVar1[0x44] = 0xffffffff;
  puVar1[0x42] = 0xffffffff;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0xffffffff;
  puVar1[0x40] = 0xffffffff;
  puVar1[0x41] = 0;
  *(unsigned char *)(puVar1 + 0x4a) = 1;
  puVar1[0x46] = 0;
  *(unsigned char *)((int)puVar1 + 0x129) = param_1;
  *(unsigned char *)((int)puVar1 + 0x12a) = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0x10;
  puVar1[0x4f] = 0;
  *(unsigned char *)((int)puVar1 + 0x141) = 0;
  puVar1[0x51] = 0xffffffc8;
  puVar1[0x52] = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar1[0x57] = 0xffffffff;
  puVar1[0x2d] = (unsigned int)FUN_002e1744;
  puVar1[0x2f] = (unsigned int)FUN_002d6d44;
  puVar1[0x2e] = (unsigned int)FUN_00220d58;
  puVar1[0x30] = (unsigned int)FUN_002fc8dc;
  puVar1[0x31] = (unsigned int)FUN_002fc7a0;
  puVar1[0x32] = (unsigned int)FUN_002ec514;
  puVar1[0x35] = (unsigned int)&LAB_00220d38;
  puVar1[0x33] = (unsigned int)FUN_003172e0;
  puVar1[0x34] = (unsigned int)FUN_00321af0;
  puVar1[0x56] = 0;
  puVar1[0x37] = 1;
  puVar1[0x38] = 2;
  puVar1[0x3f] = 3;
  puVar1[0x36] = 0;
  puVar1[0x3c] = 6;
  puVar1[0x3d] = 7;
  puVar1[0x3e] = 8;
  puVar1[0x39] = 9;
  puVar1[0x3a] = 4;
  puVar1[0x3b] = 5;
  temp_v0 = FUN_0024aaa0();
  puVar1[1] = temp_v0;
  temp_v0 = FUN_0025463c();
  puVar1[2] = temp_v0;
  FUN_00309df4();
  puVar1[3] = temp_v0;
  temp_v0 = FUN_0026ef04();
  FUN_0031b860();
  puVar1[4] = temp_v0;
  FUN_0026f204();
  FUN_00297468(&LAB_002d6cd0,puVar1 + 0x29,0);
  FUN_00297468(&LAB_002d6ce4,puVar1 + 0x2a,0);
  FUN_00297468(&LAB_002d6cfc,puVar1 + 0x2b,0);
  temp_v0 = FUN_002bd838(0);
  puVar1[0x2c] = temp_v0;
  FUN_002bd82c(temp_v0,0xff);
  FUN_002bd81c(puVar1[0x2c],0,0x646464ff);
  FUN_002b8838(0xb1);
  temp_v4 = 0;
  do {
    FUN_002c3940(puVar1 + temp_v4 * 5 + 0xf,0x14);
    temp_v3 = temp_v4 + 1;
    puVar1[temp_v4 * 5 + 0x10] = 0x14a;
    temp_v4 = temp_v3;
  } while (temp_v3 < 3);
  temp_v4 = 0;
  do {
    FUN_002c3940(puVar1 + temp_v4 * 5 + 5,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  FUN_002c3940(puVar1 + 0x23,0x14);
  puVar1[0x24] = 0x14a;
  temp_v0 = FUN_002b63ac();
  temp_v1 = FUN_0024aaa0();
  FUN_0026ee14(temp_v1,temp_v0);
  FUN_0024aaa0();
  FUN_0026eda8();
  temp_v4 = FUN_002a8764();
  temp_v3 = 0;
  puVar1[0x47] = 0;
  do {
    if (-1 < *(char *)(temp_v4 + temp_v3 + 0x90f0)) {
      temp_v0 = FUN_002a8740();
      temp_v2 = FUN_0029ebac(temp_v0,10);
      if (temp_v2 == 0) {
        temp_v0 = FUN_002a8740((int)*(char *)(temp_v4 + temp_v3 + 0x90f0));
        temp_v2 = FUN_0029ebac(temp_v0,1);
        if (temp_v2 == 0) {
          puVar1[0x47] = puVar1[0x47] + 1;
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  return;
}

} /* extern "C" */
