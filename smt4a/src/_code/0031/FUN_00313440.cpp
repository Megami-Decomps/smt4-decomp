/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313440` (_code @ 0x313440, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(unsigned char [4], unsigned char [36]);
int sceneRegisterBoxEffect(int, int, unsigned char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
int saveSlotInfoSet(void);

/* stack frame of void: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_00313588; /* 0x313588 */
extern int g_mapObj; /* 0x581284 */

/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: sceneRegisterBoxEffect. */
/* Supplied declaration required: saveSlotInfoSet. */


void FUN_00313440(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [36];
  
  temp_v2 = 0;
  do {
    temp_v1 = g_mapObj + temp_v2 * 0x48;
    if ((*(char *)(temp_v1 + 0x14) != '\0') &&
       ((temp_v0 = *(int *)(temp_v1 + 0x38), temp_v0 == 6 || temp_v0 == 7 || (temp_v0 == 9 || temp_v0 == 0xb))))
    {
      FUN_0018a924(temp_v3,temp_v4);
      sceneRegisterBoxEffect(0,0,&LAB_00313588,0x1e,0xc,*(int *)(temp_v1 + 0x58) + 0x1000,0,0,0,0,0,0,0,0,1,0,0,
                   0,0);
      if (*(char *)(temp_v1 + 0x40) != '\0') {
        saveSlotInfoSet();
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  return;
}

} /* extern "C" */
