#include "romwright_types.h"

extern "C" {

int FUN_001a1110(void);
int FUN_00291050(unsigned char *);
int memClear(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

/* Supplied declaration required: FUN_001a1110. */
/* Supplied declaration required: FUN_00291050. */
/* Supplied declaration required: memClear. */


void FUN_00193be8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  puVar2 = (unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x80);
  FUN_00291050(puVar2);
  *puVar2 = 2;
  puVar2[1] = 2;
  puVar2[2] = 2;
  puVar2[3] = 1;
  puVar2[4] = 1;
  FUN_001a1110();
  memClear((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)),0x80);
  return;
}

} /* extern "C" */
