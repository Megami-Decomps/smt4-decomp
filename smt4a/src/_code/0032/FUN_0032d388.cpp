#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(void);
int FUN_0019ea64(int);
int FUN_001add24(int);
int FUN_0021c354(int);
int FUN_00237680(void);
int FUN_002c0b5c(unsigned int *);
int FUN_002e132c(int);
int FUN_002e6dd0(unsigned int *, int);
int FUN_003192f4(unsigned int *);
int FUN_00319e58(void);
int FUN_00321744(void);
int FUN_0032e25c(unsigned int *, int);
int FUN_0039a17c(unsigned int);
int FUN_003d2d6c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_0057f110; /* 0x57f110 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_0021c354. */
/* Supplied declaration required: FUN_00237680. */
extern int FUN_002a469c(void);
/* Supplied declaration required: FUN_002c0b5c. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_003192f4. */
/* Supplied declaration required: FUN_00319e58. */
/* Supplied declaration required: FUN_00321744. */
/* Supplied declaration required: FUN_0032e25c. */
extern int FUN_00330a80(int);
extern int FUN_00345388(unsigned int);
/* Supplied declaration required: FUN_0039a17c. */
/* Supplied declaration required: FUN_003d2d6c. */


void FUN_0032d388(int param_1)

{
/* irregular: 17 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4));
  FUN_0019ea64(1);
  if (puVar1[0x5a] != 0) {
    if (puVar1[0x39] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0x3a] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0x3d] != 0) {
      FUN_0019c364();
    }
    FUN_001631d0(*puVar1,0);
    FUN_0019a5a0(puVar1);
    (*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) = (unsigned int *)0x0;
  }
  else {
    if ((*(char *)(puVar1 + 0x5b) != '\0') && (temp_v0 = FUN_00345388(0x20), temp_v0 != 0)) {
      temp_v0 = FUN_002a469c();
      if (temp_v0 == 0) {
        FUN_0032e25c((*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x10,0);
      }
      FUN_00319e58();
      FUN_002c0b5c((*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x10);
      temp_v0 = FUN_002a469c();
      if (temp_v0 == 0) {
        FUN_002e6dd0((*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x24,0x14);
      }
    }
    temp_v0 = 0;
    do {
      temp_v1 = FUN_00330a80(temp_v0);
      temp_v0 = temp_v0 + 1;
      if ((*(unsigned char *)(temp_v1 + 0x20) & 0x10) != 0) {
        *(unsigned char *)(temp_v1 + 0x20) = *(unsigned char *)(temp_v1 + 0x20) & ~0x10;
      }
    } while (temp_v0 < 0x20);
    FUN_00237680();
    FUN_001add24(0x25);
    FUN_00321744();
    if (puVar1[0x39] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0x3a] != 0) {
      FUN_0019a5a0();
    }
    FUN_001add24(0x4a);
    if (puVar1[0x3d] != 0) {
      FUN_0019c364();
    }
    FUN_0019a7f4(0x2e,0);
    FUN_002e132c(0x2e);
    FUN_003192f4((*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0x2c);
    FUN_0039a17c(puVar1[0x5d]);
    FUN_001631d0(*puVar1,0);
    FUN_0019a5a0(puVar1);
    (*(unsigned int * *)((unsigned char *)&DAT_0057f110 + 0x4)) = (unsigned int *)0x0;
    if (param_1 == 0) {
      FUN_003d2d6c(0xf);
      FUN_0021c354(0x2d);
    }
  }
  return;
}

} /* extern "C" */
