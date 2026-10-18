/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00165ac8` (_code @ 0x165ac8, 0xe54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: HintPreloadData (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


int * FUN_00165ac8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  char temp_v8;
  char temp_v9;
  char temp_v10;
  char temp_v11;
  char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  int *piVar44;
  int *piVar45;
  unsigned int *puVar46;
  unsigned int *puVar47;
  unsigned int *puVar48;
  unsigned int *puVar49;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int *puVar65;
  unsigned int *puVar66;
  unsigned int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  int temp_v45;
  unsigned char temp_v46;
  unsigned char temp_v47;
  unsigned char temp_v48;
  unsigned char temp_v49;
  int temp_v50;
  int temp_v51;
  unsigned char temp_v52;
  unsigned char temp_v53;
  unsigned char temp_v54;
  unsigned char temp_v55;
  unsigned char temp_v56;
  unsigned char temp_v57;
  unsigned char temp_v58;
  unsigned char temp_v59;
  unsigned char temp_v60;
  unsigned char temp_v61;
  unsigned char temp_v62;
  unsigned char temp_v63;
  char temp_v64;
  unsigned char temp_v65;
  unsigned char temp_v66;
  unsigned char temp_v67;
  unsigned char temp_v68;
  unsigned char temp_v69;
  unsigned char temp_v70;
  
  temp_v45 = 4;
  puVar47 = (unsigned int *)*param_1;
  puVar49 = (unsigned int *)param_1[1];
  temp_v25 = param_1[2];
  do {
    do {
      temp_v24 = temp_v25;
      HintPreloadData(puVar47 + 8);
      temp_v44 = puVar47[7];
      temp_v35 = puVar47[4];
      temp_v39 = puVar47[5];
      temp_v30 = puVar47[2];
      temp_v33 = puVar47[3];
      puVar46 = puVar47 + 8;
      temp_v27 = *puVar47;
      temp_v29 = puVar47[1];
      puVar49[6] = puVar47[6];
      puVar49[7] = temp_v44;
      puVar49[4] = temp_v35;
      puVar49[5] = temp_v39;
      puVar49[2] = temp_v30;
      puVar49[3] = temp_v33;
      puVar48 = puVar49 + 8;
      *puVar49 = temp_v27;
      puVar49[1] = temp_v29;
      puVar47 = puVar46;
      puVar49 = puVar48;
      temp_v25 = temp_v24 - 0x20;
    } while (temp_v24 - 0x20 != 0 && temp_v24 >= 0x20);
    temp_v25 = param_1[2];
    puVar47 = (unsigned int *)((int)puVar46 + ((temp_v24 + 0xe0) - temp_v25));
    puVar49 = (unsigned int *)((int)puVar48 + ((temp_v24 + 0xe0) - temp_v25));
    temp_v45 = temp_v45 - 1;
  } while (temp_v45 != 0);
  temp_v45 = 4;
  puVar47 = (unsigned int *)(*param_1 + (param_1[3] - 4) * 0x100);
  puVar49 = (unsigned int *)(param_1[1] + (param_1[3] - 4) * 0x100);
  temp_v25 = param_1[2];
  do {
    do {
      temp_v24 = temp_v25;
      HintPreloadData(puVar47 + 8);
      temp_v44 = puVar47[7];
      temp_v35 = puVar47[4];
      temp_v39 = puVar47[5];
      temp_v30 = puVar47[2];
      temp_v33 = puVar47[3];
      puVar46 = puVar47 + 8;
      temp_v27 = *puVar47;
      temp_v29 = puVar47[1];
      puVar49[6] = puVar47[6];
      puVar49[7] = temp_v44;
      puVar49[4] = temp_v35;
      puVar49[5] = temp_v39;
      puVar49[2] = temp_v30;
      puVar49[3] = temp_v33;
      puVar48 = puVar49 + 8;
      *puVar49 = temp_v27;
      puVar49[1] = temp_v29;
      puVar47 = puVar46;
      puVar49 = puVar48;
      temp_v25 = temp_v24 - 0x20;
    } while (temp_v24 - 0x20 != 0 && temp_v24 >= 0x20);
    temp_v25 = param_1[2];
    puVar47 = (unsigned int *)((int)puVar46 + ((temp_v24 + 0xe0) - temp_v25));
    puVar49 = (unsigned int *)((int)puVar48 + ((temp_v24 + 0xe0) - temp_v25));
    temp_v45 = temp_v45 - 1;
  } while (temp_v45 != 0);
  temp_v36 = param_1[4];
  temp_v40 = param_1[5];
  temp_v37 = temp_v36 | (temp_v36 << 8);
  temp_v38 = temp_v37 | (temp_v37 << 0x10);
  temp_v51 = param_1[3] - 8;
  temp_v45 = param_1[2] - 0x10;
  temp_v41 = temp_v40 | (temp_v40 << 8);
  temp_v42 = temp_v41 | (temp_v41 << 0x10);
  piVar45 = (int *)(*param_1 + 0x800);
  puVar66 = (unsigned int *)(param_1[1] + 0x800);
  temp_v25 = temp_v45;
  while( 1 ) {
    do {
      temp_v50 = temp_v25;
      puVar65 = puVar66;
      piVar44 = piVar45;
      temp_v34 = piVar44[0x80];
      temp_v28 = piVar44[0x40];
      temp_v26 = *piVar44;
      puVar65[0xc0] = piVar44[0xc0];
      puVar65[0x80] = temp_v34;
      temp_v31 = piVar44[-0xc0];
      temp_v25 = piVar44[-0x80];
      temp_v24 = piVar44[-0x40];
      puVar65[-0x100] = piVar44[-0x100];
      puVar65[-0xc0] = temp_v31;
      temp_v0 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v52 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v55) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v56) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v57) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v22 = (unsigned char)temp_v40;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v65 = (unsigned char)(temp_v41 >> 8);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v66 = (unsigned char)(temp_v42 >> 0x10);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v67 = (unsigned char)(temp_v42 >> 0x18);
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v7 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
      temp_v43 = ~temp_v28;
      temp_v60 = (unsigned char)temp_v25;
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v63) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v61) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v60) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v59) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v54,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v59,0x10);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v20 = UnsignedSaturate(temp_v54 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v55 - temp_v9,0x10);
      temp_v8 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v8,0x10);
      temp_v10 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v57 - temp_v10,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v55,0x10);
      temp_v16 = UnsignedSaturate(temp_v8 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v57,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v55,0x10);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v54 - temp_v57,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v55 - temp_v52,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v57 - temp_v54,0x10);
      HintPreloadData(piVar44 + -0xef);
      temp_v23 = (unsigned char)temp_v36;
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v68 = (unsigned char)(temp_v37 >> 8);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v69 = (unsigned char)(temp_v38 >> 0x10);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v70 = (unsigned char)(temp_v38 >> 0x18);
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x80] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x40] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      *puVar65 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                 (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                 (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                 (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x40] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x81];
      temp_v28 = piVar44[0x41];
      temp_v26 = piVar44[1];
      puVar65[0xc1] = piVar44[0xc1];
      puVar65[0x81] = temp_v34;
      temp_v31 = piVar44[-0xbf];
      temp_v25 = piVar44[-0x7f];
      temp_v24 = piVar44[-0x3f];
      puVar65[-0xff] = piVar44[-0xff];
      puVar65[-0xbf] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v55 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v55) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v56) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v57) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v1 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v63 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v61 - temp_v56,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v10 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v56 - temp_v61,0x10);
      temp_v16 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v43 = ~temp_v28;
      temp_v60 = (unsigned char)temp_v25;
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v61) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v63) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v60) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v59) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v55 - (char)temp_v28,0x10);
      temp_v8 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v8,0x10);
      temp_v9 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v57 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v1 - temp_v10,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v55,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v56,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v57,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v1,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v55,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v56,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v57,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v55 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v56 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      HintPreloadData(piVar44 + -0xae);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7f] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3f] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[1] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x41] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x82];
      temp_v28 = piVar44[0x42];
      temp_v26 = piVar44[2];
      puVar65[0xc2] = piVar44[0xc2];
      puVar65[0x82] = temp_v34;
      temp_v31 = piVar44[-0xbe];
      temp_v25 = piVar44[-0x7e];
      temp_v24 = piVar44[-0x3e];
      puVar65[-0xfe] = piVar44[-0xfe];
      puVar65[-0xbe] = temp_v31;
      temp_v0 = (unsigned char)temp_v24;
      temp_v57 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v57) >> 1;
      temp_v52 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v1 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v55) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v61 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v61 - temp_v57,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v63 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v7 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v57 - temp_v61,0x10);
      temp_v14 = UnsignedSaturate(temp_v1 - temp_v63,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v7,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v7) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v63) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v61) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v57 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v57,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v57 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v53,0x10);
      HintPreloadData(piVar44 + -0x6d);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7e] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3e] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[2] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x42] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x83];
      temp_v28 = piVar44[0x43];
      temp_v26 = piVar44[3];
      puVar65[0xc3] = piVar44[0xc3];
      puVar65[0x83] = temp_v34;
      temp_v31 = piVar44[-0xbd];
      temp_v25 = piVar44[-0x7d];
      temp_v24 = piVar44[-0x3d];
      puVar65[-0xfd] = piVar44[-0xfd];
      puVar65[-0xbd] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v61 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v57,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v43 = ~temp_v28;
      temp_v58 = (unsigned char)temp_v25;
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v63) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v61) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v58) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v59) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v8 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v8,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v9 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v9,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      HintPreloadData(piVar44 + -0x2c);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7d] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3d] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[3] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x43] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x84];
      temp_v28 = piVar44[0x44];
      temp_v26 = piVar44[4];
      puVar65[0xc4] = piVar44[0xc4];
      puVar65[0x84] = temp_v34;
      temp_v31 = piVar44[-0xbc];
      temp_v25 = piVar44[-0x7c];
      temp_v24 = piVar44[-0x3c];
      puVar65[-0xfc] = piVar44[-0xfc];
      puVar65[-0xbc] = temp_v31;
      temp_v0 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v57) >> 1;
      temp_v52 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v56) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v55) >> 1;
      temp_v58 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v58 - temp_v0,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v53,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v58,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v16 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v53 - temp_v6,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v60) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v58) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v61 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v57,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v63) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v61) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v52,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v52 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v8 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v8,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v9 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v9,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v52 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v54,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v52,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v53,0x10);
      HintPreloadData(piVar44 + 0x15);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7c] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3c] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[4] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x44] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x85];
      temp_v28 = piVar44[0x45];
      temp_v26 = piVar44[5];
      puVar65[0xc5] = piVar44[0xc5];
      puVar65[0x85] = temp_v34;
      temp_v31 = piVar44[-0xbb];
      temp_v25 = piVar44[-0x7b];
      temp_v24 = piVar44[-0x3b];
      puVar65[-0xfb] = piVar44[-0xfb];
      puVar65[-0xbb] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v60 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v58) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v60) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v63 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v63 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v56,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v61) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v63) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v7 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v61 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v61,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v7,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v61,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v7,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v10 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v10,0x10);
      temp_v9 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v9,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v10 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      HintPreloadData(piVar44 + 0x56);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7b] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3b] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[5] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x45] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x86];
      temp_v28 = piVar44[0x46];
      temp_v26 = piVar44[6];
      puVar65[0xc6] = piVar44[0xc6];
      puVar65[0x86] = temp_v34;
      temp_v31 = piVar44[-0xba];
      temp_v25 = piVar44[-0x7a];
      temp_v24 = piVar44[-0x3a];
      puVar65[-0xfa] = piVar44[-0xfa];
      puVar65[-0xba] = temp_v31;
      temp_v0 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v57) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v56) >> 1;
      temp_v52 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v55) >> 1;
      temp_v58 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v58 - temp_v0,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v6 - temp_v54,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v10 = UnsignedSaturate(temp_v0 - temp_v58,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v6,0x10);
      temp_v16 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v58) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v7 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v61) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v63) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v11 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v54 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v53 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v52 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v54,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v52,0x10);
      HintPreloadData(piVar44 + 0x97);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x7a] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x3a] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[6] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x46] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x87];
      temp_v28 = piVar44[0x47];
      temp_v26 = piVar44[7];
      puVar65[199] = piVar44[199];
      puVar65[0x87] = temp_v34;
      temp_v31 = piVar44[-0xb9];
      temp_v25 = piVar44[-0x79];
      piVar45 = piVar44 + 8;
      temp_v24 = piVar44[-0x39];
      puVar65[-0xf9] = piVar44[-0xf9];
      puVar65[-0xb9] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v60 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v6) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v58) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v60) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v61 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v61 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v7 - temp_v57,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v62 - temp_v56,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v61,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v7,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v62,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v43 = ~temp_v28;
      temp_v60 = (unsigned char)temp_v25;
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v63) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v62) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v7) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v61) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v60) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v59) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v58)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v62 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v63 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v62,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v63,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v62,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v58 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v58,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v8 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v8,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v9 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v9,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v9 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      HintPreloadData(piVar44 + 0xd8);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x79] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x39] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[7] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x47] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      puVar66 = puVar65 + 8;
      temp_v25 = temp_v50 - 0x20;
    } while (temp_v50 - 0x20 != 0 && temp_v50 >= 0x20);
    if (temp_v50 >= 0x20) {
      temp_v34 = piVar44[0x88];
      temp_v28 = piVar44[0x48];
      temp_v26 = *piVar45;
      puVar65[200] = piVar44[200];
      puVar65[0x88] = temp_v34;
      temp_v31 = piVar44[-0xb8];
      temp_v25 = piVar44[-0x78];
      temp_v24 = piVar44[-0x38];
      puVar65[-0xf8] = piVar44[-0xf8];
      puVar65[-0xb8] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v57 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v57) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v1 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v1) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v55) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v0,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v59) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v60) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v63 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v63 - temp_v57,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v1,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v56,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v57 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v1 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v61) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v63) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v63 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v62 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v63,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v63,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v0,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v53,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v57 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v1 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v57,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v1,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v57,0x10);
      temp_v14 = UnsignedSaturate(temp_v0 - temp_v1,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v53 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v57 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v1 - temp_v0,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v53,0x10);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x78] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x38] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      *puVar66 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                 (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                 (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                 (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x48] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x89];
      temp_v28 = piVar44[0x49];
      temp_v26 = piVar44[9];
      puVar65[0xc9] = piVar44[0xc9];
      puVar65[0x89] = temp_v34;
      temp_v31 = piVar44[-0xb7];
      temp_v25 = piVar44[-0x77];
      temp_v24 = piVar44[-0x37];
      puVar65[-0xf7] = piVar44[-0xf7];
      puVar65[-0xb7] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v60 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v60 - temp_v52,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v6 - temp_v54,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v58 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v60,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v6,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v58,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v58) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v6) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v59) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v60) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v7 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v63 - temp_v56,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v63,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v43 = ~temp_v28;
      temp_v58 = (unsigned char)temp_v25;
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v61) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v63) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v58) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v59) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v63 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v62 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v63,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v63,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v59 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v6 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v59,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v6,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x77] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x37] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[9] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                   (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                   (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                   (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x49] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x8a];
      temp_v28 = piVar44[0x4a];
      temp_v26 = piVar44[10];
      puVar65[0xca] = piVar44[0xca];
      puVar65[0x8a] = temp_v34;
      temp_v31 = piVar44[-0xb6];
      temp_v25 = piVar44[-0x76];
      temp_v24 = piVar44[-0x36];
      puVar65[-0xf6] = piVar44[-0xf6];
      puVar65[-0xb6] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v58 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v58 - temp_v52,0x10);
      temp_v6 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v6 - temp_v53,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v60 - temp_v54,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v59 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v58,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v6,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v60,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v59,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v59) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v60) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v6) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v58) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v63 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v63 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v7 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v7 - temp_v56,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v61 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v63,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v7,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v61,0x10);
      temp_v43 = ~temp_v28;
      temp_v6 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v59 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v61) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v7) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v63) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v6) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v59)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v63 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v62 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v63,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v63,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v9 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v10,0x10);
      temp_v8 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v8,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v9 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v10 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v8 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x76] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x36] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[10] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                    (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                    (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                    (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x4a] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v34 = piVar44[0x8b];
      temp_v28 = piVar44[0x4b];
      temp_v26 = piVar44[0xb];
      puVar65[0xcb] = piVar44[0xcb];
      puVar65[0x8b] = temp_v34;
      temp_v31 = piVar44[-0xb5];
      temp_v25 = piVar44[-0x75];
      piVar45 = piVar44 + 0xc;
      temp_v24 = piVar44[-0x35];
      puVar65[-0xf5] = piVar44[-0xf5];
      puVar65[-0xb5] = temp_v31;
      temp_v52 = (unsigned char)temp_v24;
      temp_v1 = (unsigned char)temp_v26;
      temp_v2 = (unsigned short)((unsigned short)temp_v52 + (unsigned short)temp_v1) >> 1;
      temp_v53 = (unsigned char)((unsigned int)temp_v24 >> 8);
      temp_v57 = (unsigned char)((unsigned int)temp_v26 >> 8);
      temp_v3 = (unsigned short)((unsigned short)temp_v53 + (unsigned short)temp_v57) >> 1;
      temp_v54 = (unsigned char)((unsigned int)temp_v24 >> 0x10);
      temp_v56 = (unsigned char)((unsigned int)temp_v26 >> 0x10);
      temp_v4 = (unsigned short)((unsigned short)temp_v54 + (unsigned short)temp_v56) >> 1;
      temp_v0 = (unsigned char)((unsigned int)temp_v24 >> 0x18);
      temp_v55 = (unsigned char)((unsigned int)temp_v26 >> 0x18);
      temp_v5 = (unsigned short)((unsigned short)temp_v0 + (unsigned short)temp_v55) >> 1;
      temp_v6 = (unsigned char)temp_v31;
      temp_v9 = UnsignedSaturate(temp_v6 - temp_v52,0x10);
      temp_v58 = (unsigned char)(temp_v31 >> 8);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v59 = (unsigned char)(temp_v31 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v59 - temp_v54,0x10);
      temp_v60 = (unsigned char)(temp_v31 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v10 = UnsignedSaturate(temp_v52 - temp_v6,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v16 = UnsignedSaturate(temp_v54 - temp_v59,0x10);
      temp_v18 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v60) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v59) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v58) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v6) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v7 = (unsigned char)temp_v34;
      temp_v9 = UnsignedSaturate(temp_v7 - temp_v1,0x10);
      temp_v62 = (unsigned char)(temp_v34 >> 8);
      temp_v13 = UnsignedSaturate(temp_v62 - temp_v57,0x10);
      temp_v61 = (unsigned char)(temp_v34 >> 0x10);
      temp_v15 = UnsignedSaturate(temp_v61 - temp_v56,0x10);
      temp_v63 = (unsigned char)(temp_v34 >> 0x18);
      temp_v17 = UnsignedSaturate(temp_v63 - temp_v55,0x10);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v7,0x10);
      temp_v14 = UnsignedSaturate(temp_v57 - temp_v62,0x10);
      temp_v16 = UnsignedSaturate(temp_v56 - temp_v61,0x10);
      temp_v18 = UnsignedSaturate(temp_v55 - temp_v63,0x10);
      temp_v43 = ~temp_v28;
      temp_v59 = (unsigned char)temp_v25;
      temp_v58 = (unsigned char)((unsigned int)temp_v25 >> 8);
      temp_v6 = (unsigned char)((unsigned int)temp_v25 >> 0x10);
      temp_v60 = (unsigned char)((unsigned int)temp_v25 >> 0x18);
      temp_v31 = ((unsigned int)((unsigned short)(temp_v5 + temp_v63) >> 1) << 0x18) |
               ((unsigned int)((unsigned short)(temp_v4 + temp_v61) >> 1) << 0x10) |
               ((unsigned int)((unsigned short)(temp_v3 + temp_v62) >> 1) << 8) | (unsigned int)((unsigned short)(temp_v2 + temp_v7) >> 1)
      ;
      temp_v46 = temp_v22 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)));
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v31) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v31) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v31) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v9 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)temp_v43 + (unsigned short)temp_v59) >> 1) + 1)
                               >> 1) + 1) >> 1);
      temp_v11 = UnsignedSaturate(temp_v9 - ' ',0x10);
      temp_v64 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 8) + (unsigned short)temp_v58) >>
                                         1) + 1) >> 1) + 1) >> 1);
      temp_v16 = UnsignedSaturate(temp_v64 - ' ',0x10);
      temp_v8 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x10) + (unsigned short)temp_v6)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v13 = UnsignedSaturate(temp_v8 - ' ',0x10);
      temp_v10 = (char)((unsigned short)(((unsigned short)(((unsigned short)((unsigned short)(unsigned char)(temp_v43 >> 0x18) + (unsigned short)temp_v60)
                                         >> 1) + 1) >> 1) + 1) >> 1);
      temp_v14 = UnsignedSaturate(temp_v10 - ' ',0x10);
      temp_v61 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v7 = (unsigned char)temp_v13 | (unsigned char)(temp_v16 >> 8);
      temp_v12 = UnsignedSaturate(' ' - temp_v9,0x10);
      temp_v17 = UnsignedSaturate(' ' - temp_v64,0x10);
      temp_v13 = UnsignedSaturate(' ' - temp_v8,0x10);
      temp_v14 = UnsignedSaturate(' ' - temp_v10,0x10);
      temp_v63 = (unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8);
      temp_v62 = (unsigned char)temp_v13 | (unsigned char)(temp_v17 >> 8);
      temp_v9 = UnsignedSaturate((char)temp_v2 + temp_v11,0x10);
      temp_v13 = UnsignedSaturate((char)temp_v3 + (char)temp_v16,0x10);
      temp_v14 = UnsignedSaturate((char)temp_v4 + temp_v7,0x10);
      temp_v15 = UnsignedSaturate((char)temp_v5 + temp_v61,0x10);
      temp_v10 = UnsignedSaturate((char)temp_v2 - temp_v11,0x10);
      temp_v16 = UnsignedSaturate((char)temp_v3 - (char)temp_v16,0x10);
      temp_v18 = UnsignedSaturate((char)temp_v4 - temp_v7,0x10);
      temp_v19 = UnsignedSaturate((char)temp_v5 - temp_v61,0x10);
      temp_v61 = UnsignedSaturate(temp_v9 - temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v13 - (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v14 | (unsigned char)(temp_v13 >> 8)) - temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v15 | (unsigned char)(temp_v14 >> 8)) - temp_v63,0x10);
      temp_v31 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v61 = UnsignedSaturate(temp_v10 + temp_v12,0x10);
      temp_v2 = UnsignedSaturate((char)temp_v16 + (char)temp_v17,0x10);
      temp_v3 = UnsignedSaturate(((unsigned char)temp_v18 | (unsigned char)(temp_v16 >> 8)) + temp_v62,0x10);
      temp_v4 = UnsignedSaturate(((unsigned char)temp_v19 | (unsigned char)(temp_v18 >> 8)) + temp_v63,0x10);
      temp_v43 = ((unsigned int)temp_v4 << 0x18) | ((unsigned int)temp_v3 << 0x10) | ((unsigned int)temp_v2 << 8) | (unsigned int)temp_v61;
      temp_v64 = UnsignedSaturate(temp_v59 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v58 - temp_v53,0x10);
      temp_v16 = UnsignedSaturate(temp_v6 - temp_v54,0x10);
      temp_v19 = UnsignedSaturate(temp_v60 - temp_v0,0x10);
      temp_v11 = UnsignedSaturate(temp_v52 - temp_v59,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v58,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v6,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v60,0x10);
      temp_v12 = UnsignedSaturate(temp_v1 - (char)temp_v28,0x10);
      temp_v8 = (char)(temp_v28 >> 8);
      temp_v15 = UnsignedSaturate(temp_v57 - temp_v8,0x10);
      temp_v9 = (char)(temp_v28 >> 0x10);
      temp_v18 = UnsignedSaturate(temp_v56 - temp_v9,0x10);
      temp_v10 = (char)(temp_v28 >> 0x18);
      temp_v21 = UnsignedSaturate(temp_v55 - temp_v10,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v64 + temp_v11);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v13 + (char)temp_v14);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)) +
                               ((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)) +
                               ((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v64 = UnsignedSaturate((char)temp_v28 - temp_v1,0x10);
      temp_v13 = UnsignedSaturate(temp_v8 - temp_v57,0x10);
      temp_v16 = UnsignedSaturate(temp_v9 - temp_v56,0x10);
      temp_v19 = UnsignedSaturate(temp_v10 - temp_v55,0x10);
      temp_v9 = UnsignedSaturate(temp_v52 - temp_v1,0x10);
      temp_v14 = UnsignedSaturate(temp_v53 - temp_v57,0x10);
      temp_v17 = UnsignedSaturate(temp_v54 - temp_v56,0x10);
      temp_v20 = UnsignedSaturate(temp_v0 - temp_v55,0x10);
      temp_v46 = temp_v22 <= (unsigned char)(temp_v12 + temp_v64);
      temp_v47 = temp_v65 <= (unsigned char)((char)temp_v15 + (char)temp_v13);
      temp_v48 = temp_v66 <= (unsigned char)(((unsigned char)temp_v18 | (unsigned char)(temp_v15 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v67 <= (unsigned char)(((unsigned char)temp_v21 | (unsigned char)(temp_v18 >> 8)) +
                               ((unsigned char)temp_v19 | (unsigned char)(temp_v16 >> 8)));
      temp_v31 = (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
               (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      temp_v43 = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
               (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      temp_v32 = (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
               (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
               (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
               (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      temp_v34 = ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
               ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
               ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
               ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      temp_v10 = UnsignedSaturate(temp_v1 - temp_v52,0x10);
      temp_v13 = UnsignedSaturate(temp_v57 - temp_v53,0x10);
      temp_v15 = UnsignedSaturate(temp_v56 - temp_v54,0x10);
      temp_v16 = UnsignedSaturate(temp_v55 - temp_v0,0x10);
      temp_v46 = temp_v23 <= (unsigned char)(temp_v9 + temp_v10);
      temp_v47 = temp_v68 <= (unsigned char)((char)temp_v14 + (char)temp_v13);
      temp_v48 = temp_v69 <= (unsigned char)(((unsigned char)temp_v17 | (unsigned char)(temp_v14 >> 8)) +
                               ((unsigned char)temp_v15 | (unsigned char)(temp_v13 >> 8)));
      temp_v49 = temp_v70 <= (unsigned char)(((unsigned char)temp_v20 | (unsigned char)(temp_v17 >> 8)) +
                               ((unsigned char)temp_v16 | (unsigned char)(temp_v15 >> 8)));
      puVar65[-0x75] =
           (((unsigned int)temp_v46 * temp_v25 + !temp_v46 * temp_v32) & 0xff) |
           (((unsigned int)temp_v47 * temp_v25 + !temp_v47 * temp_v32) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v25 + !temp_v48 * temp_v32) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v25 + !temp_v49 * temp_v32) & 0xff000000);
      puVar65[-0x35] =
           (((unsigned int)temp_v46 * temp_v24 + !temp_v46 * temp_v31) & 0xff) |
           (((unsigned int)temp_v47 * temp_v24 + !temp_v47 * temp_v31) & 0xff00) |
           (((unsigned int)temp_v48 * temp_v24 + !temp_v48 * temp_v31) & 0xff0000) |
           (((unsigned int)temp_v49 * temp_v24 + !temp_v49 * temp_v31) & 0xff000000);
      puVar65[0xb] = (((unsigned int)temp_v46 * temp_v26 + !temp_v46 * temp_v43) & 0xff) |
                     (((unsigned int)temp_v47 * temp_v26 + !temp_v47 * temp_v43) & 0xff00) |
                     (((unsigned int)temp_v48 * temp_v26 + !temp_v48 * temp_v43) & 0xff0000) |
                     (((unsigned int)temp_v49 * temp_v26 + !temp_v49 * temp_v43) & 0xff000000);
      puVar65[0x4b] =
           ((temp_v46 * temp_v28 + !temp_v46 * temp_v34) & 0xff) |
           ((temp_v47 * temp_v28 + !temp_v47 * temp_v34) & 0xff00) |
           ((temp_v48 * temp_v28 + !temp_v48 * temp_v34) & 0xff0000) |
           ((temp_v49 * temp_v28 + !temp_v49 * temp_v34) & 0xff000000);
      puVar66 = puVar65 + 0xc;
    }
    temp_v51 = temp_v51 - 8;
    if (temp_v51 == 0) break;
    piVar45 = (int *)((int)piVar45 + (0x7f0 - temp_v45));
    puVar66 = (unsigned int *)((int)puVar66 + (0x7f0 - temp_v45));
    temp_v25 = temp_v45;
  }
  return param_1;
}
