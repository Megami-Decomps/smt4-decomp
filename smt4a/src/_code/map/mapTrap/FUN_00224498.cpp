/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224498` (_code @ 0x224498, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_00224404(void);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, int);

extern unsigned char LAB_002245fc; /* 0x2245fc */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned int *g_mapTrap; /* 0x587f0c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00224404. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_00224498(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00224404();
  temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x210));
  puVar1 = g_mapTrap;
  g_mapTrap[2] = (*(int *)((unsigned char *)&g_gameState + 0x210));
  if (0 < temp_v0) {
    *(unsigned char *)(puVar1 + 4) = 0;
    temp_v0 = 0x20;
    FUN_00178b04(0x20,&LAB_002245fc,0x7e);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    puVar1[0xb] = temp_v1;
    FUN_0040aa6c();
    FUN_0040aad4(puVar1[0xb],0);
    temp_v0 = *(int *)(puVar1[0xb] + 4);
    FUN_0040ace8(g_handleRegistry,temp_v0);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    temp_v0 = 0x20;
    FUN_00178b04(0x20,&LAB_002245fc,0x87);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    puVar1[0xc] = temp_v1;
    FUN_0040aa6c();
    FUN_0040aad4(puVar1[0xc],0);
    temp_v0 = *(int *)(puVar1[0xc] + 4);
    FUN_0040ace8(g_handleRegistry,temp_v0);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
    *g_mapTrap = 1;
  }
  puVar1 = g_mapTrap;
  if ((param_1 == 0x1a) && (param_2 == 0xb || param_2 == 0xd)) {
    temp_v0 = 0x20;
    FUN_00178b04(0x20,&LAB_002245fc,0x99);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    puVar1[0xd] = temp_v1;
    FUN_0040aa6c();
    FUN_0040aad4(puVar1[0xd],0);
    temp_v0 = *(int *)(puVar1[0xd] + 4);
    FUN_0040ace8(g_handleRegistry,temp_v0);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 3;
  }
  return;
}

} /* extern "C" */
