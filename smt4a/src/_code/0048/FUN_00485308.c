/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485308` (_code @ 0x485308, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: FUN_00184c00. */
extern int FUN_00224880(unsigned int);
extern int FUN_0026272c(void);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002bf4f4. */
extern int FUN_00318dc4(void);
/* Supplied declaration required: FUN_004853fc. */


/* WARNING: Removing unreachable block (ram,0x00485420) */
/* WARNING: Removing unreachable block (ram,0x0048542c) */
/* WARNING: Removing unreachable block (ram,0x00485430) */
/* WARNING: Removing unreachable block (ram,0x00485438) */
/* WARNING: Removing unreachable block (ram,0x0048544c) */
/* WARNING: Removing unreachable block (ram,0x00485464) */
/* WARNING: Removing unreachable block (ram,0x00485468) */
/* WARNING: Removing unreachable block (ram,0x0048549c) */
/* WARNING: Removing unreachable block (ram,0x004854a0) */
/* WARNING: Removing unreachable block (ram,0x004854d8) */
/* WARNING: Removing unreachable block (ram,0x004854dc) */
/* WARNING: Removing unreachable block (ram,0x004854e0) */
/* WARNING: Removing unreachable block (ram,0x004854e4) */
/* WARNING: Removing unreachable block (ram,0x004854e8) */
/* WARNING: Removing unreachable block (ram,0x00485500) */

void FUN_00485308(int param_1)

{
/* irregular: 20 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(param_1 + 0x270) != '\0') {
    temp_v0 = FUN_00318dc4();
    if (temp_v0 != 0) {
      FUN_002bf4f4(0);
    }
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x26c));
    if (temp_v0 == 2) {
      temp_v0 = FUN_002a4b74();
      if (temp_v0 != 0) {
        if (*(char *)(param_1 + 0x261) == '\x04') {
          *(unsigned char *)(param_1 + 0x260) = 0;
          FUN_00184c00(param_1 + 0x3ac,0,1);
          FUN_00183e58();
          *(unsigned int *)(param_1 + 0xc) = 0;
          *(unsigned char *)(param_1 + 1) = 8;
          return;
        }
        *(unsigned int *)(param_1 + 0xb0) = *(unsigned int *)(param_1 + 0xc2);
        *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(param_1 + 0xc6);
        *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(param_1 + 0xca);
        *(unsigned int *)(param_1 + 0xbc) = *(unsigned int *)(param_1 + 0xce);
        *(unsigned short *)(param_1 + 0xc0) = *(unsigned short *)(param_1 + 0xd2);
      }
      FUN_004853fc(param_1,2);
      return;
    }
  }
  else {
    temp_v0 = FUN_0026272c();
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0x261) == '\x04') {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 3;
      }
      FUN_00275f44(*(unsigned int *)(param_1 + 0x26c),temp_v1);
      *(unsigned char *)(param_1 + 0x270) = 1;
    }
  }
  return;
}
