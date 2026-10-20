#include "romwright_types.h"

extern "C" {

int FUN_0022838c(void);
int sysMemClear(int, int);
int FUN_0050d71c(unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char g_gameDataBlocks; /* 0x57f698 */

/* Supplied declaration required: FUN_0022838c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0050d71c. */


void FUN_00213b10(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  puVar2 = (unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x80);
  FUN_0050d71c(puVar2);
  *puVar2 = 2;
  puVar2[1] = 2;
  puVar2[2] = 2;
  puVar2[3] = 1;
  puVar2[4] = 1;
  FUN_0022838c();
  sysMemClear((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)),0x80);
  return;
}

} /* extern "C" */
