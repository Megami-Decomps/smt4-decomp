/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143d00` (_code @ 0x143d00, 0x7ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_0063e944; /* 0x63e944 */
extern int DAT_0063e948; /* 0x63e948 */
extern float DAT_0063f4c8; /* 0x63f4c8 */
extern unsigned int DAT_0063f4cc; /* 0x63f4cc */
extern unsigned int DAT_0063f4d0; /* 0x63f4d0 */
extern int DAT_0063f4d4; /* 0x63f4d4 */
extern int DAT_0063f4d8; /* 0x63f4d8 */
extern int DAT_0063f4dc; /* 0x63f4dc */
extern unsigned char DAT_0063f4e0; /* 0x63f4e0 */
extern signed char DAT_0063f4e1; /* 0x63f4e1 */
extern signed char DAT_0063f4e2; /* 0x63f4e2 */
extern int DAT_0063f4e4; /* 0x63f4e4 */
extern unsigned int DAT_0063f4e8; /* 0x63f4e8 */
extern int DAT_0063f504; /* 0x63f504 */
extern int DAT_0063f508; /* 0x63f508 */
extern int DAT_0063f50c; /* 0x63f50c */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0015e874. */


/* WARNING: Removing unreachable block (ram,0x0014430c) */

void FUN_00143d00(void)

{
/* irregular: 12 unstructured edge(s); 9 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  int unaff_r8;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  
  if ((DAT_0063f4e0 & 1) == 0) {
    return;
  }
  if ((DAT_0063f4e2 == '\0') && (DAT_0063f50c == 0)) {
    return;
  }
  if (DAT_0063f4e1 != '\0') {
    if (DAT_0063f4e1 != '\x01') {
      if (DAT_0063f4e1 != '\x02') {
        return;
      }
      if (DAT_0063f4dc != DAT_0063f4d8) {
        DAT_0063f4dc = DAT_0063f4dc + 1;
        if (DAT_0063f4e2 != '\0') {
          temp_v2 = 0;
          if ((int)DAT_0063f4e8 < 1) {
            return;
          }
          do {
            temp_v4 = temp_v2 == 0;
            if (-1 < (int)temp_v2) {
              temp_v4 = DAT_0063f4e8 == temp_v2;
            }
            if (!temp_v4 && (-1 < (int)temp_v2 && (int)temp_v2 <= (int)DAT_0063f4e8)) {
              temp_v3 = DAT_0063f4e4;
              if (0 < (int)temp_v2) {
                if ((temp_v2 & 1) != 0) {
                  temp_v3 = *(int *)(DAT_0063f4e4 + 0xd8);
                }
                for (temp_v0 = (int)temp_v2 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
                  temp_v3 = *(int *)(*(int *)(temp_v3 + 0xd8) + 0xd8);
                }
              }
              if (((temp_v3 != 0) && (*(int *)(temp_v3 + 0xf0) == 2 || *(int *)(temp_v3 + 0xf0) == 3)) &&
                 ((*(unsigned int *)(temp_v3 + 0xf4) & 2) != 0)) {
                DAT_0063f4dc = 0;
                DAT_0063f4e1 = 0;
                return;
              }
            }
            temp_v2 = temp_v2 + 1;
            if ((int)DAT_0063f4e8 <= (int)temp_v2) {
              return;
            }
          } while( 1 );
        }
        if (DAT_0063f50c == 0) {
          return;
        }
        if (*(int *)(DAT_0063f50c + 0x20) != 0) {
          DAT_0063f4dc = 0;
          DAT_0063f4e1 = 0;
          return;
        }
        temp_v3 = *(int *)(DAT_0063f50c + 0x24);
        temp_v4 = temp_v3 == 0;
        if (temp_v4) {
          temp_v3 = *(int *)(DAT_0063f50c + 0x28);
        }
        temp_v5 = temp_v4 && temp_v3 == 0;
        if (temp_v4 && temp_v3 == 0) {
          temp_v5 = *(int *)(DAT_0063f50c + 0x2c) == 0;
        }
        if (!temp_v5) {
          DAT_0063f4dc = 0;
          DAT_0063f4e1 = 0;
          return;
        }
        return;
      }
      if (((DAT_0063f4e0 & 4) != 0) && (DAT_0063f504 != 0)) {
        temp_v2 = (unsigned int)*(unsigned char *)(DAT_0063f504 + 0x39);
        if (temp_v2 >= 0x80) {
          temp_v2 = 0x7f;
        }
        if (temp_v2 != 0) {
          VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        if (*(int *)(DAT_0063f504 + 0x20) != 0) {
          FUN_0015e874(*(int *)(DAT_0063f504 + 0x20),DAT_0063f4d0);
        }
      }
      if (((DAT_0063f4e0 & 8) != 0) && (DAT_0063f508 != 0)) {
        temp_v2 = (unsigned int)*(unsigned char *)(DAT_0063f508 + 0x39);
        if (temp_v2 >= 0x80) {
          temp_v2 = 0x7f;
        }
        if (temp_v2 != 0) {
          VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        }
        if (*(int *)(DAT_0063f508 + 0x20) != 0) {
          FUN_0015e874(*(int *)(DAT_0063f508 + 0x20),DAT_0063f4d0);
        }
      }
      if (((DAT_0063f4e0 & 0x40) == 0) || (temp_v3 = 0, DAT_0063e948 < 1)) {
        DAT_0063f4dc = 0;
        DAT_0063f4e1 = 0;
        return;
      }
      do {
        temp_v0 = 0;
        piVar3 = DAT_0063e944;
        if (0 < DAT_0063e948) {
LAB_00143e98:
          if (piVar3 != (int *)0x0) {
            if (piVar3[6] != temp_v3) goto LAB_00144310;
            if ((*(unsigned char *)(piVar3 + 3) & 6) != 0) {
              temp_v2 = 0;
              temp_v0 = 0;
              piVar3 = DAT_0063e944;
              if (DAT_0063e948 >= 1) {
                do {
                  if (piVar3 == (int *)0x0) break;
                  if (piVar3[6] == temp_v3) {
                    temp_v2 = (unsigned int)*(unsigned char *)((int)piVar3 + 0xd);
                    break;
                  }
                  piVar3 = (int *)piVar3[5];
                  temp_v0 = temp_v0 + 1;
                } while (DAT_0063e948 > temp_v0);
              }
              temp_v0 = 0;
              piVar3 = DAT_0063e944;
              if (0 < DAT_0063e948) {
                do {
                  if (piVar3 == (int *)0x0) break;
                  if (piVar3[6] == temp_v3) {
                    if (*(char *)((int)piVar3 + 0xf) != '\0') {
                      if (temp_v2 >= 0x80) {
                        temp_v2 = 0x7f;
                      }
                      if (temp_v2 != 0) {
                        VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
                      }
                      if (*piVar3 != 0) {
                        FUN_0015e874(*piVar3,DAT_0063f4d0);
                      }
                    }
                    break;
                  }
                  piVar3 = (int *)piVar3[5];
                  temp_v0 = temp_v0 + 1;
                } while (DAT_0063e948 > temp_v0);
              }
            }
          }
        }
LAB_001443e0:
        temp_v3 = temp_v3 + 1;
        if (DAT_0063e948 <= temp_v3) {
          DAT_0063f4dc = 0;
          DAT_0063f4e1 = 0;
          return;
        }
      } while( 1 );
    }
    if (DAT_0063f4e2 != '\0') {
      temp_v2 = 0;
      if ((int)temp_v2 < (int)DAT_0063f4e8) {
        do {
          temp_v4 = temp_v2 == 0;
          if (-1 < (int)temp_v2) {
            temp_v4 = DAT_0063f4e8 == temp_v2;
          }
          if (!temp_v4 && (-1 < (int)temp_v2 && (int)temp_v2 <= (int)DAT_0063f4e8)) {
            temp_v3 = DAT_0063f4e4;
            if (0 < (int)temp_v2) {
              if ((temp_v2 & 1) != 0) {
                temp_v3 = *(int *)(DAT_0063f4e4 + 0xd8);
              }
              for (temp_v0 = (int)temp_v2 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
                temp_v3 = *(int *)(*(int *)(temp_v3 + 0xd8) + 0xd8);
              }
            }
            if (((temp_v3 != 0) && (*(int *)(temp_v3 + 0xf0) == 2 || *(int *)(temp_v3 + 0xf0) == 3)) &&
               ((*(unsigned int *)(temp_v3 + 0xf4) & 2) != 0)) {
              return;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while ((int)temp_v2 < (int)DAT_0063f4e8);
      }
    }
    else if (DAT_0063f50c != 0) {
      temp_v3 = *(int *)(DAT_0063f50c + 0x20);
      temp_v4 = temp_v3 != 0;
      if (!temp_v4) {
        temp_v3 = *(int *)(DAT_0063f50c + 0x24);
      }
      if (temp_v4 || temp_v3 != 0) {
        return;
      }
      temp_v4 = *(int *)(DAT_0063f50c + 0x28) != 0;
      temp_v3 = DAT_0063f50c;
      if (!temp_v4) {
        temp_v3 = *(int *)(DAT_0063f50c + 0x2c);
      }
      if (temp_v4 || temp_v3 != 0) {
        return;
      }
    }
    DAT_0063f4e1 = '\x02';
    DAT_0063f4dc = DAT_0063f4dc + 1;
    return;
  }
  if (DAT_0063f4e2 != '\0') {
    temp_v2 = 0;
    if ((int)temp_v2 < (int)DAT_0063f4e8) {
      do {
        temp_v4 = temp_v2 == 0;
        if (-1 < (int)temp_v2) {
          temp_v4 = DAT_0063f4e8 == temp_v2;
        }
        if (!temp_v4 && (-1 < (int)temp_v2 && (int)temp_v2 <= (int)DAT_0063f4e8)) {
          temp_v3 = DAT_0063f4e4;
          if (0 < (int)temp_v2) {
            if ((temp_v2 & 1) != 0) {
              temp_v3 = *(int *)(DAT_0063f4e4 + 0xd8);
            }
            for (temp_v0 = (int)temp_v2 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
              temp_v3 = *(int *)(*(int *)(temp_v3 + 0xd8) + 0xd8);
            }
          }
          if (((temp_v3 != 0) && (*(int *)(temp_v3 + 0xf0) == 2 || *(int *)(temp_v3 + 0xf0) == 3)) &&
             ((*(unsigned int *)(temp_v3 + 0xf4) & 2) != 0)) goto LAB_00143f68;
        }
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 < (int)DAT_0063f4e8);
    }
  }
  else if (DAT_0063f50c != 0) {
    temp_v3 = *(int *)(DAT_0063f50c + 0x20);
    temp_v4 = temp_v3 == 0;
    if (temp_v4) {
      temp_v3 = *(int *)(DAT_0063f50c + 0x24);
    }
    if (temp_v4 && temp_v3 == 0) {
      temp_v4 = *(int *)(DAT_0063f50c + 0x28) == 0;
      temp_v3 = DAT_0063f50c;
      if (temp_v4) {
        temp_v3 = *(int *)(DAT_0063f50c + 0x2c);
      }
      if (temp_v4 && temp_v3 == 0) {
        DAT_0063f4dc = 0;
        return;
      }
    }
LAB_00143f68:
    if (DAT_0063f4dc == DAT_0063f4d4) {
      temp_v7 = 0.5f;
      temp_v2 = 0;
      do {
        temp_v3 = (&DAT_0063f504)[temp_v2];
        if ((temp_v3 != 0) && ((*(unsigned char *)(temp_v3 + 0x38) & 6) != 0)) {
          temp_v1 = 0;
          if (temp_v2 < 2) {
            temp_v1 = (unsigned int)*(unsigned char *)(temp_v3 + 0x39);
          }
          temp_v6 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v1 = VectorFloatToUnsigned(temp_v7 + temp_v6 * DAT_0063f4c8,3) & 0xff;
          if (temp_v2 < 2) {
            if (temp_v1 >= 0x80) {
              temp_v1 = 0x7f;
            }
            if (temp_v1 != 0) {
              VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            if (*(int *)(temp_v3 + 0x20) != 0) {
              FUN_0015e874(*(int *)(temp_v3 + 0x20),DAT_0063f4cc);
            }
            if (temp_v2 == 0) {
              DAT_0063f4e0 = DAT_0063f4e0 | 4;
            }
            else {
              DAT_0063f4e0 = DAT_0063f4e0 | 8;
            }
          }
          else {
            DAT_0063f4e0 = DAT_0063f4e0 | 8;
          }
          unaff_r8 = 1;
        }
        do {
          temp_v2 = temp_v2 + 1;
          if ((int)temp_v2 >= 2) {
            temp_v3 = 0;
            if (DAT_0063e948 >= 1) goto LAB_00144088;
            if (unaff_r8 == 0) {
              return;
            }
            DAT_0063f4dc = 0;
            DAT_0063f4e1 = 1;
            return;
          }
        } while (temp_v2 >= 2);
      } while( 1 );
    }
    DAT_0063f4dc = DAT_0063f4dc + 1;
    return;
  }
  DAT_0063f4dc = 0;
  return;
LAB_00144088:
  temp_v0 = 0;
  piVar3 = DAT_0063e944;
  if (0 < DAT_0063e948) {
LAB_001440a4:
    if (piVar3 != (int *)0x0) {
      if (piVar3[6] != temp_v3) goto LAB_001440f4;
      if ((*(unsigned char *)(piVar3 + 3) & 6) != 0) {
        temp_v2 = 0;
        temp_v0 = 0;
        piVar3 = DAT_0063e944;
        if (DAT_0063e948 >= 1) {
          do {
            if (piVar3 == (int *)0x0) break;
            if (piVar3[6] == temp_v3) {
              temp_v2 = (unsigned int)*(unsigned char *)((int)piVar3 + 0xd);
              break;
            }
            piVar3 = (int *)piVar3[5];
            temp_v0 = temp_v0 + 1;
          } while (DAT_0063e948 > temp_v0);
        }
        temp_v0 = 0;
        temp_v6 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = VectorFloatToUnsigned(temp_v7 + temp_v6 * DAT_0063f4c8,3) & 0xff;
        piVar3 = DAT_0063e944;
        if (0 < DAT_0063e948) {
          do {
            if (piVar3 == (int *)0x0) break;
            if (piVar3[6] == temp_v3) {
              if (*(char *)((int)piVar3 + 0xf) == '\0') break;
              if (temp_v2 >= 0x80) {
                temp_v2 = 0x7f;
                VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              else if (temp_v2 != 0) {
                VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              }
              if (*piVar3 == 0) break;
              FUN_0015e874(*piVar3,DAT_0063f4cc);
              break;
            }
            piVar3 = (int *)piVar3[5];
            temp_v0 = temp_v0 + 1;
          } while (DAT_0063e948 > temp_v0);
        }
        unaff_r8 = 1;
        DAT_0063f4e0 = DAT_0063f4e0 | 0x40;
      }
    }
  }
LAB_001441f0:
  temp_v3 = temp_v3 + 1;
  if (DAT_0063e948 <= temp_v3) {
    if (unaff_r8 == 0) {
      return;
    }
    DAT_0063f4dc = 0;
    DAT_0063f4e1 = 1;
    return;
  }
  goto LAB_00144088;
LAB_001440f4:
  piVar3 = (int *)piVar3[5];
  temp_v0 = temp_v0 + 1;
  if (temp_v0 >= DAT_0063e948) goto LAB_001441f0;
  goto LAB_001440a4;
LAB_00144310:
  piVar3 = (int *)piVar3[5];
  temp_v0 = temp_v0 + 1;
  if (temp_v0 >= DAT_0063e948) goto LAB_001443e0;
  goto LAB_00143e98;
}
