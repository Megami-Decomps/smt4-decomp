/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f424` (_code @ 0x36f424, 0x2a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobSetParent(...);
int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int jobGetStatus(...);
int sysMemClear(...);
int jobSetWork31(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int FUN_002ad130(...); /* 0x2ad130 */
extern int FUN_002ad180(...); /* 0x2ad180 */
extern unsigned char LAB_0035e438; /* 0x35e438 */
extern unsigned char LAB_0036f710; /* 0x36f710 */
extern unsigned char LAB_0036f720; /* 0x36f720 */
extern unsigned int *g_eventTex; /* 0x57f3b0 */

/* Supplied declaration required: jobSetParent. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: jobGetStatus. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: jobSetWork31. */


unsigned int FUN_0036f424(void)

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
  asdMemoryAllocTracked(0x100,0x100,0,0x98,1);
  sysMemClear();
  g_eventTex = puVar2;
  *(unsigned char *)(puVar2 + 0x23) = 1;
  puVar3 = &LAB_0036f710;
  asdProcessCreateSimple(&LAB_0036f710,4,0,0,FUN_002ad130,&LAB_0035e438,puVar2);
  *puVar2 = (unsigned int)puVar3;
  taskCreateDraw(&LAB_0036f720,0x81,0,0,FUN_002ad180,0,puVar2,puVar3);
  taskCreateDraw(&LAB_0036f720,0xdd,0,0,FUN_002ad180,0,puVar2,*puVar2);
  temp_v6 = 0;
LAB_0036f4fc:
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v6 * 4 + 0x5e1f3c));
  if (temp_v1 != 0) {
    jobSetWork31(*(unsigned int *)(temp_v6 * 4 + 0x5e1f3c),1);
    jobSetParent(*g_eventTex,*(unsigned int *)(temp_v6 * 4 + 0x5e1f3c));
    puVar2 = g_eventTex;
    temp_v5 = *(unsigned int *)(temp_v6 * 4 + 0x5e1f3c);
    temp_v1 = 0;
    if (0 < (int)g_eventTex[0x11]) {
      do {
        temp_v2 = jobIsValid(puVar2[temp_v1 + 1]);
        if (temp_v2 == 0) {
          puVar2[temp_v1 + 1] = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)puVar2[0x11]);
    }
    temp_v1 = 0;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        puVar2[temp_v1 + 1] = temp_v5;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x10);
    temp_v2 = -1;
    temp_v1 = 0;
    temp_v4 = 0x10;
    do {
      if (puVar2[temp_v1 + 1] == 0) {
        temp_v2 = temp_v1;
      }
      while( 1 ) {
        temp_v3 = temp_v1;
        temp_v4 = temp_v4 - 1;
        temp_v1 = temp_v3 + 1;
        if (temp_v4 == 0) {
          puVar2[0x11] = 0;
          goto LAB_0036f5f4;
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
  goto LAB_0036f694;
  while (temp_v1 = puVar2[0x11] + 1, puVar2[0x11] = temp_v1, temp_v1 < 0x10) {
LAB_0036f5f4:
    if (puVar2[puVar2[0x11] + 1] == 0) break;
  }
  do {
    temp_v0 = 0;
    temp_v1 = 0;
    if (puVar2[0x11] - 1 < 1) break;
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
    } while (temp_v1 < puVar2[0x11] - 1);
  } while (temp_v0);
LAB_0036f694:
  temp_v6 = temp_v6 + 1;
  if (temp_v6 >= 4) {
    return *g_eventTex;
  }
  goto LAB_0036f4fc;
}

} /* extern "C" */
