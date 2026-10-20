/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f718` (_code @ 0x31f718, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int FUN_0026fd50(int, unsigned char [52], int, unsigned int);
int FUN_002cb55c(int, unsigned int, unsigned int);
int unitRecordBuild(unsigned int, unsigned char [52]);
int FUN_0034dae0(int, unsigned int);
int FUN_0036d318(void);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
} param_3_stack;

extern unsigned char g_gameGlobals; /* 0x588fd0 */

extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: dataTable00FindById. */
extern int FUN_002626e0(void);
/* Supplied declaration required: FUN_0026fd50. */
extern int FUN_002b4dcc(unsigned char *);
/* Supplied declaration required: FUN_002cb55c. */
/* Supplied declaration required: unitRecordBuild. */
/* Supplied declaration required: FUN_0034dae0. */
/* Supplied declaration required: FUN_0036d318. */


void FUN_0031f718(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [52];
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameGlobals + 0x4));
  temp_v4 = 1;
  *(unsigned char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2010) = 1;
  if ((int)param_1 < 0) {
    temp_v1 = gameGetPlayerData();
    FUN_002cb55c(temp_v0 + 0x1390,temp_v1,param_3);
    *(unsigned char *)(temp_v0 + 0x2017) = 0;
  }
  else if (param_2 != 0) {
    FUN_0036d318();
    *(unsigned char *)(temp_v0 + 0x2017) = 7;
    temp_v10 = temp_v0 + 0x1390;
    FUN_0026fd50(temp_v10,temp_v5,0,param_3);
    temp_v2 = param_1;
    dataTable00FindById();
    if (temp_v2 != 0) {
      *(unsigned int *)(temp_v0 + 0x1398) = *(unsigned int *)(temp_v2 + 4);
      *(unsigned int *)(temp_v0 + 0x139c) = *(unsigned int *)(temp_v2 + 8);
      temp_v3 = FUN_002b4dcc(temp_v5);
      *(int *)(temp_v0 + 0x13a0) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x13a4) = *(unsigned int *)(temp_v2 + 8);
      if (temp_v3 < 0) {
        *(unsigned int *)(temp_v0 + 0x13a0) = *(unsigned int *)(temp_v2 + 4);
      }
    }
    temp_v3 = FUN_002626e0();
    if (temp_v3 != 0) {
      *(unsigned char *)(temp_v0 + 0x2017) = 0x10;
      temp_v8 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v9 = 0;
      FUN_0034dae0(temp_v10,param_1);
    }
  }
  else {
    unitRecordBuild(param_1 & 0xffff,temp_v5);
    *(unsigned char *)(temp_v0 + 0x2017) = 1;
    FUN_0026fd50(temp_v0 + 0x1390,temp_v5,0,param_3);
  }
  *(unsigned char *)(temp_v0 + 0x20b0) = 1;
  if (-1 < (int)param_1) {
    param_1 = param_1 & 0xffff;
    dataTable00FindById();
    if (param_1 == 0) {
      temp_v4 = 0;
    }
    else {
      temp_v4 = (*(unsigned short *)(param_1 + 0x16) & 0x400) == 0;
      if (((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&g_gameGlobals + 0x4)) + 0x2017) == '\x11')) {
        temp_v4 = 0;
      }
    }
  }
  *(unsigned char *)(temp_v0 + 0x2032) = temp_v4;
  if ((!temp_v4) && (*(char *)(temp_v0 + 0x137d) != '\0')) {
    *(unsigned char *)(temp_v0 + 0x137d) = 0;
  }
  return;
}

} /* extern "C" */
