/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d747c` (_code @ 0x2d747c, 0x2f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026eda8(...);
int FUN_0026ee14(...);
int FUN_0026ef04(unsigned int);
int FUN_0026efec(...);
int FUN_0026f204(unsigned int, unsigned int, unsigned int);
int FUN_0026f784(void);
int FUN_0026f800(...);
int FUN_00297468(unsigned char *, unsigned int *, int);
int FUN_002b8838(...);
int FUN_002c3940(...);
int FUN_002c4938(void);
int FUN_002c498c(int, int, int, int);
int FUN_002c4a08(unsigned char *, int, int);
int FUN_002c5788(unsigned char *, int, int, int);
int FUN_00309df4(void);
int FUN_0030a84c(...);
int FUN_0031b860(void);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern unsigned char LAB_001c0fb0; /* 0x1c0fb0 */
extern int FUN_001c1014(...); /* 0x1c1014 */
extern unsigned char LAB_001ec9ac; /* 0x1ec9ac */
extern int FUN_00211580(...); /* 0x211580 */
extern unsigned char LAB_002d77ac; /* 0x2d77ac */
extern unsigned char LAB_002d77c4; /* 0x2d77c4 */
extern unsigned char LAB_002d77e0; /* 0x2d77e0 */
extern unsigned char LAB_002d7800; /* 0x2d7800 */
extern unsigned char LAB_002d7818; /* 0x2d7818 */
extern unsigned char LAB_002d7834; /* 0x2d7834 */
extern unsigned char LAB_002d784c; /* 0x2d784c */
extern unsigned int *DAT_0043db10; /* 0x43db10 */

extern unsigned int FUN_0024aaa0(void);
/* Supplied declaration required: FUN_0026eda8. */
/* Supplied declaration required: FUN_0026ee14. */
/* Supplied declaration required: FUN_0026ef04. */
/* Supplied declaration required: FUN_0026efec. */
/* Supplied declaration required: FUN_0026f204. */
/* Supplied declaration required: FUN_0026f784. */
/* Supplied declaration required: FUN_0026f800. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002c3940. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_00309df4. */
/* Supplied declaration required: FUN_0030a84c. */
/* Supplied declaration required: FUN_0031b860. */


void FUN_002d747c(void)

{
/* irregular: 21 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  romwright_code *temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char *temp_v8;
  
  if (DAT_0043db10 == (unsigned int *)0x0) {
    temp_v5 = (romwright_code *)0x1;
    puVar2 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x16c);
    DAT_0043db10 = puVar2;
  }
  puVar2 = DAT_0043db10;
  FUN_002c4938();
  temp_v4 = 0;
  temp_v5 = FUN_001c1014;
  temp_v6 = 0;
  puVar3 = &LAB_002d77ac;
  temp_v7 = 0;
  FUN_002c5788(&LAB_002d77ac,1,0,0);
  *puVar2 = (unsigned int)puVar3;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001ec9ac;
  temp_v7 = 0;
  temp_v8 = puVar3;
  FUN_002c4a08(&LAB_002d77c4,0x65,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001ec9ac;
  temp_v7 = 0;
  FUN_002c4a08(&LAB_002d77e0,0xcc,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001c0fb0;
  temp_v7 = 0;
  FUN_002c4a08(&LAB_002d7800,0x81,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v6 = 0;
  temp_v5 = (romwright_code *)&LAB_001c0fb0;
  temp_v7 = 0;
  FUN_002c4a08(&LAB_002d7818,0xdf,0);
  temp_v8 = (unsigned char *)*puVar2;
  temp_v5 = FUN_00211580;
  temp_v6 = 0;
  temp_v7 = 0;
  FUN_002c4a08(&LAB_002d7834,0xe6,0);
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0;
  puVar2[0x51] = 0;
  puVar2[0x52] = 0;
  puVar2[0x54] = 0;
  *(unsigned char *)(puVar2 + 0x59) = 0;
  *(unsigned char *)((int)puVar2 + 0x165) = 0;
  puVar2[0x5a] = 0;
  do {
    temp_v0 = FUN_0026efec(temp_v4);
    if (*(short *)(temp_v0 + 0x48) != 0) {
      puVar2[0x52] = puVar2[0x52] + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  FUN_00297468(&LAB_002d784c,puVar2 + 0x58,0);
  temp_v1 = FUN_0024aaa0();
  puVar2[2] = temp_v1;
  temp_v1 = FUN_0026efec(puVar2[0x4f]);
  puVar2[3] = temp_v1;
  temp_v4 = 0;
  do {
    FUN_00309df4();
    temp_v0 = temp_v4 + 1;
    puVar2[temp_v4 + 0x4b] = temp_v1;
    temp_v4 = temp_v0;
  } while (temp_v0 < 3);
  FUN_0031b860();
  puVar2[0x4e] = temp_v1;
  puVar1 = DAT_0043db10;
  temp_v0 = 0;
  temp_v4 = temp_v2;
  do {
    temp_v4 = FUN_0026efec(puVar1[0x50] + temp_v0,temp_v4);
    if (*(short *)(temp_v4 + 0x48) != 0) {
      FUN_0026ef04(puVar1[temp_v0 + 0x4b]);
      temp_v4 = temp_v3;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v1 = FUN_0026efec(puVar1[0x4f],temp_v4);
  puVar1[3] = temp_v1;
  puVar1 = DAT_0043db10;
  FUN_0026f204(DAT_0043db10[0x4e],DAT_0043db10[3],DAT_0043db10[0x58]);
  FUN_0030a84c(puVar1[3],&temp_v5);
  temp_v4 = puVar1[2];
  FUN_0026f784();
  if (temp_v4 != 0) {
    FUN_0026ee14(puVar1[2],&temp_v5);
    FUN_0026eda8(puVar1[2]);
    FUN_0026f800(puVar1[2],0);
    puVar1[0x53] = puVar1[0x4f];
  }
  temp_v4 = 0;
  do {
    FUN_002c3940(puVar2 + temp_v4 * 5 + 0x28,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  temp_v4 = 0;
  do {
    FUN_002c3940(puVar2 + temp_v4 * 5 + 0x32,0x14);
    temp_v0 = temp_v4 + 1;
    puVar2[temp_v4 * 5 + 0x33] = 0x14a;
    temp_v4 = temp_v0;
  } while (temp_v0 < 5);
  FUN_002b8838(0xb2);
  return;
}

} /* extern "C" */
