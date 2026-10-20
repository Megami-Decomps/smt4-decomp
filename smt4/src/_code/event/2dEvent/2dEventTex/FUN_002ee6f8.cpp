/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee6f8` (_code @ 0x2ee6f8, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e68c(...);
int jobGetStatus(...);
int jobSetParent(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_001f4264(...); /* 0x1f4264 */
extern int FUN_001f42d4(...); /* 0x1f42d4 */
extern unsigned char LAB_002e36d8; /* 0x2e36d8 */
extern unsigned char LAB_002ee9e0; /* 0x2ee9e0 */
extern unsigned char LAB_002ee9f0; /* 0x2ee9f0 */
extern unsigned int *g_eventTex; /* 0x43ded0 */

/* Supplied declaration required: FUN_0026e68c. */
/* Supplied declaration required: jobGetStatus. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobSetParent. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */


unsigned int FUN_002ee6f8(void)

{
/* irregular: 3 goto(s); 9 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if (g_eventTex != (unsigned int *)0x0) {
    return *g_eventTex;
  }
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x68,1);
  memClear();
  g_eventTex = puVar2;
  *(unsigned char *)(puVar2 + 0x17) = 1;
  puVar3 = &LAB_002ee9e0;
  asdProcessCreateSimple(&LAB_002ee9e0,2,0,0,FUN_001f4264,&LAB_002e36d8,puVar2);
  *puVar2 = (unsigned int)puVar3;
  taskCreateDraw(&LAB_002ee9f0,0x7d,0,0,FUN_001f42d4,0,puVar2,puVar3);
  taskCreateDraw(&LAB_002ee9f0,0xdb,0,0,FUN_001f42d4,0,puVar2,*puVar2);
  temp_v6 = 0;
LAB_002ee7d0:
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v6 * 4 + 0x493790));
  if (temp_v1 != 0) {
    FUN_0026e68c(*(unsigned int *)(temp_v6 * 4 + 0x493790),1);
    jobSetParent(*g_eventTex,*(unsigned int *)(temp_v6 * 4 + 0x493790));
    puVar2 = g_eventTex;
    temp_v5 = *(unsigned int *)(temp_v6 * 4 + 0x493790);
    temp_v1 = 0;
    if (0 < (int)g_eventTex[0xb]) {
      do {
        temp_v2 = jobIsValid(puVar2[temp_v1 + 1]);
        if (temp_v2 == 0) {
          puVar2[temp_v1 + 1] = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)puVar2[0xb]);
    }
    temp_v1 = 0;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        puVar2[temp_v1 + 1] = temp_v5;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
    temp_v2 = -1;
    temp_v1 = 0;
    temp_v4 = 10;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        temp_v2 = temp_v1;
      }
      while( 1 ) {
        temp_v3 = temp_v1;
        temp_v4 = temp_v4 - 1;
        temp_v1 = temp_v3 + 1;
        if (temp_v4 == 0) {
          puVar2[0xb] = 0;
          goto LAB_002ee8c8;
        }
        if (temp_v2 < 0) break;
        if (puVar2[temp_v3 + 2] != 0) {
          puVar2[temp_v2 + 1] = puVar2[temp_v3 + 2];
          puVar2[temp_v3 + 2] = 0;
          temp_v2 = temp_v1;
        }
      }
    } while( 1 );
  }
  goto LAB_002ee968;
  while (temp_v1 = puVar2[0xb] + 1, puVar2[0xb] = temp_v1, temp_v1 < 10) {
LAB_002ee8c8:
    if (puVar2[puVar2[0xb] + 1] == 0) break;
  }
  do {
    temp_v0 = 0;
    temp_v1 = 0;
    if (puVar2[0xb] - 1 < 1) break;
    do {
      if (puVar2[temp_v1 + 1] != 0) {
        if (puVar2[temp_v1 + 2] != 0) {
          temp_v2 = jobGetStatus();
          temp_v4 = jobGetStatus(puVar2[temp_v1 + 2]);
          if (temp_v4 < temp_v2) {
            temp_v5 = puVar2[temp_v1 + 1];
            temp_v0 = 1;
            puVar2[temp_v1 + 1] = puVar2[temp_v1 + 2];
            puVar2[temp_v1 + 2] = temp_v5;
          }
        }
      }
      else if (puVar2[temp_v1 + 2] != 0) {
        temp_v0 = 1;
        puVar2[temp_v1 + 1] = puVar2[temp_v1 + 2];
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < puVar2[0xb] - 1);
  } while (temp_v0);
LAB_002ee968:
  temp_v6 = temp_v6 + 1;
  if (temp_v6 >= 4) {
    return *g_eventTex;
  }
  goto LAB_002ee7d0;
}

} /* extern "C" */
