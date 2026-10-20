/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034280c` (_code @ 0x34280c, 0x610 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_00151408(...);
int taskCreateDraw(...);
int FUN_001527d8(...);
int asdMemoryAllocTracked(int, int, int, int, int);
int sysPlaySe(...);
int FUN_00182054(void);
int FUN_001ab854(...);
int FUN_002804b0(...);
int sysMemClear(void);
int FUN_002e6dd0(...);
int FUN_0039a3b4(...);
int FUN_003a4980(void);
int campCecDrawPageCreate(void);
int rt_memcpy_w(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0025d44c; /* 0x25d44c */
extern unsigned char LAB_0025d4a0; /* 0x25d4a0 */
extern unsigned char LAB_002a27e4; /* 0x2a27e4 */
extern int FUN_002e1d1c(...); /* 0x2e1d1c */
extern unsigned char LAB_00318e7c; /* 0x318e7c */
extern int FUN_00318e84(...); /* 0x318e84 */
extern unsigned char LAB_00342c14; /* 0x342c14 */
extern unsigned char LAB_00342c2c; /* 0x342c2c */
extern unsigned char LAB_00342c48; /* 0x342c48 */
extern unsigned char LAB_00342c68; /* 0x342c68 */
extern unsigned char LAB_00342c80; /* 0x342c80 */
extern unsigned char LAB_00342c9c; /* 0x342c9c */
extern unsigned char LAB_00342cdc; /* 0x342cdc */
extern unsigned char LAB_00342cf0; /* 0x342cf0 */
extern unsigned char LAB_00342d08; /* 0x342d08 */
extern unsigned char LAB_00342e24; /* 0x342e24 */
extern int FUN_00359dc4(...); /* 0x359dc4 */
extern int FUN_0036ce70(...); /* 0x36ce70 */
extern int FUN_00387bb8(...); /* 0x387bb8 */
extern int FUN_00387d38(...); /* 0x387d38 */
extern int FUN_003aef48(...); /* 0x3aef48 */
extern int stepObjStart(...); /* 0x3bfc90 */
extern int stepObjBStart(...); /* 0x3cc670 */
extern unsigned int *DAT_0057f118; /* 0x57f118 */

extern int FUN_0014af84(void);
extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysPlaySe. */
extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_00182054. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_002bf520(void);
extern unsigned int FUN_002e264c(unsigned int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002e6dd0. */
extern unsigned int overlayGetStatusScene(void);
/* Supplied declaration required: FUN_0039a3b4. */
/* Supplied declaration required: FUN_003a4980. */
/* Supplied declaration required: campCecDrawPageCreate. */
extern int bitsAt60Test(unsigned int, unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0034280c(unsigned char param_1)

{
/* irregular: 24 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  if (DAT_0057f118 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x198,1);
    DAT_0057f118 = puVar3;
  }
  puVar3 = DAT_0057f118;
  sysMemClear();
  puVar4 = &LAB_00342c14;
  asdProcessCreateSimple(&LAB_00342c14,3,0,0,&LAB_0025d4a0,0,0);
  *puVar3 = (unsigned int)puVar4;
  taskCreateDraw(&LAB_00342c2c,0x65,0,0,&LAB_002a27e4,0,0,puVar4);
  taskCreateDraw(&LAB_00342c48,0xcc,0,0,&LAB_002a27e4,0,0,*puVar3);
  taskCreateDraw(&LAB_00342c68,0x81,0,0,&LAB_0025d44c,0,0,*puVar3);
  taskCreateDraw(&LAB_00342c80,0xdd,0,0,&LAB_0025d44c,0,0,*puVar3);
  taskCreateDraw(&LAB_00342c9c,0xea,0,0,FUN_002e1d1c,0,0,*puVar3);
  puVar3[0x3e] = 0xffffffff;
  puVar3[0x3c] = 0xffffffff;
  puVar3[0x3d] = 0;
  puVar3[0x3f] = 0xffffffff;
  puVar3[0x3a] = 0xffffffff;
  puVar3[0x3b] = 0;
  *(unsigned char *)((int)puVar3 + 0x112) = 1;
  puVar3[0x40] = 0;
  *(unsigned char *)((int)puVar3 + 0x113) = param_1;
  *(unsigned char *)(puVar3 + 0x45) = 0;
  puVar3[0x46] = 0;
  puVar3[0x48] = 0;
  puVar3[0x49] = 0x20;
  puVar3[0x4a] = 0;
  *(unsigned char *)((int)puVar3 + 0x12d) = 0;
  puVar3[0x4c] = 0xffffffc8;
  puVar3[0x4d] = 0;
  puVar3[0x4f] = 0;
  puVar3[0x50] = 0;
  puVar3[0x52] = 0xffffffff;
  puVar3[0x51] = 0;
  puVar3[0x54] = 0;
  *(unsigned char *)(puVar3 + 0x55) = 1;
  puVar3[99] = 0;
  *(unsigned char *)((int)puVar3 + 0x189) = 0;
  temp_v2 = FUN_0014af84();
  temp_v1 = *(unsigned short *)(temp_v2 + 0x27e0c);
  *(unsigned short *)(puVar3 + 0x42) = temp_v1;
  *(unsigned short *)((int)puVar3 + 0x10a) = temp_v1;
  *(unsigned char *)((int)puVar3 + 0x10d) = *(unsigned char *)(temp_v2 + 0x27e0e);
  puVar3[0x18] = (unsigned int)FUN_00359dc4;
  puVar3[0x1a] = (unsigned int)&LAB_00342e24;
  puVar3[0x19] = (unsigned int)FUN_00318e84;
  puVar3[0x1b] = (unsigned int)FUN_00387d38;
  puVar3[0x1c] = (unsigned int)FUN_00387bb8;
  puVar3[0x1d] = (unsigned int)FUN_0036ce70;
  puVar3[0x21] = (unsigned int)&LAB_00318e7c;
  puVar3[0x1e] = (unsigned int)FUN_003aef48;
  puVar3[0x1f] = (unsigned int)stepObjStart;
  puVar3[0x20] = (unsigned int)stepObjBStart;
  puVar3[0x23] = 5;
  puVar3[0x24] = 6;
  puVar3[0x25] = 0x17;
  puVar3[0x26] = 8;
  puVar3[0x27] = 9;
  puVar3[0x28] = 0xc;
  puVar3[0x29] = 10;
  puVar3[0x2a] = 0xd;
  puVar3[0x2b] = 0xe;
  puVar3[0x2c] = 0xf;
  puVar3[0x2d] = 0x10;
  puVar3[0x2e] = 0x11;
  puVar3[0x2f] = 0x12;
  puVar3[0x30] = 0x13;
  puVar3[0x31] = 0x14;
  puVar3[0x32] = 0x15;
  puVar3[0x33] = 0x16;
  puVar3[0x34] = 0x18;
  puVar3[0x35] = 0x19;
  puVar3[0x36] = 0x1a;
  puVar3[0x22] = 0;
  puVar3[0x37] = 2;
  puVar3[0x38] = 3;
  puVar3[0x39] = 4;
  temp_v3 = overlayGetStatusScene();
  puVar3[1] = temp_v3;
  temp_v3 = FUN_002bf520();
  puVar3[2] = temp_v3;
  temp_v3 = FUN_001801a4();
  rt_memcpy_w(puVar3 + 0x5b,temp_v3,0xe);
  temp_v3 = FUN_001801a4();
  rt_memcpy_w(temp_v3,puVar3[2],0xe);
  puVar7 = (unsigned int *)puVar3[2];
  *(unsigned int *)((int)puVar3 + 0x17a) = *puVar7;
  *(unsigned int *)((int)puVar3 + 0x17e) = puVar7[1];
  *(unsigned int *)((int)puVar3 + 0x182) = puVar7[2];
  *(unsigned short *)((int)puVar3 + 0x186) = *(unsigned short *)(puVar7 + 3);
  temp_v3 = FUN_002e264c(puVar3[2]);
  campCecDrawPageCreate();
  puVar3[3] = temp_v3;
  FUN_003a4980();
  FUN_002804b0(&LAB_00342cdc,puVar3 + 0x14,0);
  FUN_002804b0(&LAB_00342cf0,puVar3 + 0x15,0);
  FUN_002804b0(&LAB_00342d08,puVar3 + 0x16,0);
  temp_v0 = *(unsigned char *)(puVar3[2] + 0x22);
  temp_v4 = (unsigned int)temp_v0;
  FUN_00182054();
  if (temp_v4 == 0) {
    FUN_0039a3b4(puVar3[3],(unsigned int)temp_v0);
  }
  temp_v3 = spriteHandleCreate(0);
  puVar3[0x17] = temp_v3;
  FUN_001527d8(temp_v3,0xffffffff);
  FUN_00151408(puVar3[0x17],0,0x646464ff);
  sysPlaySe(0xb3);
  temp_v2 = 0;
  do {
    FUN_002e6dd0(puVar3 + temp_v2 * 5 + 4,0x14);
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  FUN_002e6dd0(puVar3 + 0xe,0x14);
  puVar3[0xf] = 0x1e;
  *(unsigned char *)(puVar3 + 0x65) = 0;
  temp_v2 = FUN_001ab888();
  temp_v6 = 0;
  puVar3[0x41] = 0;
  do {
    if (-1 < *(char *)(temp_v2 + temp_v6 + 0x1c88)) {
      temp_v3 = FUN_001ab854();
      temp_v5 = bitsAt60Test(temp_v3,10);
      if (temp_v5 == 0) {
        temp_v3 = FUN_001ab854((int)*(char *)(temp_v2 + temp_v6 + 0x1c88));
        temp_v5 = bitsAt60Test(temp_v3,1);
        if (temp_v5 == 0) {
          puVar3[0x41] = puVar3[0x41] + 1;
        }
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x18);
  return;
}

} /* extern "C" */
