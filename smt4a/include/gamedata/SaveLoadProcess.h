#ifndef GAMEDATA_SAVELOADPROCESS_H
#define GAMEDATA_SAVELOADPROCESS_H

#include "common.h"
#include <stddef.h>

/* The work area of Apocalypse's save and load processes (0x1C bytes, allocated by saveLoadStartLoad and
 * saveLoadStartSave). */
struct SaveLoadProcessWorkA {
    /* 0x00 */ u32 process;
    /* 0x04 */ u32 state;       /* 0-5: the save steps, 6-11: the load steps */
    /* 0x08 */ void *buffer;    /* the image being read or written */
    /* 0x0C */ u32 bufferSize;
    /* 0x10 */ s32 slot;        /* the save thread request's file number */
    /* 0x14 */ s32 mode;        /* the request's file kind: 1 keeps `slot` as the save option, else slot - 1 */
    /* 0x18 */ u8 rawLoad;      /* load only: read with request 5 and install the image as it is (no party
                                 * repair, no stored option, no countdown block; the buffer is kept) */
    /* 0x19 */ u8 saveKind;     /* save only: GameSaveBodyA.saveKind of the written image */
};
typedef char SaveLoadProcessWorkALayoutCheck[
    offsetof(SaveLoadProcessWorkA, bufferSize) == 0xC && offsetof(SaveLoadProcessWorkA, mode) == 0x14 &&
    offsetof(SaveLoadProcessWorkA, rawLoad) == 0x18 && sizeof(SaveLoadProcessWorkA) == 0x1C ? 1 : -1];

/* SaveLoadProcessWorkA.state of the load process (saveLoadProcessLoadStep). */
enum {
    LOAD_STATE_READ_IMAGE = 6,      /* allocate the image buffer and request the read */
    LOAD_STATE_WAIT_IMAGE = 7,      /* wait for it, then install the image */
    LOAD_STATE_READ_COUNTDOWNS = 8, /* request the countdown block */
    LOAD_STATE_WAIT_COUNTDOWNS = 9,
    LOAD_STATE_DONE = 10,
    LOAD_STATE_FAILED = 11
};

/* The save thread's request kinds (saveLoadThreadRequestInit's mode) and the file number of the countdown block. */
enum {
    SAVE_REQUEST_WRITE = 2,
    SAVE_REQUEST_READ = 3,
    SAVE_REQUEST_READ_RAW = 5,
    SAVE_FILE_COUNTDOWNS = 0x62
};

/* The eight setting bytes configGetSettings returns, copied into and out of a save image as one record
 * (GameSaveDataA.settings). */
struct SaveSettingsImageA {
    u8 bytes[8];
};

/* The countdown block of the game-data table (gameDataGetExtraBlock), kept in its own file (0x62). */
struct CountdownBlockA {
    u32 countdowns[8];
};

extern "C" {
u8 byte1IsZero(void);
}

#endif
