/* NON_MATCHING: romwright 0.5.0 decompilation of `MapDepart_Init` (_code @ 0x27ebfc, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int MapDepart_InitState(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_001e553c(...); /* 0x1e553c */
extern unsigned char LAB_0027edf0; /* 0x27edf0 */
extern unsigned char LAB_0027ee04; /* 0x27ee04 */
extern unsigned char LAB_0027ee18; /* 0x27ee18 */
extern unsigned char LAB_002ca084; /* 0x2ca084 */
extern int FUN_002ca09c(...); /* 0x2ca09c */
extern unsigned char LAB_002ca6a4; /* 0x2ca6a4 */
extern unsigned char LAB_002f4b2c; /* 0x2f4b2c */
extern unsigned char LAB_002f4b30; /* 0x2f4b30 */
extern unsigned int *DAT_004475b8; /* 0x4475b8 */
extern int DAT_0049f91c; /* 0x49f91c */

extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: MapDepart_InitState. */


void MapDepart_Init(int *param_1)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x80,1);
  DAT_004475b8 = puVar1;
  temp_v0 = FUN_002c2950();
  if (param_1 != (int *)0x0) {
    temp_v1 = *param_1;
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 != 2) goto LAB_0027ed24;
        MapDepart_InitState(puVar1,0);
        puVar1[3] = 2;
        puVar1[5] = param_1[2];
      }
      else {
        MapDepart_InitState(puVar1,0);
        puVar1[3] = 1;
        puVar1[5] = param_1[2];
      }
    }
    else {
      MapDepart_InitState(puVar1,1);
      puVar1[3] = 0;
      puVar1[4] = param_1[1];
      *(int *)(temp_v0 + 0x24) = param_1[1];
    }
    if (DAT_0049f91c >= 100) {
      puVar1[0x12] = param_1[4];
      puVar1[0x13] = param_1[5];
      puVar1[0x14] = param_1[6];
      puVar1[0x15] = param_1[7];
    }
  }
  else {
    MapDepart_InitState(puVar1,1);
  }
LAB_0027ed24:
  *(unsigned char *)(puVar1 + 2) = 0;
  puVar4 = &LAB_0027edf0;
  FUN_002c5788(&LAB_0027edf0,2,0,0,FUN_001e553c,&LAB_002ca084,0);
  *puVar1 = (unsigned int)puVar4;
  FUN_002c4a08(&LAB_0027ee04,0x6f,0,0,&LAB_002ca6a4,&LAB_002f4b30,0,puVar4);
  FUN_002c4a08(&LAB_0027ee18,0x73,0,0,FUN_002ca09c,&LAB_002f4b2c,0,*puVar1);
  return;
}

} /* extern "C" */
