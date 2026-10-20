/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e38c` (_code @ 0x31e38c, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_001ad9b4(void);
int FUN_00237898(int, int, unsigned int, int, int);
int FUN_00275bb0(int);
int FUN_00275fe4(...);
int FUN_003dea6c(int, int, int);
int FUN_00417e08(int);
int FUN_004da2d0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_001695a0. */
extern int FUN_0016a0f0(unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_00417e08. */
extern int FUN_004186a4(void);
extern int FUN_004186e0(void);
/* Supplied declaration required: FUN_004da2d0. */


unsigned int FUN_0031e38c(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = FUN_002deb84();
  if (temp_v2 == 0) {
    FUN_00417e08(temp_v1);
    FUN_00275fe4(0);
    FUN_00275fe4(1,0);
  }
  temp_v3 = FUN_0016a0f0(0x1e);
  temp_v2 = FUN_00275bb0(0);
  if (temp_v2 == 0) {
    FUN_003dea6c(temp_v1,0,1);
    FUN_001695a0();
    temp_v4 = FUN_00275bb0(1);
    FUN_00237898(temp_v3,0,temp_v4,6,0);
    temp_v2 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v2 + 1);
    if (temp_v3 == 1) {
      FUN_00275fe4(1,0);
      temp_v2 = FUN_004186a4();
      if (temp_v2 != 0) {
        temp_v2 = FUN_004186e0();
        FUN_001ad9b4();
        FUN_001ad9b4();
        if ((temp_v2 != 0 && temp_v1 != 0) &&
           ((temp_v0 = *(char *)(temp_v2 + 6), (temp_v0 != '\x05' && temp_v0 != '\x04') && temp_v0 != '\x01'
            || (*(char *)(temp_v1 + 6) != '\0' && *(char *)(temp_v1 + 6) != '\n')))) {
          FUN_004da2d0();
        }
      }
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
