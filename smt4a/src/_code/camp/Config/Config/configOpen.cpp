/* NON_MATCHING: romwright 0.5.0 decompilation of `configOpen` (_code @ 0x202d2c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int asdMemoryAllocTracked(int, int, int, int, int);
int sysPlaySe(int);
int FUN_0019de98(int, unsigned int);
int FUN_001acf98(int, int);
int FUN_002804b0(unsigned char *, int, int);
int sysMemClear(void);
int FUN_003d05a4(int, unsigned int);
int FUN_003f86f8(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00202e80; /* 0x202e80 */
extern unsigned char LAB_00202e90; /* 0x202e90 */
extern int g_config; /* 0x57f230 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysPlaySe. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_003d05a4. */
/* Supplied declaration required: FUN_003f86f8. */


void configOpen(unsigned int param_1,unsigned char param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (g_config == 0) {
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x4cc,1);
    g_config = temp_v0;
  }
  temp_v0 = g_config;
  sysMemClear();
  *(unsigned char *)(temp_v0 + 0xc0) = param_2;
  *(unsigned char *)(temp_v0 + 0x4c0) = 0;
  *(unsigned char *)(temp_v0 + 0x4c1) = 0;
  temp_v1 = FUN_00341940(0x24);
  if (temp_v1 == 0) {
    *(unsigned char *)(temp_v0 + 0x4c0) = 1;
    FUN_0014384c(0x24);
  }
  temp_v1 = FUN_0018206c(0x24,0);
  if (temp_v1 == 0) {
    *(unsigned char *)(temp_v0 + 0x4c1) = 1;
    FUN_001acf98(0x24,0);
  }
  FUN_002804b0(&LAB_00202e80,temp_v0 + 0x7c,0);
  FUN_002804b0(&LAB_00202e90,temp_v0 + 0x80,0);
  FUN_003f86f8(0x36);
  sysPlaySe(5);
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_003d05a4(temp_v0,param_1);
  temp_v0 = g_config;
  *(unsigned int *)(g_config + 100) = 0;
  *(unsigned int *)(temp_v0 + 0x68) = 0;
  return;
}

} /* extern "C" */
