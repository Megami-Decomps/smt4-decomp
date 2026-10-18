/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034de5c` (_code @ 0x34de5c, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp74; /* 0x74: local_74 */
    unsigned char sp75; /* 0x75: local_75 */
    unsigned char sp76; /* 0x76: local_76 */
    unsigned char sp83; /* 0x83: local_83 */
    unsigned char sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char DAT_0047e554; /* 0x47e554 */

extern unsigned int FUN_002b6030(unsigned char *, unsigned int);
extern unsigned int *FUN_002b626c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002b6410. */
/* Supplied declaration required: FUN_002b646c. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_003570a4(void);


unsigned int * FUN_0034de5c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [24];
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  
  temp_v0 = FUN_003570a4();
  temp_v0 = FUN_002b6030(&DAT_0047e554,temp_v0);
  FUN_002b646c(temp_v3);
  FUN_002b6410(temp_v3);
  temp_v4 = 2;
  temp_v5 = 0xe;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  puVar2 = (unsigned int *)FUN_002b626c(temp_v3,temp_v0);
  puVar2[3] = 0xf0202;
  *puVar2 = 0;
  puVar2[1] = 0xf0201;
  puVar2[2] = 0;
  FUN_002c4b30(puVar2 + 4,0x98);
  piVar3 = (int *)(puVar2 + 0x2a);
  puVar2[5] = 0x823f0203;
  temp_v1 = 0;
  temp_v2 = 0xc;
  do {
    temp_v2 = temp_v2 - 1;
    piVar3[1] = -0x7fc0fdce;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar4 = piVar3 + 5;
    *piVar3 = temp_v1;
    temp_v1 = temp_v1 + 1;
    piVar3 = piVar3 + 6;
    *piVar4 = 0;
  } while (temp_v2 != 0);
  return puVar2 + 0x72;
}
