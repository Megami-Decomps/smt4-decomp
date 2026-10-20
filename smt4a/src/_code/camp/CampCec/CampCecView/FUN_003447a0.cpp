/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003447a0` (_code @ 0x3447a0, 0x324 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_001681cc(...);
int FUN_00182054(...);
int FUN_002804b0(...);
int FUN_002e6354(...);
int FUN_002e6dd0(...);
int FUN_00319aec(...);
int FUN_00330a80(...);
int FUN_0036d4b0(...);
int FUN_0037b5e0(...);
int FUN_0039a0cc(...);
int FUN_0039a3b4(...);
int FUN_003a4980(...);
int FUN_003b5e8c(...);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0025d62c; /* 0x25d62c */
extern int FUN_0025d6a0(...); /* 0x25d6a0 */
extern unsigned char LAB_002a2c78; /* 0x2a2c78 */
extern int FUN_002e241c(...); /* 0x2e241c */
extern unsigned char LAB_00344b08; /* 0x344b08 */
extern unsigned char LAB_00344b20; /* 0x344b20 */
extern unsigned char LAB_00344b3c; /* 0x344b3c */
extern unsigned char LAB_00344b5c; /* 0x344b5c */
extern unsigned char LAB_00344b74; /* 0x344b74 */
extern unsigned char LAB_00344b90; /* 0x344b90 */
extern unsigned char LAB_00344ba8; /* 0x344ba8 */
extern unsigned int *DAT_0057f130; /* 0x57f130 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00182054. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd0. */
extern unsigned int FUN_003192e0(void);
/* Supplied declaration required: FUN_00319aec. */
/* Supplied declaration required: FUN_00330a80. */
extern int FUN_0035a978(void);
/* Supplied declaration required: FUN_0036d4b0. */
/* Supplied declaration required: FUN_0037b5e0. */
/* Supplied declaration required: FUN_0039a0cc. */
/* Supplied declaration required: FUN_0039a3b4. */
/* Supplied declaration required: FUN_003a4980. */
/* Supplied declaration required: FUN_003b5e8c. */


void FUN_003447a0(void)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  if (DAT_0057f130 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x14c,1);
    DAT_0057f130 = puVar3;
  }
  puVar3 = DAT_0057f130;
  FUN_002e6354();
  puVar4 = &LAB_00344b08;
  FUN_0014e38c(&LAB_00344b08,3,0,0,FUN_0025d6a0,0,0);
  *puVar3 = (unsigned int)puVar4;
  FUN_0015155c(&LAB_00344b20,0x65,0,0,&LAB_002a2c78,0,0,puVar4);
  FUN_0015155c(&LAB_00344b3c,0xcc,0,0,&LAB_002a2c78,0,0,*puVar3);
  FUN_0015155c(&LAB_00344b5c,0x86,0,0,&LAB_0025d62c,0,0,*puVar3);
  FUN_0015155c(&LAB_00344b74,0xe2,0,0,&LAB_0025d62c,0,0,*puVar3);
  FUN_0015155c(&LAB_00344b90,0xea,0,0,FUN_002e241c,0,0,*puVar3);
  puVar3[0x45] = 0;
  puVar3[0x46] = 0;
  puVar3[0x47] = 0;
  puVar3[0x48] = 0;
  puVar3[0x4a] = 0;
  *(unsigned char *)(puVar3 + 0x4f) = 0;
  *(unsigned char *)((int)puVar3 + 0x13d) = 0;
  puVar3[0x50] = 0;
  puVar3[0x52] = 0;
  temp_v4 = 0x1f;
  do {
    FUN_00330a80(temp_v4);
    temp_v1 = FUN_0035a978();
    if (temp_v1 != 0) {
      FUN_0036d4b0(temp_v4);
    }
    temp_v4 = temp_v4 - 1;
  } while (-1 < temp_v4);
  temp_v4 = 0;
  do {
    temp_v1 = FUN_00330a80(temp_v4);
    if (*(short *)(temp_v1 + 0x60) != 0) {
      puVar3[0x48] = puVar3[0x48] + 1;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x20);
  FUN_002804b0(&LAB_00344ba8,puVar3 + 0x4e,0);
  temp_v2 = FUN_003192e0();
  puVar3[2] = temp_v2;
  temp_v1 = FUN_00330a80(puVar3[0x45]);
  puVar3[3] = temp_v1;
  *(unsigned short *)(temp_v1 + 0x34) = *(unsigned short *)(temp_v1 + 0x60);
  temp_v4 = 0;
  do {
    FUN_0039a0cc();
    temp_v5 = temp_v4 + 1;
    puVar3[temp_v4 + 0x41] = temp_v1;
    temp_v4 = temp_v5;
  } while (temp_v5 < 3);
  FUN_003b5e8c();
  puVar3[0x44] = temp_v1;
  puVar2 = DAT_0057f130;
  temp_v4 = 0;
  do {
    temp_v1 = FUN_00330a80(puVar2[0x46] + temp_v4);
    if (*(short *)(temp_v1 + 0x60) != 0) {
      FUN_0037b5e0(puVar2[temp_v4 + 0x41],temp_v1);
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 3);
  temp_v4 = FUN_00330a80(puVar2[0x45]);
  puVar2[3] = temp_v4;
  *(unsigned short *)(temp_v4 + 0x34) = *(unsigned short *)(temp_v4 + 0x60);
  puVar3[0x51] = 1;
  FUN_003a4980(puVar3[0x44],puVar3[3],0);
  temp_v4 = FUN_00330a80(0);
  temp_v0 = *(unsigned char *)(temp_v4 + 0x22);
  temp_v3 = (unsigned int)temp_v0;
  FUN_00182054();
  if (temp_v3 == 0) {
    FUN_0039a3b4(puVar3[0x44],(unsigned int)temp_v0);
  }
  temp_v4 = 0;
  do {
    FUN_002e6dd0(puVar3 + temp_v4 * 5 + 0x1e,0x14);
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  temp_v4 = 0;
  do {
    FUN_002e6dd0(puVar3 + temp_v4 * 5 + 0x28,0x14);
    temp_v1 = temp_v4 + 1;
    puVar3[temp_v4 * 5 + 0x29] = 0x14a;
    temp_v4 = temp_v1;
  } while (temp_v1 < 5);
  FUN_001681cc(0xb4);
  FUN_00319aec(0);
  return;
}

} /* extern "C" */
