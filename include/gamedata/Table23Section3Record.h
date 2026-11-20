/* A record of data table 0x23, section 3 (0x14 bytes); the add-on content extends the section
 * (AocSystem.table23[3]). Its fields are not known yet. */
#ifndef GAMEDATA_TABLE23SECTION3RECORD_H
#define GAMEDATA_TABLE23SECTION3RECORD_H

#include "common.h"

typedef struct Table23Section3Record {
    /* 0x00 */ u8 unk00[0x14];
} Table23Section3Record;
typedef char Table23Section3RecordSizeCheck[sizeof(Table23Section3Record) == 0x14 ? 1 : -1];

#endif
