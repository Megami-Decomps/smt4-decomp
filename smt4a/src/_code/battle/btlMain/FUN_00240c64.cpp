/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240c64` (_code @ 0x240c64, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_0024d9c4(...);
int rt_memcpy(...);
int rt_memcpy_w(...);

/* stack frame of param_2: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_00240fc0; /* 0x240fc0 */
extern unsigned char LAB_00240fd0; /* 0x240fd0 */
extern unsigned char LAB_00240fe0; /* 0x240fe0 */
extern unsigned char LAB_00240ff0; /* 0x240ff0 */
extern unsigned char LAB_00240ffc; /* 0x240ffc */
extern unsigned char LAB_0024100c; /* 0x24100c */
extern int FUN_0024bcd4(...); /* 0x24bcd4 */
extern unsigned char LAB_0029853c; /* 0x29853c */
extern unsigned char LAB_00298544; /* 0x298544 */
extern unsigned char LAB_002def6c; /* 0x2def6c */
extern unsigned char LAB_002df4a8; /* 0x2df4a8 */
extern unsigned char LAB_002df4b0; /* 0x2df4b0 */
extern unsigned int *g_btlMain; /* 0x573920 */
extern unsigned int DAT_00573924; /* 0x573924 */
extern unsigned int DAT_00573928; /* 0x573928 */
extern unsigned int DAT_00573b08; /* 0x573b08 */
extern unsigned int DAT_00573b0c; /* 0x573b0c */
extern unsigned int DAT_00573b20; /* 0x573b20 */
extern unsigned int DAT_00573b24; /* 0x573b24 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned int gameGetSlotTable(void);
extern unsigned int flagValueGetStorage(void);
/* Supplied declaration required: FUN_0024d9c4. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00240c64(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  unsigned int temp_v6;
  unsigned char temp_v7;
  short temp_v8;
  short sStack_26;
  
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x4e68,1);
  temp_v1 = 0x100;
  g_btlMain = puVar2;
  asdMemoryAllocTracked(0x100,0x100,0,0x2d30,1);
  DAT_00573924 = temp_v1;
  temp_v1 = gameGetSlotTable();
  rt_memcpy_w(DAT_00573924,temp_v1,0x2d30);
  temp_v1 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x10b8,1);
  DAT_00573928 = temp_v1;
  temp_v1 = flagValueGetStorage();
  rt_memcpy(DAT_00573928,temp_v1,0x10b8);
  FUN_0024d9c4();
  temp_v5 = 0;
  if (param_1 != (unsigned int *)0x0) {
    temp_v5 = param_2;
  }
  if (!((param_1 == (unsigned int *)0x0 || param_2 == 0) || temp_v5 < 0)) {
    if (param_2 == 4) {
      puVar2[0x3b] = *param_1;
    }
    else if (param_2 == 0x16) {
      temp_v1 = param_1[1];
      temp_v2 = param_1[2];
      temp_v3 = param_1[3];
      temp_v4 = param_1[4];
      temp_v0 = *(short *)(param_1 + 5);
      temp_v7 = (char)*param_1 != '\0';
      temp_v5 = (int)(short)((unsigned int)*param_1 >> 0x10);
      if (temp_v7) {
        puVar2[0x3c] = temp_v5;
      }
      else {
        puVar2[0x3b] = temp_v5;
      }
      puVar2[0x5e] = (int)(short)temp_v1;
      puVar2[0x5f] = (int)(short)((unsigned int)temp_v1 >> 0x10);
      puVar2[0x60] = (int)(short)temp_v2;
      puVar2[0x61] = (int)(short)((unsigned int)temp_v2 >> 0x10);
      *(char *)(puVar2 + 0x62) = (char)temp_v3;
      if (temp_v7) {
        *(unsigned char *)(puVar2 + 0x62) = 0;
      }
      puVar2[99] = (int)(short)((unsigned int)temp_v3 >> 0x10);
      temp_v8 = (short)temp_v4;
      puVar2[100] = (int)temp_v8;
      sStack_26 = (short)((unsigned int)temp_v4 >> 0x10);
      puVar2[0x2b] = (int)sStack_26;
      puVar2[0x2c] = (int)temp_v0;
      if (sStack_26 == 2) {
        puVar2[0x2d] = 2;
      }
    }
  }
  else {
    if (g_btlMain != (unsigned int *)0x0) {
      g_btlMain[0x23] = 1;
    }
    temp_v6 = DAT_00573b08 | puVar2[0x116a] | DAT_00573b20;
    puVar2[0x116b] = puVar2[0x116b] | DAT_00573b0c | DAT_00573b24;
    puVar2[0x116a] = temp_v6;
  }
  temp_v6 = DAT_00573b20 | puVar2[0x116a];
  puVar2[0x116b] = puVar2[0x116b] | DAT_00573b24;
  puVar2[0x116a] = temp_v6;
  *(unsigned char *)(puVar2 + 0x21) = 0;
  puVar8 = &LAB_00240fc0;
  asdProcessCreateSimple(&LAB_00240fc0,4,0,0,FUN_0024bcd4,&LAB_002def6c,g_btlMain);
  *puVar2 = (unsigned int)puVar8;
  taskCreateDraw(&LAB_00240fd0,0x75,0,0,&LAB_0029853c,0,0,puVar8);
  taskCreateDraw(&LAB_00240fe0,0xea,0,0,&LAB_002df4a8,0,0,*puVar2);
  taskCreateDraw(&LAB_00240ff0,0x85,0,0,&LAB_00298544,0,0,*puVar2);
  taskCreateDraw(&LAB_00240ffc,0xe1,0,0,&LAB_00298544,0,0,*puVar2);
  taskCreateDraw(&LAB_0024100c,0xed,0,0,&LAB_002df4b0,0,0,*puVar2);
  return;
}

} /* extern "C" */
