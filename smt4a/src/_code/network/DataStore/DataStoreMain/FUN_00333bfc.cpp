/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333bfc` (_code @ 0x333bfc, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int FUN_00178b04(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_00227ee8(...); /* 0x227ee8 */
extern int FUN_002a38c0(...); /* 0x2a38c0 */
extern int FUN_002a38f4(...); /* 0x2a38f4 */
extern unsigned char LAB_002e50d0; /* 0x2e50d0 */
extern unsigned char LAB_00333d6c; /* 0x333d6c */
extern unsigned char LAB_00333d80; /* 0x333d80 */
extern unsigned char LAB_00333d98; /* 0x333d98 */
extern unsigned int *g_dataStore; /* 0x588120 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_002e9ff4(unsigned int *);


unsigned int FUN_00333bfc(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned char *puVar5;
  
  if (g_dataStore == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x10,1);
    puVar2 = (unsigned int *)0x54;
    g_dataStore = puVar1;
    FUN_00178b04(0x54,"c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\DataStore\\DataStoreMain.cpp",
                 0x47f);
    temp_v1 = 0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(unsigned char *)(puVar2 + 3) = 0;
      *(unsigned char *)((int)puVar2 + 0xd) = 0;
      *(unsigned char *)((int)puVar2 + 0xe) = 0;
      puVar2[4] = 0;
      *(unsigned char *)(puVar2 + 5) = 0;
      puVar2[6] = 0xe7e3ffff;
      temp_v0 = FUN_002e9ff4(puVar2 + 7);
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      temp_v1 = temp_v0 - 0x1c;
      *(unsigned int *)(temp_v0 + 0x14) = 0;
      *(unsigned int *)(temp_v0 + 0x18) = 0;
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
      *(unsigned int *)(temp_v0 + 0x20) = 0;
      *(unsigned int *)(temp_v0 + 0x24) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x2c) = 0;
      *(unsigned int *)(temp_v0 + 0x30) = 0;
      *(unsigned int *)(temp_v0 + 0x34) = 0;
    }
    puVar1 = g_dataStore;
    g_dataStore[3] = temp_v1;
    puVar5 = &LAB_00333d6c;
    asdProcessCreateSimple(&LAB_00333d6c,2,0,0,FUN_00227ee8,&LAB_002e50d0,puVar1);
    puVar1 = g_dataStore;
    *g_dataStore = (unsigned int)puVar5;
    taskCreateDraw(&LAB_00333d80,3,0,0,FUN_002a38f4,0,puVar1,puVar5);
    taskCreateDraw(&LAB_00333d98,5,0,0,FUN_002a38c0,0,g_dataStore,*g_dataStore);
  }
  return *g_dataStore;
}

} /* extern "C" */
