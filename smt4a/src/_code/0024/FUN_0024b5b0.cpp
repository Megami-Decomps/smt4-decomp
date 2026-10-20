/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b5b0` (_code @ 0x24b5b0, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(int, int *);
int FUN_0016007c(void);
int FUN_002bf464(void);
int FUN_002e3328(void);
int FUN_00318d6c(void);
int FUN_0031a400(void);
int FUN_00342010(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_003a7644(void);
int FUN_003d2d6c(int);
int FUN_003d54f8(...);
int FUN_0047c36c(unsigned int);
int FUN_0047c5f0(void);
int FUN_0047c950(void);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp10; /* 0x10: local_10 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003a7644. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_0047c36c. */
/* Supplied declaration required: FUN_0047c5f0. */
extern unsigned int FUN_0047c8b8(void);
/* Supplied declaration required: FUN_0047c950. */


unsigned int FUN_0024b5b0(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 15 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = *param_1;
  temp_v0 = *(char *)(temp_v3 + 0x1a);
  temp_v4 = param_4;
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          return 0xffffffff;
        }
      }
      else {
        if (*(char *)(temp_v3 + 0x19) != '\0') {
          FUN_003d54f8(0,1);
          FUN_003d54f8(1);
          FUN_003d2d6c(0xf);
        }
        else {
          temp_v4 = romwright_piece_3_1((int)((unsigned int)param_4 >> 8),1);
          FUN_00137ee0(1,&temp_v4);
        }
        *(unsigned char *)(temp_v3 + 0x1a) = 3;
        *(unsigned char *)(temp_v3 + 0x18) = 1;
        if ((*(int *)(temp_v3 + 0x1c) != 0) && (FUN_0047c5f0(), *(int *)(temp_v3 + 0x1c) != 0)) {
          FUN_0047c950();
          FUN_002e3328();
          *(unsigned int *)(temp_v3 + 0x1c) = 0;
        }
        FUN_0037b450();
        FUN_00318d6c();
        FUN_0035b304();
      }
    }
    else {
      FUN_0047c36c(*(unsigned int *)(temp_v3 + 0x1c));
      if ((**(unsigned int **)(temp_v3 + 0x1c) & 1) != 0) {
        *(unsigned char *)(temp_v3 + 0x1a) = 2;
      }
    }
  }
  else {
    FUN_0031a400();
    FUN_002bf464();
    FUN_00342010();
    temp_v1 = 0x26f0;
    FUN_0016007c();
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = FUN_0047c8b8();
    }
    *(unsigned int *)(temp_v3 + 0x1c) = temp_v2;
    FUN_003a7644();
    *(unsigned char *)(temp_v3 + 0x1a) = 1;
  }
  return 0;
}

} /* extern "C" */
