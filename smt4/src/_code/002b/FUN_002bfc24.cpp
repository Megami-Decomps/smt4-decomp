/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfc24` (_code @ 0x2bfc24, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126468(void);
int FUN_002b6480(unsigned char [64], int, int, unsigned char *, unsigned char *);
int FUN_002b64a0(unsigned char [64], unsigned char [72]);
int FUN_002be624(...);
int FUN_002bf694(int, unsigned char [64]);
int FUN_002c3940(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spF0; /* 0xf0: local_f0 */
} param_4_stack;

extern unsigned char LAB_00126484; /* 0x126484 */
extern unsigned char LAB_002bfda0; /* 0x2bfda0 */
extern unsigned char LAB_002bfdac; /* 0x2bfdac */
extern unsigned char LAB_002bfdb4; /* 0x2bfdb4 */
extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern signed char DAT_004c581a; /* 0x4c581a */

/* Supplied declaration required: FUN_00126468. */
/* Supplied declaration required: FUN_002b6480. */
/* Supplied declaration required: FUN_002b64a0. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c3940. */
extern int FUN_002c564c(unsigned int);


unsigned int FUN_002bfc24(unsigned int param_1,unsigned int param_2,int param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_d0; 6 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned char *puVar3;
  unsigned int temp_v1;
  unsigned long long in_d0;
  unsigned char temp_v2 [64];
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [72];
  
  FUN_002c3940(temp_v2,0x40);
  FUN_002c3940(temp_v3,0x40);
  FUN_002c3940(temp_v4,0x40);
  temp_v0 = FUN_002c564c(1);
  if ((((temp_v0 != 0) || (temp_v0 = FUN_002c1d5c(), temp_v0 != 0)) || (DAT_004c581a != '\0')) ||
     (param_3 == 0)) {
    return 0xffffffff;
  }
  FUN_002be624(temp_v3,&LAB_002bfda0);
  FUN_002be624(temp_v4,&LAB_002bfdac,param_2);
  FUN_002b64a0(temp_v3,temp_v4);
  FUN_002be624(temp_v2,&LAB_002bfdb4,temp_v3);
  FUN_00126468();
  temp_v1 = 0;
  do {
    pcVar2 = (char *)(&DAT_004c5634 + temp_v1 * 0x78);
    while( 1 ) {
      if (*pcVar2 == '\0') {
        if (temp_v1 == 0xffffffff) {
          return 0xffffffff;
        }
        if (temp_v1 >= 4) {
          return 0xffffffff;
        }
        temp_v0 = temp_v1 * 0x78;
        puVar3 = &DAT_004c5634 + temp_v0;
        if (puVar3 == (unsigned char *)0x0) {
          return 0xffffffff;
        }
        *(unsigned int *)(temp_v0 + 0x4c569c) = 0;
        *(unsigned char *)(temp_v0 + 0x4c56a8) = param_4;
        *puVar3 = 1;
        *(unsigned int *)(temp_v0 + 0x4c5688) = param_2;
        *(unsigned int *)(temp_v0 + 0x4c5684) = param_1;
        *(int *)(temp_v0 + 0x4c568c) = (int)in_d0;
        *(int *)(temp_v0 + 0x4c5690) = (int)((unsigned long long)in_d0 >> 0x20);
        *(char *)(temp_v0 + 0x4c56a9) = (char)param_3;
        FUN_002bf694(temp_v0 + 0x4c5635,temp_v2);
        FUN_002b6480(temp_v2,0,3,&LAB_00126484,puVar3);
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
      if ((int)temp_v1 >= 4) {
        return 0xffffffff;
      }
      if (temp_v1 < 4) break;
      pcVar2 = (char *)0x0;
    }
  } while( 1 );
}

} /* extern "C" */
