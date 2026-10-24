/* NON_MATCHING: one instruction - the out-of-range record NULL is `movcs r6, r9` (shared zero register) in retail, `movcs r6, #0` here */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* One 0x8C-byte play log sprite. */
typedef struct PlayLogSprite {
    /* 0x00 */ u8 unk00[0x8C];
} PlayLogSprite;

/* A play log record in data table 0x37; a negative first halfword marks a computed entry. */
typedef struct PlayLogRecord {
    /* 0x00 */ s16 counter;
    /* 0x02 */ u8 unk02[0x3E];
} PlayLogRecord;

/* Local view of the play log work (0x488 bytes). */
typedef struct PlayLogScreen {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ PlayLogSprite sprites[5];
    /* 0x2DC */ u8 list[0x68];
    /* 0x344 */ s32 state;
    /* 0x348 */ u8 unk348[0x14];
    /* 0x35C */ s32 values[50];
    /* 0x424 */ s16 shownIds[50];
} PlayLogScreen;

extern PlayLogScreen *g_playLog; /* 0x43dd08 */
extern const u8 DAT_00402d04[];

extern void *asdMemAlloc(u32, u32, u32, u32, u32);
extern void memClear(void *memory, u32 size);
extern void asdTMTexTableLoadSprites(s32 table);
extern void asdTMTexTableLoadEntryAsync(s32 table, s32 index);
extern void fileSlotLoad(s32 id);
extern void drawParameterBlockClear(void *params);
extern void paramsInit(void *params, const u8 *first, u32 firstBytes, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void FUN_002bd954(PlayLogSprite *sprite, s32 group, s32 id, void *owner, s32 flags, f32 scale);
extern void timerStart(PlayLogSprite *sprite, s32 animation, s32 flags);
extern u32 dataTableGet(u32 group, u32 index);
extern void *dataTableGetEntries(u32 table);
extern u32 dataTableGetCount(u32 table);
extern s32 gameCountersGetWord(u32 counter);
extern s32 FUN_002907a8(void);
extern void FUN_0029f848(u8 *list, s32 count, s32 columns, s32 a, s32 b, s32 c);

/* Looks a record up in data table 0x37, or NULL when out of range. */
static __inline u32 playLogGetTable(PlayLogRecord **records)
{
    u32 table = dataTableGet(0x37, 0);

    *records = (PlayLogRecord *)dataTableGetEntries(table);
    return dataTableGetCount(table);
}

static __inline PlayLogRecord *playLogGetRecord(u32 index)
{
    PlayLogRecord *records;

    return index < playLogGetTable(&records) ? &records[index] : NULL;
}
/* Opens the play log screen: allocates its work, loads resources and builds the list of entries to show. */
void FUN_00194ec8(void)
{
    PlayLogScreen *log;
    PlayLogRecord *record;
    PlayLogRecord *records;
    s32 shown;
    s32 i;

    if (g_playLog == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\PlayLog\\PlayLog.cpp", 125);
        g_playLog = (PlayLogScreen *)asdMemAlloc(0x100, 0x100, 0, 0x488, 1);
    }
    log = g_playLog;
    memClear(log, 0x488);
    log->state = 0;
    asdTMTexTableLoadSprites(0x30);
    asdTMTexTableLoadEntryAsync(0x30, 0);
    fileSlotLoad(0x37);
    drawParameterBlockClear(log);
    paramsInit(log, DAT_00402d04, 0x18, 0, 0, 0, 0, 0, 0, 0, 0);
    for (i = 0; i < 5; i++) {
        FUN_002bd954(&log->sprites[i], 0x30, 0, log, 1, 1.0f);
        timerStart(&log->sprites[i], 0, 0);
    }
    shown = 0;
    for (i = 0; (u32)i < playLogGetTable(&records); i++) {
        record = playLogGetRecord(i);
        if (record != NULL && record->counter < 0) {
            log->values[i] = FUN_002907a8();
        } else {
            log->values[i] = gameCountersGetWord(record->counter & 0xFF);
            if ((record->counter & 0xFF) == 0x29 && log->values[i] != 0) {
                log->values[i] = log->values[i] - 1;
            }
        }
        if (log->values[i] != 0) {
            log->shownIds[shown++] = i;
        }
    }
    FUN_0029f848(log->list, shown, 5, 1, 0, 1);
}

} /* extern "C" */
