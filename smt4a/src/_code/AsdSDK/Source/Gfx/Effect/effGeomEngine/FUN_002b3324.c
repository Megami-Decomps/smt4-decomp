/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3324` (_code @ 0x2b3324, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
extern unsigned int DAT_0064c084; /* 0x64c084 */
extern unsigned int DAT_0064c088; /* 0x64c088 */
extern unsigned int DAT_0064c08c; /* 0x64c08c */
extern unsigned int DAT_0064c090; /* 0x64c090 */
extern unsigned int DAT_0064c094; /* 0x64c094 */
extern unsigned int DAT_0064c098; /* 0x64c098 */
extern unsigned int DAT_0064c09c; /* 0x64c09c */
extern unsigned int DAT_0064c0a0; /* 0x64c0a0 */
extern unsigned int DAT_0064c0a4; /* 0x64c0a4 */
extern unsigned int DAT_0064c0a8; /* 0x64c0a8 */
extern unsigned int DAT_0064c0ac; /* 0x64c0ac */
extern unsigned int DAT_0064c0b0; /* 0x64c0b0 */
extern unsigned int DAT_0064c0b4; /* 0x64c0b4 */
extern unsigned int DAT_0064c0b8; /* 0x64c0b8 */
extern unsigned int DAT_0064c0bc; /* 0x64c0bc */
extern unsigned int DAT_0064c0c0; /* 0x64c0c0 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0019a0e8. */
extern int FUN_002eba64(unsigned int *);
extern int FUN_00341098(unsigned int, unsigned int);


int * FUN_002b3324(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  if ((param_2 & 1) != 0) {
    temp_v2 = 0xc;
  }
  if ((param_2 & 2) != 0) {
    temp_v2 = temp_v2 + 4;
  }
  if ((param_2 & 4) != 0) {
    temp_v2 = temp_v2 + 8;
  }
  if ((param_2 & 8) != 0) {
    temp_v2 = temp_v2 + 0x40;
  }
  if ((param_2 & 0x20) != 0) {
    temp_v2 = temp_v2 + 4;
  }
  if ((param_2 & 0x80) != 0) {
    temp_v2 = temp_v2 + 0x10;
  }
  piVar1 = (int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v2 * param_1 + 200,0x10,1);
  if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c30), temp_v0 != 0)) {
    DAT_0064c084 = 0x3f800000;
    DAT_0064c088 = 0;
    DAT_0064c08c = 0;
    DAT_0064c090 = 0;
    DAT_0064c094 = 0;
    DAT_0064c098 = 0x3f800000;
    DAT_0064c09c = 0;
    DAT_0064c0a0 = 0;
    DAT_0064c0a4 = 0;
    DAT_0064c0a8 = 0;
    DAT_0064c0ac = 0x3f800000;
    DAT_0064c0b0 = 0;
    DAT_0064c0b4 = 0;
    DAT_0064c0b8 = 0;
    DAT_0064c0bc = 0;
    DAT_0064c0c0 = 0x3f800000;
  }
  FUN_0019a0e8(piVar1 + 0x1a,&DAT_0064c084);
  *piVar1 = (int)(piVar1 + 0x2e);
  piVar1[3] = 1;
  *(unsigned char *)(piVar1 + 0x19) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x65) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x66) = 0xff;
  *(unsigned char *)((int)piVar1 + 0x67) = 0xff;
  piVar1[1] = param_1;
  piVar1[2] = temp_v2;
  piVar1[5] = param_2;
  piVar1[0x2a] = param_3;
  temp_v2 = FUN_00341098(param_1 & 0xffff,0x25);
  piVar1[6] = temp_v2;
  temp_v2 = 0;
  temp_v1 = (*piVar1 + 0xfU) & 0xfffffff0;
  if ((param_2 & 1) != 0) {
    temp_v2 = 0xc;
    piVar1[7] = temp_v1;
  }
  if ((param_2 & 2) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 4;
    piVar1[0xb] = temp_v0;
  }
  if ((param_2 & 4) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 8;
    piVar1[10] = temp_v0;
  }
  if ((param_2 & 8) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 0x40;
    piVar1[8] = temp_v0;
  }
  if ((param_2 & 0x20) != 0) {
    temp_v0 = temp_v1 + temp_v2;
    temp_v2 = temp_v2 + 4;
    piVar1[0xd] = temp_v0;
  }
  if ((param_2 & 0x80) != 0) {
    piVar1[0xe] = temp_v2 + temp_v1;
  }
  return piVar1;
}
