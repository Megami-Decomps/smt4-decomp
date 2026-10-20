/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00435318` (_code @ 0x435318, 0x654 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00437cac(...);
int FUN_00437e98(void);
int FUN_004383d8(void);
int FUN_004386c4(...);
int FUN_004387bc(int, unsigned char *, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00435318. */
extern int *FUN_00435f1c(int *, unsigned int);
/* Supplied declaration required: FUN_00437cac. */
extern int FUN_00437e50(unsigned int, unsigned char **);
/* Supplied declaration required: FUN_00437e98. */
extern int FUN_00438204(unsigned int, unsigned char **);
/* Supplied declaration required: FUN_004383d8. */
/* Supplied declaration required: FUN_004386c4. */
/* Supplied declaration required: FUN_004387bc. */


int * FUN_00435318(int *param_1,unsigned int param_2)

{
/* irregular: 9 unstructured edge(s); 1 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char **ppuVar9;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *puVar12;
  unsigned char *puVar13;
  int temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  int temp_v12;
  
  temp_v9 = 0;
  do {
    temp_v4 = *param_1;
    temp_v0 = *(unsigned char *)(temp_v4 + 8);
    if (temp_v0 == 5) {
      temp_v4 = FUN_00437cac(param_2,0x2d);
      if (temp_v4 == 0) {
        return (int *)0x2;
      }
      temp_v4 = 0x2d;
      FUN_004383d8();
      if (temp_v4 != 0) {
        temp_v7 = 0;
        do {
          temp_v3 = *(short *)(temp_v4 + temp_v7 * 2 + 2);
          if (temp_v3 == 0) break;
          temp_v6 = FUN_00437cac(param_2,temp_v3,temp_v3);
          if (temp_v6 == 0) {
            return (int *)0x2;
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 3);
      }
      temp_v9 = temp_v9 + 1;
      *param_1 = *(int *)(*param_1 + 4);
      continue;
    }
    if (temp_v0 < 5) {
      if (temp_v0 == 0) {
        temp_v7 = *(int *)(temp_v4 + 4);
        temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + 10);
        *param_1 = temp_v7;
        if (*(char *)(temp_v7 + 8) != '\x05') {
          piVar6 = (int *)FUN_00435f1c(param_1,param_2);
        }
        else {
          temp_v4 = *(int *)(temp_v7 + 4);
          *param_1 = temp_v4;
          if (*(char *)(temp_v4 + 8) != '\0') {
            piVar6 = (int *)FUN_00435f1c(param_1,param_2);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)FUN_00435f1c(param_1,param_2);
            }
          }
          else {
            temp_v2 = *(unsigned short *)(temp_v4 + 10);
            if (temp_v2 < temp_v8) {
              return (int *)0x7;
            }
            do {
              if (temp_v8 > temp_v2) {
                piVar6 = (int *)0x0;
                *param_1 = *(int *)(*param_1 + 4);
                break;
              }
              temp_v4 = FUN_00437cac(param_2,temp_v8);
              if (temp_v4 == 0) {
LAB_004354ac:
                piVar6 = (int *)0x2;
                break;
              }
              temp_v5 = temp_v8;
              FUN_004383d8();
              if (temp_v5 != 0) {
                temp_v4 = 0;
                do {
                  temp_v3 = *(short *)(temp_v5 + temp_v4 * 2 + 2);
                  if (temp_v3 == 0) break;
                  temp_v7 = FUN_00437cac(param_2,temp_v3,temp_v3);
                  if (temp_v7 == 0) goto LAB_004354ac;
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < 3);
              }
              temp_v8 = (temp_v8 + 1) & 0xffff;
            } while( 1 );
          }
        }
        if (piVar6 == (int *)0x0) {
          temp_v9 = temp_v9 + 1;
          continue;
        }
        return piVar6;
      }
      if (temp_v0 == 2) {
        *param_1 = *(int *)(temp_v4 + 4);
        piVar6 = param_1;
        FUN_00435318(param_1,param_2);
        if (piVar6 == (int *)0x0) {
          *param_1 = *(int *)(*param_1 + 4);
          continue;
        }
        return piVar6;
      }
      if (temp_v0 != 3) {
        if (temp_v0 != 4) {
          return (int *)0x8;
        }
        if (temp_v9 == 0) {
          return (int *)0x6;
        }
        return (int *)0x0;
      }
      temp_v12 = param_1[5];
      *param_1 = *(int *)(*param_1 + 4);
      piVar6 = param_1;
      temp_v10 = (unsigned char *)&temp_v10;
      temp_v11 = (unsigned char *)&temp_v10;
      FUN_00435318(param_1,(unsigned int)&temp_v10);
      if (piVar6 != (int *)0x0) {
        if ((temp_v12 != 0) && (puVar13 = temp_v11, (unsigned char **)temp_v11 != &temp_v10)) {
          do {
            puVar12 = *(unsigned char **)(puVar13 + 4);
            FUN_004387bc(temp_v12,puVar13,1);
            puVar13 = puVar12;
          } while ((unsigned char **)puVar12 != &temp_v10);
        }
        return piVar6;
      }
      *param_1 = *(int *)(*param_1 + 4);
      ppuVar9 = &temp_v10;
      FUN_00437e98();
      if ((ppuVar9 == (unsigned char **)0x0) || (temp_v4 = FUN_00437e50(param_2,&temp_v10), temp_v4 == 0))
      {
        if (temp_v12 == 0) {
          return (int *)0x2;
        }
        puVar13 = temp_v11;
        if ((unsigned char **)temp_v11 == &temp_v10) {
          return (int *)0x2;
        }
        do {
          puVar12 = *(unsigned char **)(puVar13 + 4);
          FUN_004387bc(temp_v12,puVar13,1);
          puVar13 = puVar12;
        } while ((unsigned char **)puVar12 != &temp_v10);
        return (int *)0x2;
      }
      if (temp_v12 == 0) continue;
      puVar13 = temp_v11;
      if ((unsigned char **)temp_v11 != &temp_v10) {
        do {
          puVar12 = *(unsigned char **)(puVar13 + 4);
          FUN_004387bc(temp_v12,puVar13,1);
          puVar13 = puVar12;
        } while ((unsigned char **)puVar12 != &temp_v10);
      }
    }
    else {
      if (temp_v0 != 6) {
        if (temp_v0 == 7) {
          temp_v4 = FUN_004386c4(param_2,*(unsigned char *)(temp_v4 + 10));
          if (temp_v4 == 0) {
            return (int *)0x2;
          }
          temp_v4 = *(int *)(*param_1 + 4);
          temp_v9 = temp_v9 + 1;
          *param_1 = temp_v4;
          continue;
        }
        if (temp_v0 != 8) {
          if (temp_v0 == 0x12) {
            return (int *)0x5;
          }
          return (int *)0x8;
        }
        temp_v12 = param_1[5];
        temp_v10 = (unsigned char *)&temp_v10;
        temp_v11 = (unsigned char *)&temp_v10;
        temp_v4 = FUN_004386c4(&temp_v10,*(unsigned char *)(*param_1 + 10));
        if (temp_v4 != 0) {
          ppuVar9 = &temp_v10;
          FUN_00437e98();
          if ((ppuVar9 != (unsigned char **)0x0) &&
             (temp_v4 = FUN_00437e50(param_2,&temp_v10), temp_v4 != 0)) {
            if (temp_v12 != 0) {
              puVar13 = temp_v11;
              if ((unsigned char **)temp_v11 != &temp_v10) {
                do {
                  puVar12 = *(unsigned char **)(puVar13 + 4);
                  FUN_004387bc(temp_v12,puVar13,1);
                  puVar13 = puVar12;
                } while ((unsigned char **)puVar12 != &temp_v10);
              }
              temp_v12 = 0;
              temp_v10 = (unsigned char *)&temp_v10;
              temp_v11 = (unsigned char *)&temp_v10;
            }
            temp_v4 = *(int *)(*param_1 + 4);
            temp_v9 = temp_v9 + 1;
            *param_1 = temp_v4;
            continue;
          }
        }
        if ((temp_v12 != 0) && (puVar13 = temp_v11, (unsigned char **)temp_v11 != &temp_v10)) {
          do {
            puVar12 = *(unsigned char **)(puVar13 + 4);
            FUN_004387bc(temp_v12,puVar13,1);
            puVar13 = puVar12;
          } while ((unsigned char **)puVar12 != &temp_v10);
        }
        return (int *)0x2;
      }
      temp_v4 = *(int *)(temp_v4 + 4);
      *param_1 = temp_v4;
      temp_v1 = *(char *)(temp_v4 + 8);
      if (temp_v9 == 0) {
        if (temp_v1 != '\x06') {
          if (temp_v1 != '\x04') continue;
          return (int *)0x6;
        }
        return (int *)0x6;
      }
      if (!(temp_v1 != '\x06' && temp_v1 != '\x04')) continue;
      temp_v12 = param_1[5];
      piVar6 = param_1;
      temp_v10 = (unsigned char *)&temp_v10;
      temp_v11 = (unsigned char *)&temp_v10;
      FUN_00435318(param_1,(unsigned int)&temp_v10);
      if (piVar6 != (int *)0x0) {
        if ((temp_v12 != 0) && (puVar13 = temp_v11, (unsigned char **)temp_v11 != &temp_v10)) {
          do {
            puVar12 = *(unsigned char **)(puVar13 + 4);
            FUN_004387bc(temp_v12,puVar13,1);
            puVar13 = puVar12;
          } while ((unsigned char **)puVar12 != &temp_v10);
        }
        return piVar6;
      }
      temp_v4 = FUN_00438204(param_2,&temp_v10);
      if (temp_v4 == 0) {
        if (temp_v12 == 0) {
          return (int *)0x2;
        }
        puVar13 = temp_v11;
        if ((unsigned char **)temp_v11 == &temp_v10) {
          return (int *)0x2;
        }
        do {
          puVar12 = *(unsigned char **)(puVar13 + 4);
          FUN_004387bc(temp_v12,puVar13,1);
          puVar13 = puVar12;
        } while ((unsigned char **)puVar12 != &temp_v10);
        return (int *)0x2;
      }
      if (temp_v12 == 0) continue;
      puVar13 = temp_v11;
      if ((unsigned char **)temp_v11 != &temp_v10) {
        do {
          puVar12 = *(unsigned char **)(puVar13 + 4);
          FUN_004387bc(temp_v12,puVar13,1);
          puVar13 = puVar12;
        } while ((unsigned char **)puVar12 != &temp_v10);
      }
    }
    temp_v12 = 0;
    temp_v10 = (unsigned char *)&temp_v10;
    temp_v11 = (unsigned char *)&temp_v10;
  } while( 1 );
}

} /* extern "C" */
