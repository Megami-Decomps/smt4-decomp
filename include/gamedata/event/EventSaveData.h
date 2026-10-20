/* gamedata/event/EventSaveData.c: the event progress save data. */
#ifndef GAMEDATA_EVENT_EVENTSAVEDATA_H
#define GAMEDATA_EVENT_EVENTSAVEDATA_H

#include "common.h"

/* Event save data, 0x44 bytes (layout not recovered). */
typedef struct EventSaveData {
    /* 0x00 */ u8 data[0x44];
} EventSaveData;

/* The save data block (only the event part is recovered so far). */
typedef struct GameSaveData {
    /* 0x00 */ u8 unk00[0x100];
    /* 0x100 */ EventSaveData event;
} GameSaveData;

#endif
