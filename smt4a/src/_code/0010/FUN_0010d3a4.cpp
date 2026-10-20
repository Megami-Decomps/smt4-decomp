/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d3a4` (_code @ 0x10d3a4, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012922c(int, unsigned int [2]);
int FUN_002f74ec(int, int *);
int FUN_002f76ca(int, unsigned char *);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0010d444; /* 0x10d444 */
extern unsigned char DAT_00559114; /* 0x559114 */
extern unsigned char DAT_0059495b; /* 0x59495b */
extern unsigned int DAT_005949a0; /* 0x5949a0 */

extern int FUN_0010561e(int);
extern int FUN_00122230(int);
extern int FUN_001224b0(int);
/* Supplied declaration required: FUN_0012922c. */
extern int FUN_0012cfb6(int);
extern unsigned int *sharedRefInit(void);
extern int constructObj0055affc(unsigned int *);
/* Supplied declaration required: FUN_002f74ec. */
extern int FUN_002f7664(void);
/* Supplied declaration required: FUN_002f76ca. */


int FUN_0010d3a4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5 [2];
  
  puVar1 = (unsigned int *)sharedRefInit();
  *puVar1 = (unsigned int)&DAT_00559114;
  temp_v0 = constructObj0055affc(puVar1 + 3);
  temp_v0 = temp_v0 + 8;
  temp_v3 = 0;
  FUN_002f74ec(temp_v0,&temp_v3);
  temp_v0 = temp_v0 + 0x5c;
  temp_v4 = 0;
  FUN_002f74ec(temp_v0,&temp_v4);
  temp_v0 = temp_v0 + 0x5c;
  temp_v5[0] = 0;
  FUN_0012922c(temp_v0,temp_v5);
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned char *)(temp_v0 + 0x74) = 0;
  *(unsigned char *)(temp_v0 + 0x75) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x60) = 0;
  temp_v1 = FUN_002f7664();
  *(int *)(temp_v0 + 0x6c) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x6c) + 8) = *(int *)(temp_v0 + 0x6c);
  *(int *)(*(int *)(temp_v0 + 0x6c) + 0xc) = *(int *)(temp_v0 + 0x6c);
  temp_v0 = FUN_00122230(temp_v0 + 0x78);
  temp_v0 = FUN_001224b0(temp_v0 + 0x1c);
  temp_v0 = FUN_0010561e(temp_v0 + 0x18);
  temp_v0 = FUN_0012cfb6(temp_v0 + 0x20);
  *(unsigned char *)(temp_v0 + 0xc) = 1;
  DAT_0059495b = 0;
  DAT_005949a0 = 0xffffffff;
  FUN_002f76ca(temp_v0 - 0x18c,&LAB_0010d444);
  return temp_v0 - 0x198;
}

} /* extern "C" */
