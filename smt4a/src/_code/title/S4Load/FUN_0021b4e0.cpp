/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021b4e0` (_code @ 0x21b4e0, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextDrawDirectoryEntry(...);
int FUN_002e59f8(int, char *, int);
int rt_aeabi_memclr(unsigned char [512], int);
int FUN_003180c4(...);
int FUN_00359974(...);
int builtin_strncpy(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp254; /* 0x254: local_254 */
    unsigned int sp258; /* 0x258: local_258 */
} param_1_stack;

extern unsigned char LAB_0021b6e8; /* 0x21b6e8 */
extern int g_s4Load; /* 0x589154 */

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: rt_aeabi_memclr. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


void FUN_0021b4e0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [512];
  char temp_v6 [40];
  
  temp_v1 = g_s4Load;
  rt_aeabi_memclr(temp_v5,0x200);
  if ((temp_v1 != 0) && (-1 < param_1)) {
    if (param_1 == 0) {
      FUN_00359974(0,1);
    }
    else {
      FUN_00359974(0,2);
    }
    if (*(char *)(temp_v1 + param_1 + 0xa4) == '\0') {
      asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v1 + 0x2b8),4,0xffffffff,0,3,*(unsigned int *)(temp_v1 + 0x2ac),
                   0x65);
      return;
    }
    temp_v3 = temp_v1 + param_1 * 0x80;
    FUN_002e59f8(temp_v3 + 700,temp_v6 + 0x10,0x12);
    FUN_003180c4(1,temp_v6 + 0x10);
    FUN_00359974(2,*(unsigned char *)(temp_v3 + 0x308),0xffffffff,0);
    temp_v2 = *(unsigned int *)(temp_v3 + 0x30c);
    FUN_00359974(3,temp_v2 / 0xe10,2,1);
    FUN_00359974(4,(temp_v2 / 0x3c) % 0x3c,2,1);
    FUN_00359974(5,temp_v2 % 0x3c,2,1);
    FUN_00359974(6,*(unsigned short *)(temp_v3 + 0x322),0xffffffff,0);
    temp_v4 = 0;
    temp_v6[0xc] = -0x73;
    temp_v6[0xd] = '\x1c';
    temp_v6[0xe] = 'V';
    temp_v6[0xf] = '\0';
    builtin_strncpy(temp_v6,"K\x1cV",4);
    builtin_strncpy(temp_v6 + 4,"$\x1cV",4);
    builtin_strncpy(temp_v6 + 8,"n\x1cV",4);
    temp_v0 = *(unsigned char *)(temp_v3 + 0x309);
    temp_v2 = 0;
    do {
      if (((unsigned int)temp_v0 & (1 << (temp_v2 & 0xff))) != 0) {
        FUN_003180c4(temp_v4 + 7,*(unsigned int *)(temp_v6 + temp_v2 * 4));
        temp_v4 = temp_v4 + 1;
      }
      temp_v2 = temp_v2 + 1;
      temp_v3 = temp_v4;
    } while ((int)temp_v2 < 4);
    for (; temp_v3 < 4; temp_v3 = temp_v3 + 1) {
      FUN_003180c4(temp_v4 + 7,&LAB_0021b6e8);
    }
    asdTextDrawDirectoryEntry(*(unsigned int *)(temp_v1 + 0x2b8),4,0xffffffff,0,3,*(unsigned int *)(temp_v1 + 0x2ac),100)
    ;
  }
  return;
}

} /* extern "C" */
