/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110180` (_code @ 0x110180, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d58c(int);
int FUN_0011d798(unsigned int, unsigned char [4], unsigned char [4], int *);
int FUN_00129bd0(void);
int FUN_0012a7c8(void);
int FUN_002bb150(int, int);
int FUN_002bb180(void);
int FUN_002bb194(int);
int FUN_002bb20c(void);
int FUN_002bb308(void);
int FUN_002bb378(void);
int FUN_002c131c(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern unsigned char DAT_0044e361; /* 0x44e361 */
extern unsigned char DAT_0044e364; /* 0x44e364 */

/* Supplied declaration required: FUN_0011d58c. */
extern int FUN_0011d6f0(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0011d798. */
/* Supplied declaration required: FUN_00129bd0. */
/* Supplied declaration required: FUN_0012a7c8. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb180. */
/* Supplied declaration required: FUN_002bb194. */
/* Supplied declaration required: FUN_002bb20c. */
extern int FUN_002bb274(void);
extern int FUN_002bb284(unsigned int, unsigned char **);
extern int FUN_002bb2c8(void);
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


int FUN_00110180(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [4];
  
  FUN_002bb378();
  temp_v1 = temp_v5;
  temp_v0 = -1;
  FUN_0011d798(0xffffffff,temp_v3,temp_v4,&temp_v2);
  if (temp_v0 < 0) {
    FUN_002c131c();
  }
  FUN_002bb308();
  temp_v0 = FUN_002bb2c8();
  if (temp_v0 != 0) {
    while( 1 ) {
      FUN_002bb378();
      temp_v0 = FUN_002bb284(temp_v2,&temp_v1);
      if (temp_v0 < 0) {
        FUN_002c131c(temp_v0,0x1101f8);
      }
      FUN_002bb308();
      if (((unsigned int)temp_v1 & 0xff) != 0) break;
      FUN_002bb150(10000000,0);
    }
    DAT_0044e361 = 1;
    FUN_00129bd0();
    FUN_0011d58c(temp_v2);
  }
  temp_v0 = FUN_002bb274();
  if (temp_v0 != 0) {
    FUN_002bb20c();
    DAT_0044e364 = 1;
  }
  FUN_002bb194(0);
  FUN_0012a7c8();
  FUN_002bb378();
  temp_v0 = FUN_0011d6f0(param_1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_002c131c(temp_v0,0x110280);
  }
  FUN_002bb308();
  FUN_002bb180();
  return temp_v0;
}

} /* extern "C" */
