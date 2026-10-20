/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002242a0` (_code @ 0x2242a0, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int linkHolderSetFlag(unsigned int);
int FUN_004ffb30(unsigned int);

extern int g_lmapScene; /* 0x581288 */
extern unsigned int *g_mapTrap; /* 0x587f0c */

/* Supplied declaration required: linkHolderSetFlag. */
/* Supplied declaration required: FUN_004ffb30. */


unsigned int FUN_002242a0(void)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int in_s0;
  
  puVar1 = g_mapTrap;
  temp_v0 = *g_mapTrap;
  if (temp_v0 >= 2) {
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v0 = g_mapTrap[1];
        puVar1 = g_mapTrap + 4;
        g_mapTrap[1] = temp_v0 + 1;
        if ((int)(temp_v0 + 1) >= 0x1f) {
          *(unsigned char *)puVar1 = 0;
          puVar1 = g_mapTrap;
          *g_mapTrap = 1;
          puVar1[1] = 0;
        }
      }
    }
    else {
      temp_v0 = g_mapTrap[1];
      g_mapTrap[1] = temp_v0 + 1;
      if (temp_v0 + 1 == 0x28) {
        puVar1[9] = 1;
        *(unsigned char *)(puVar1 + 10) = 1;
      }
      if ((char)puVar1[3] != '\0') {
        if ((char)puVar1[0x1b] != '\0') {
          puVar1[9] = 3;
        }
        else {
          puVar1[9] = 2;
        }
        *(unsigned char *)(puVar1 + 10) = 1;
        *puVar1 = 3;
        puVar1[1] = 0;
      }
    }
  }
  puVar1 = g_mapTrap;
  temp_v0 = g_mapTrap[0x19];
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          *(unsigned int *)(*(int *)(g_mapTrap[0xd] + 4) + 4) =
               *(unsigned int *)(*(int *)(g_mapTrap[0xd] + 4) + 4) | 3;
          puVar1[0x19] = 0;
          puVar1[0x1a] = 0;
        }
      }
      else {
        FUN_004ffb30(*(unsigned int *)(g_mapTrap[0xd] + 4));
        if (in_s0 >= 0x43070000) {
          linkHolderSetFlag(*(unsigned int *)(g_lmapScene + 0x1a8));
        }
      }
    }
    else {
      *(unsigned int *)(*(int *)(g_mapTrap[0xd] + 4) + 4) =
           *(unsigned int *)(*(int *)(g_mapTrap[0xd] + 4) + 4) & 0xfffffffc;
      puVar1[0x19] = 2;
      puVar1[0x1a] = 0;
    }
  }
  return 0;
}

} /* extern "C" */
