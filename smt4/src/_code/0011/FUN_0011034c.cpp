/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011034c` (_code @ 0x11034c, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d0ec(void);
int FUN_0011d1b4(int);
int FUN_0011d20c(void);
int FUN_0011d350(unsigned int);
int FUN_0011d360(void);
int FUN_0011d3ac(int);
int FUN_0011d3fc(unsigned int, int, unsigned int);
int FUN_0011d934(void);
int FUN_0011d9a4(void);
int FUN_002bb120(unsigned int);
int FUN_002bb130(unsigned int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);
int FUN_002c131c(int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char DAT_0044e360; /* 0x44e360 */

/* Supplied declaration required: FUN_0011d0ec. */
extern int FUN_0011d194(void);
/* Supplied declaration required: FUN_0011d1b4. */
/* Supplied declaration required: FUN_0011d20c. */
/* Supplied declaration required: FUN_0011d350. */
/* Supplied declaration required: FUN_0011d360. */
/* Supplied declaration required: FUN_0011d3ac. */
/* Supplied declaration required: FUN_0011d3fc. */
extern int FUN_0011d644(unsigned int, unsigned int, unsigned int *, unsigned int *);
extern int FUN_0011d694(unsigned int *, unsigned int, unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_0011d934. */
/* Supplied declaration required: FUN_0011d9a4. */
extern unsigned int FUN_002bb100(void);
extern unsigned int FUN_002bb110(void);
/* Supplied declaration required: FUN_002bb120. */
/* Supplied declaration required: FUN_002bb130. */
extern int FUN_002bb2c8(void);
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */
/* Supplied declaration required: FUN_002c131c. */


int FUN_0011034c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int uStack_18;
  
  if ((*(signed char *)((unsigned char *)&DAT_0044e360 + 0x2)) != '\0') {
    temp_v0 = -0x1f5f3007;
  }
  else {
    (*(signed char *)((unsigned char *)&DAT_0044e360 + 0x2)) = '\x01';
    FUN_0011d934();
    temp_v3 = 0;
    temp_v0 = FUN_0011d694((unsigned int *)&temp_v3,param_2,(unsigned int *)&uStack_18,&temp_v4);
    if (-1 < temp_v0) {
      FUN_0011d3ac(temp_v3);
      FUN_002bb130(temp_v4 & 1);
      FUN_002bb120((temp_v4 & 2) >> 1);
      FUN_0011d360();
      FUN_0011d350(param_1);
      FUN_0011d1b4(uStack_18);
      temp_v0 = FUN_0011d194();
      if (temp_v0 == 0) {
        FUN_002bb378();
        FUN_0011d9a4();
        temp_v3 = 0;
        temp_v4 = 0;
        temp_v1 = FUN_002bb110();
        temp_v2 = FUN_002bb100();
        temp_v0 = FUN_0011d644(temp_v2,temp_v1,&temp_v4,(unsigned int *)&temp_v3);
        if (temp_v0 < 0) {
          FUN_002c131c(temp_v0,0x11045c);
        }
        FUN_0011d20c();
        FUN_0011d3fc(param_3,temp_v3,temp_v4);
        nn_applet_CTR_detail_CloseSession();
        temp_v0 = FUN_002bb2c8();
        if (temp_v0 == 0) {
          FUN_0011d0ec();
        }
      }
      return 0;
    }
    FUN_0011d360();
  }
  return temp_v0;
}

} /* extern "C" */
